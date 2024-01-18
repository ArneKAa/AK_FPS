// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AKCharacter.h"

// Sets default values
AAKCharacter::AAKCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAKCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAKCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

