// Copyright Pranav 2020


#include "BTService_SwitchVisibility.h"
#include "Kismet/GameplayStatics.h"
#include "HorrorAdventures/Characters/EnemyCharacter.h"
#include "AIController.h"

UBTService_SwitchVisibility::UBTService_SwitchVisibility()
{
    NodeName = "Switch Visibility";

    PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
}

void UBTService_SwitchVisibility::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    AEnemyCharacter* OwnerCharacter =  Cast<AEnemyCharacter>(OwnerComp.GetAIOwner()->GetPawn());

    if(OwnerCharacter != nullptr)
    {
        if(FVector::Dist(OwnerCharacter->GetActorLocation(), PlayerPawn->GetActorLocation()) >= 500)
        {
            OwnerCharacter->TurnInvisibilityOn();
        }

        else
        {
            OwnerCharacter->TurnInvisibilityOff();
        }
    }
}
