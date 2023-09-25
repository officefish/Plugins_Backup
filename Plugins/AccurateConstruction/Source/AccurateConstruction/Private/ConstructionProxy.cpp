// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructionProxy.h"

// Sets default values
AConstructionProxy::AConstructionProxy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup default values for class fields
	SetupDefaults();

	// Construct Subobjects
	ConstructSubObjects();

}

void AConstructionProxy::SetupDefaults()
{
	bIsConstructionCompleted = false;
}


void AConstructionProxy::ConstructSubObjects()
{
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));

	RootComponent = Scene;
}

// Called when the game starts or when spawned
void AConstructionProxy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConstructionProxy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsConstructionCompleted)
	{
		OnConstructionCompleteDelegate.Broadcast(this);
		bIsConstructionCompleted = true;
	}

}

