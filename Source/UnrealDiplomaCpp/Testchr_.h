// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Testchr_.generated.h"

UCLASS()
class UNREALDIPLOMACPP_API ATestchr_ : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestchr_();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadWrite,Category = Testchr)
    int testchrnumber{};
   
// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
