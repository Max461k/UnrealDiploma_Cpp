// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharakter_Cpp.h"

// Sets default values
APlayerCharakter_Cpp::APlayerCharakter_Cpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharakter_Cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharakter_Cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharakter_Cpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

