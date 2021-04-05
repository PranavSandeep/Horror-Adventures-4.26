// Copyright Pranav 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TotemSpawner.generated.h"

UCLASS()
class HORRORADVENTURES_API ATotemSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATotemSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:

	

};
