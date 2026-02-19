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
    const TArray<FNavPathPoint>& points = Path->GetPathPoints();
    const FNavPathPoint& segmentStart = points[MoveSegmentStartIndex];
    const FNavPathPoint& segmentEnd = points[MoveSegmentEndIndex];

    if (SDTUtils::HasJumpFlag(segmentStart))
    {
        //TODO: Update jump along path / nav link proxy
    }
    else
    {
        //TODO: Update navigation along path (move along)
        AController* AICon = Cast<AController>(GetOwner());
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

    const TArray<FNavPathPoint>& points = Path->GetPathPoints();

    const FNavPathPoint& segmentStart = points[MoveSegmentStartIndex];

    if (SDTUtils::HasJumpFlag(segmentStart) && FNavMeshNodeFlags(segmentStart.Flags).IsNavLink())
    {
        //TODO: Handle starting jump
    }
    else
    {
        //TODO: Handle normal segments
    }
}

