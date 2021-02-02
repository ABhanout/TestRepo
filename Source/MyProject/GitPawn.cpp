// Fill out your copyright notice in the Description page of Project Settings.


#include "GitPawn.h"

// Sets default values
AGitPawn::AGitPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGitPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGitPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGitPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

