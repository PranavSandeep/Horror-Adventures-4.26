// Copyright Pranav 2020

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_CheckDistanceToPlayer.generated.h"

/**
 * 
 */
UCLASS()
class HORRORADVENTURES_API UBTService_CheckDistanceToPlayer : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_CheckDistanceToPlayer();
	
protected:
	virtual void TickNode(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory, float DeltaSeconds) override;
	
};
