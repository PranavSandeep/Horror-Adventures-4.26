// Copyright Pranav 2020

#pragma once

#include "CoreMinimal.h"

#include "Engine/TriggerVolume.h"
#include "GameFramework/Actor.h"
#include "Totem_Spawner.generated.h"

UCLASS()
class HORRORADVENTURES_API ATotem_Spawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATotem_Spawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	ATriggerVolume*  Spawner;

	

private:

	UPROPERTY(EditAnywhere, Category="Totem")
	AActor* Totem;

	class APlayerCharacter* PlayerCharacter;

	FVector TotemSpawnLocation;

};
