// Bryan A Quero all rights properties


#include "BOWSCharacter.h"

// Sets default values
ABOWSCharacter::ABOWSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABOWSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABOWSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABOWSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

