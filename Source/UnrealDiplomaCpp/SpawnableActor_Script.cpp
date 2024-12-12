// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnableActor_Script.h"

// Sets default values
ASpawnableActor_Script::ASpawnableActor_Script()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnableActor_Script::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnableActor_Script::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

