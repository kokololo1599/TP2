// Fill out your copyright notice in the Description page of Project Settings.

#include "SDTPathFollowingComponent.h"
#include "SoftDesignTraining.h"
#include "SDTUtils.h"
#include "SDTAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationSystem.h"
#include "NavLinkCustomInterface.h"

#include "DrawDebugHelpers.h"

USDTPathFollowingComponent::USDTPathFollowingComponent(const FObjectInitializer& ObjectInitializer)
{

}

/**
* This function is called every frame while the AI is following a path.
*/
void USDTPathFollowingComponent::FollowPathSegment(float DeltaTime)
{
    if (!Path) return;

    const TArray<FNavPathPoint>& points = Path->GetPathPoints();
    if (points.Num() <= MoveSegmentEndIndex) return;

    const FNavPathPoint& segmentStart = points[MoveSegmentStartIndex];
    const FNavPathPoint& segmentEnd = points[MoveSegmentEndIndex];

    AController* AICon = Cast<AController>(GetOwner());
    APawn* pawn = AICon ? AICon->GetPawn() : nullptr;
    if (!pawn) return;

    if (SDTUtils::IsNavLink(segmentStart))
    {
        ACharacter* character = Cast<ACharacter>(pawn);
        if (!character) return;

        FVector start = segmentStart.Location;
        FVector end = segmentEnd.Location;

        // advance jump progress using time only
        jumProgress += DeltaTime * 0.8f;
        jumProgress = FMath::Clamp(jumProgress, 0.f, 1.f);

        // horizontal interpolation
        FVector newPos = FMath::Lerp(start, end, jumProgress);

        // parabolic arc for jump
        float jumpHeight = 300.f;
        float heightOffset = 4 * jumpHeight * jumProgress * (1 - jumProgress);

        newPos.Z += heightOffset;

        character->SetActorLocation(newPos);

        if (jumProgress >= 0.98f)
        {
            isJumping = false;
            SetMoveSegment(MoveSegmentEndIndex);
        }

        return;
    }
    else
    {
        // Normal navigation
        const FVector pawnLoc = pawn->GetActorLocation();
        const FVector target = segmentEnd.Location;
        // Consider segment reached in 2D (navmesh walking)
        const float acceptanceRadius = 50.f;
        const float dist2D = FVector2D::Distance(FVector2D(pawnLoc), FVector2D(target));

        if (dist2D <= acceptanceRadius)
        {
            // reached this point -> advance to next segment
            SetMoveSegment(MoveSegmentEndIndex);
            return;
        }

        // drive pawn toward target
        FVector toTarget = target - pawnLoc;
        toTarget.Z = 0.f;
        const FVector dir = toTarget.GetSafeNormal();

        if (UNavMovementComponent* navMove = pawn->FindComponentByClass<UNavMovementComponent>())
        {
            navMove->RequestDirectMove(dir, /*bForceMaxSpeed=*/true);
        }
        else if (ACharacter* character = Cast<ACharacter>(pawn))
        {
            character->AddMovementInput(dir, 1.0f);
        }
    }
}

/**
* This function is called every time the AI has reached a new point on the path.
* If you need to do something at a given point in the path, this is the place.
*/
void USDTPathFollowingComponent::SetMoveSegment(int32 segmentStartIndex)
{
    Super::SetMoveSegment(segmentStartIndex);

    if (!Path) return;

    const TArray<FNavPathPoint>& points = Path->GetPathPoints();
    if (points.Num() <= MoveSegmentEndIndex) return;

    const FNavPathPoint& segmentStart = points[MoveSegmentStartIndex];
    const FNavPathPoint& segmentEnd = points[MoveSegmentEndIndex];

    AController* AICon = Cast<AController>(GetOwner());
    APawn* pawn = AICon ? AICon->GetPawn() : nullptr;
    if (!pawn) return;

    FVector pawnLoc = pawn->GetActorLocation();
    FVector target = segmentEnd.Location;

    isJumping = false;
    jumProgress = 0.f;

    if (SDTUtils::IsNavLink(segmentStart) && FNavMeshNodeFlags(segmentStart.Flags).IsNavLink())
    {
        // Start jump
        isJumping = true;

        ACharacter* character = Cast<ACharacter>(pawn);
        if (!character) return;

        FVector start = character->GetActorLocation();
        FVector end = segmentEnd.Location;

        // rotation du personnage (TODO: à paufiner)
        FVector dir = end - start;
        character->SetActorRotation(dir.ToOrientationQuat());

        DrawDebugLine(GetWorld(), start, end, FColor::Cyan, false, 5.f, 0, 5.f);
        DrawDebugSphere(GetWorld(), end, 50, 12, FColor::Yellow, false, 5.f);

        return;
    }
    else
    {
        float acceptanceRadius = 50.f;
        float dist2D = FVector2D::Distance(FVector2D(pawnLoc), FVector2D(target));

        if (dist2D <= acceptanceRadius)
        {
            SetMoveSegment(MoveSegmentEndIndex);
            return;
        }

        FVector toTarget = target - pawnLoc;
        toTarget.Z = 0.f;
        FVector dir = toTarget.GetSafeNormal();

        if (UNavMovementComponent* navMove = pawn->FindComponentByClass<UNavMovementComponent>())
        {
            navMove->RequestDirectMove(dir, true);
        }
        else if (ACharacter* character = Cast<ACharacter>(pawn))
        {
            character->AddMovementInput(dir, 1.0f);
        }
    }
}