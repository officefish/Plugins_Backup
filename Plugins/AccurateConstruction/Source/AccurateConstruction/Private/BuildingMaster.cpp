// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingMaster.h"

// Sets default values
ABuildingMaster::ABuildingMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//this->OverlappEventE
	//this->SetColl

	bGenerateOverlapEventsDuringLevelStreaming = true;

	// Setup default values for class fields
	SetupDefaults();

	// Construct Subobjects
	ConstructSubObjects();

	// Setup Subobjects
	SetupSubObjects();

}

void ABuildingMaster::SetupDefaults()
{
	ConstructionProxyClass = AConstructionProxy::StaticClass();
	/* Default Construction TimeRequired */
	TimeRequired = FTimespan(4, 0, 0);
}

void ABuildingMaster::ConstructSubObjects()
{
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));

	StaticMeshBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshBase"));
	StaticMeshBase->SetCollisionResponseToAllChannels(ECR_Overlap);

	RootComponent = Scene;
}

void ABuildingMaster::SetupSubObjects()
{
	Scene->CreationMethod = EComponentCreationMethod::Native;
	Scene->Mobility = EComponentMobility::Type::Static;

	//StaticMeshBase
	StaticMeshBase->SetMobility(EComponentMobility::Movable);
	StaticMeshBase->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
}

void ABuildingMaster::OnConstruction(const FTransform& Transform)
{
	if (::IsValid(StaticMeshBase))
	{
		StaticMeshBase->SetStaticMesh(DisplayMesh);
	}
}

// Called when the game starts or when spawned
void ABuildingMaster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildingMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

