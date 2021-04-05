// Copyright Pranav 2020


#include "BTService_CheckDistanceToPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTService_CheckDistanceToPlayer::UBTService_CheckDistanceToPlayer()
{
    NodeName = "Check Distance to player";
}

void UBTService_CheckDistanceToPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
                                                float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    APawn *PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (PlayerPawn == nullptr)
    {
        return;
    }

    if (OwnerComp.GetAIOwner() == nullptr)
    {
        return;
    }

    if (FVector::Dist(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(), PlayerPawn->GetActorLocation()) <= 500)
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsBool("Is Near Player", true);
    }
    else
    {
        OwnerComp.GetBlackboardComponent()->ClearValue("Is Near Player");
    }
}
