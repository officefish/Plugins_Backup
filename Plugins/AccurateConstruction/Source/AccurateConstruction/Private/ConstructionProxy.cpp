// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructionProxy.h"

// Sets default values
AConstructionProxy::AConstructionProxy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshBase"));
	StaticMeshBase->SetCollisionResponseToAllChannels(ECR_Overlap);
	RootComponent = StaticMeshBase;
	StaticMeshBase->SetMobility(EComponentMobility::Movable);

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> InProgress_MI_Finder(
		TEXT("MaterialInstanceConstant'/AccurateConstruction/Materials/InProgress_MI.InProgress_MI'"));

	if (InProgress_MI_Finder.Succeeded())
	{
		InProgress_MI = InProgress_MI_Finder.Object;
	}
}

void AConstructionProxy::SetDisplayMesh(UStaticMesh* DisplayMesh)
{
	StaticMeshBase->SetStaticMesh(DisplayMesh);
	StaticMeshBase->RegisterComponent();
	StaticMeshBase->SetMaterial(0, InProgress_MI);
}

