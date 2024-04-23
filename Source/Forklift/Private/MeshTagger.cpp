// Fill out your copyright notice in the Description page of Project Settings.


#include "MeshTagger.h"

#include "Engine/StaticMeshActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMeshTagger::AMeshTagger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMeshTagger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeshTagger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AMeshTagger::AddTagsToMeshes()
{
	// Get all actors in the world
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GEngine->GetWorld(), AStaticMeshActor::StaticClass(), FoundActors);

	// Iterate through each actor
	for (AActor* Actor : FoundActors)
	{
		AStaticMeshActor* StaticMeshActor = Cast<AStaticMeshActor>(Actor);
		if (StaticMeshActor)
		{
			// Check if the actor already has the tag
			if (!StaticMeshActor->ActorHasTag("MyTag"))
			{
				// If not, add the tag
				StaticMeshActor->Tags.Add("MyTag");
			}
		}
	}
}

