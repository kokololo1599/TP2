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
* MoveSegmentStartIndex and MoveSegmentEndIndex specify where we are on the path point array.
*/
void USDTPathFollowingComponent::FollowPathSegment(float DeltaTime)
{
    if (!Path) return;

    const TArray<FNavPathPoint>& points = Path->GetPathPoints();
    if (points.Num() <= MoveSegmentEndIndex) return;

    const FNavPathPoint& segmentStart = points[MoveSegmentStartIndex];
    const FNavPathPoint& segmentEnd = points[MoveSegmentEndIndex];

    AController* AICon = Cast<AController>(GetOwner());

    if (SDTUtils::IsNavLink(segmentStart))
    {
        ACharacter* character = AICon ? Cast<ACharacter>(AICon->GetPawn()) : nullptr;

        //TODO: Update jump along path / nav link proxy
        if (character->GetCharacterMovement()->IsFalling())
        {
            return;
        }

        SetMoveSegment(MoveSegmentEndIndex);
        return;
    }
    else
    {
        //TODO: Update navigation along path (move along)
        APawn* pawn = AICon ? AICon->GetPawn() : nullptr;
        if (!pawn)
            return;

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

    if (SDTUtils::IsNavLink(segmentStart) && FNavMeshNodeFlags(segmentStart.Flags).IsNavLink())
    {
        //TODO: Handle starting jump
        ACharacter* character = Cast<ACharacter>(pawn);
        if (!character) return;

        FVector start = character->GetActorLocation();
        FVector end = segmentEnd.Location;

        float minJumpHeight = 200.f;
        if (FMath::IsNearlyEqual(start.Z, end.Z))
        {
            end.Z += minJumpHeight;
        }

        DrawDebugLine(GetWorld(), start, end, FColor::Cyan, false, 5.f, 0, 5.f);
        DrawDebugSphere(GetWorld(), end, 50, 12, FColor::Yellow, false, 5.f);

        FVector launchVelocity;
        float arcFactor = 0.75f;
        bool bFoundVelocity = UGameplayStatics::SuggestProjectileVelocity(
            this,
            launchVelocity,
            start,
            end,
            1200.f, // TossSpeed
            false,  // bHighArc
            0.f,
            0.f,
            ESuggestProjVelocityTraceOption::DoNotTrace
        );
        UE_LOG(LogTemp, Warning, TEXT("Jump segment: FoundVelocity=%d"), bFoundVelocity);

        if (!bFoundVelocity)
        {
            FVector horizontal = (end - start);
            horizontal.Z = 0.f;
            float distance = horizontal.Size();
            horizontal = horizontal.GetSafeNormal();

            float speed = FMath::Max(distance * 2.f, 600.f);
            float vertical = FMath::Max(minJumpHeight, 400.f);

            launchVelocity = horizontal * speed;
            launchVelocity.Z = vertical;
        }

        if (character->GetCharacterMovement()->IsMovingOnGround())
        {
            character->LaunchCharacter(launchVelocity, true, true);
            UE_LOG(LogTemp, Warning, TEXT("LaunchCharacter executed!"));
        }

        return;
    }
    else
    {
        //TODO: Handle normal segments
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

