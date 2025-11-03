// Bryan A Quero all rights properties

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BOW_HeroCharacter.generated.h"

UCLASS()
class BOWARSPROTO_API ABOW_HeroCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABOW_HeroCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
