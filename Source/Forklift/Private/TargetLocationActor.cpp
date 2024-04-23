// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetLocationActor.h"

// Sets default values
ATargetLocationActor::ATargetLocationActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATargetLocationActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetLocationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ATargetLocationActor::GetObjectLocation() const
{
	return GetActorLocation();
}


