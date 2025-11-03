// Bryan A Quero all rights properties


#include "BOW_HeroCharacter.h"

// Sets default values
ABOW_HeroCharacter::ABOW_HeroCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABOW_HeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABOW_HeroCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABOW_HeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

