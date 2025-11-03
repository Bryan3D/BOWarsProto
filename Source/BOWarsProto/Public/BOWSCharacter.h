// Bryan A Quero all rights properties

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BOWSCharacter.generated.h"

UCLASS()
class BOWARSPROTO_API ABOWSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABOWSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
