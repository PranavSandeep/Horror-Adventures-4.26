// Copyright Pranav 2020

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "ToggleLight.generated.h"

UCLASS()
class HORRORADVENTURES_API AToggleLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AToggleLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TurnOff();

	void TurnOn();

private:
	class UPointLightComponent* Light;

	UPROPERTY(EditAnywhere, Category = "Intensity")
	float Intensity;

};
