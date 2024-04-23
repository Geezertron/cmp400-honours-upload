// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCloudCollision.h"

// Sets default values
AMyCloudCollision::AMyCloudCollision()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCloudCollision::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCloudCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

