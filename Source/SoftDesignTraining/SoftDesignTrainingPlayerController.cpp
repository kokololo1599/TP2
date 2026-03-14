// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SoftDesignTrainingPlayerController.h"
#include "SoftDesignTraining.h"
#include "SoftDesignTrainingMainCharacter.h"

#include "DrawDebugHelpers.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "SDTBridge.h"
#include "SDTBoatOperator.h"
#include "Engine/OverlapResult.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"

ASoftDesignTrainingPlayerController::ASoftDesignTrainingPlayerController()
{
    // Make a path following component
    m_PathFollowingComponent = CreateDefaultSubobject<USDTPathFollowingComponent>(TEXT("PathFollowingComponent"));
}

void ASoftDesignTrainingPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Move camera
    InputComponent->BindAxis("MoveForward", this, &ASoftDesignTrainingPlayerController::MoveCameraForward);
    InputComponent->BindAxis("MoveRight", this, &ASoftDesignTrainingPlayerController::MoveCameraRight);

    // Zoom camera
    InputComponent->BindAxis("Zoom", this, &ASoftDesignTrainingPlayerController::ZoomCamera);

    // Move character on click
    InputComponent->BindAction("MoveCharacter", EInputEvent::IE_Released, this, &ASoftDesignTrainingPlayerController::MoveCharacter);
    
    InputComponent->BindAction("Activate", EInputEvent::IE_Pressed, this, &ASoftDesignTrainingPlayerController::Activate);
    InputComponent->BindAction("Activate", EInputEvent::IE_Released, this, &ASoftDesignTrainingPlayerController::Deactivate);
}

void ASoftDesignTrainingPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Always show the mouse
    bShowMouseCursor = true;

    // Allow character to be moved by default 
    m_CanMoveCharacter = true;

    // In case we are activating a bridge
    m_BridgeActivated = nullptr;

    // In case we are activating a boat operator
    m_BoatOperatorActivated = nullptr;
}

void ASoftDesignTrainingPlayerController::MoveCameraForward(float value)
{
    ASoftDesignTrainingMainCharacter* character = Cast<ASoftDesignTrainingMainCharacter>(GetPawn());

    if (character)
    {
        character->MoveCameraForward(value);
    }
}

void ASoftDesignTrainingPlayerController::MoveCameraRight(float value)
{
    ASoftDesignTrainingMainCharacter* character = Cast<ASoftDesignTrainingMainCharacter>(GetPawn());

    if (character)
    {
        character->MoveCameraRight(value);
    }
}

void ASoftDesignTrainingPlayerController::ZoomCamera(float axisValue)
{
    ASoftDesignTrainingMainCharacter* character = Cast<ASoftDesignTrainingMainCharacter>(GetPawn());

    if (character)
    {
        character->ZoomCamera(axisValue);
    }
}

void ASoftDesignTrainingPlayerController::MoveCharacter()
{
    // TODO : find the position of the mouse in the world 
    // And move the agent to this position IF possible
    // Validate you can move through m_CanMoveCharacter
    if (!m_CanMoveCharacter) return;
    APawn* pawn = GetPawn();
    if (!pawn) return;
    
    // get click location
    FHitResult hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, true, hit) || !hit.bBlockingHit) return;

    const FVector start = pawn->GetActorLocation();
    const FVector goal = hit.Location;

    // find path
    UNavigationSystemV1* navSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!navSys) return;

    UNavigationPath* navPath = navSys->FindPathToLocationSynchronously(
        GetWorld(),
        start,
        goal,
        pawn,
        nullptr
    );

    if (!navPath || navPath->IsPartial())
    {
        DrawDebugSphere(GetWorld(), goal, 22.f, 12, FColor::Red, false, 2.0f);
        return;
    }

    // draw debug
    const float lifeTime = 2.5f;
    const float thickness = 4.0f;
    const float nodeRadius = 18.f;

    const TArray<FVector>& pts = navPath->PathPoints;

    for (int32 i = 0; i < pts.Num(); ++i)
    {
        DrawDebugSphere(GetWorld(), pts[i], nodeRadius, 12, FColor::Cyan, false, lifeTime);
        DrawDebugString(
            GetWorld(),
            pts[i] + FVector(0.f, 0.f, 30.f),
            FString::Printf(TEXT("%d"), i),
            nullptr,
            FColor::White,
            lifeTime
        );

        if (i + 1 < pts.Num())
        {
            DrawDebugLine(GetWorld(), pts[i], pts[i + 1], FColor::Green, false, lifeTime, 0, thickness);
        }
    }
    
    if (m_PathFollowingComponent && navPath) {
        m_PathFollowingComponent->RequestMove(FAIMoveRequest(goal), navPath->GetPath());
    }
}

void ASoftDesignTrainingPlayerController::Activate()
{
    APawn* pawn = GetPawn();
    if (pawn == nullptr)
    {
        return;
    }

    m_CanMoveCharacter = false;
    // TODO : Mouvement of the agent should be stopped !!

    // Make an overlap to find what is near us to activate it
    TArray<FOverlapResult> results;
    GetWorld()->OverlapMultiByChannel(results, pawn->GetActorLocation(), pawn->GetActorRotation().Quaternion(), ECollisionChannel::ECC_WorldDynamic, FCollisionShape::MakeSphere(200.f));

    for (FOverlapResult& result : results)
    {
        AActor* actor = result.GetActor();
        ASDTBridge* bridge = Cast<ASDTBridge>(actor);
        if (bridge)
        {
            bridge->Activate();
            m_BridgeActivated = bridge;
            break;
        }

        ASDTBoatOperator* boatOperator = Cast<ASDTBoatOperator>(actor);
        if (boatOperator)
        {
            boatOperator->Activate();
            m_BoatOperatorActivated = boatOperator;
            break;
        }
    }
}

void ASoftDesignTrainingPlayerController::Deactivate()
{
    m_CanMoveCharacter = true;

    if (m_BridgeActivated)
    {
        m_BridgeActivated->Deactivate();
    }
    if (m_BoatOperatorActivated)
    {
        m_BoatOperatorActivated->Deactivate();
    }
}