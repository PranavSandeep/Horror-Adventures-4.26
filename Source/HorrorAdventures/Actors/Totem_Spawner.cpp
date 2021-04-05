// Copyright Pranav 2020


#include "Totem_Spawner.h"
#include "HorrorAdventures/Characters/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
ATotem_Spawner::ATotem_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Spawner = CreateDefaultSubobject<ATriggerVolume>(FName("Spawn Volume"));
	
	
}

// Called when the game starts or when spawned
void ATotem_Spawner::BeginPlay()
{
	Super::BeginPlay();

	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(this, 0);

	PlayerCharacter = Cast<APlayerCharacter>(PlayerCharacter);

	TotemSpawnLocation = Spawner->GetActorLocation();

	
	
}

// Called every frame
void ATotem_Spawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(Spawner->IsOverlappingActor(PlayerCharacter))
	{
		PlayerCharacter->Totems++;
	}

	UE_LOG(LogTemp, Warning, TEXT("Hello!!"))

}

