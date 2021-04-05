// Copyright Pranav 2020


#include "ToggleLight.h"
#include "Components/PointLightComponent.h"


// Sets default values
AToggleLight::AToggleLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Light = CreateDefaultSubobject<UPointLightComponent>(FName("Light"));
	RootComponent = Light;

	Light->SetIntensity(Intensity);

}

// Called when the game starts or when spawned
void AToggleLight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AToggleLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AToggleLight::TurnOff()
{
	Light->SetIntensity(0.f);
}

void AToggleLight::TurnOn()
{
	Light->SetIntensity(Intensity);
}

