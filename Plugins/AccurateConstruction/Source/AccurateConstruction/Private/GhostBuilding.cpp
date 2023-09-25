// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostBuilding.h"

// Sets default values
AGhostBuilding::AGhostBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bGenerateOverlapEventsDuringLevelStreaming = true;

	StaticMeshBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshBase"));
	StaticMeshBase->SetCollisionResponseToAllChannels(ECR_Overlap);
	RootComponent = StaticMeshBase;
	StaticMeshBase->SetMobility(EComponentMobility::Movable);

	static ConstructorHelpers::FObjectFinder<UMaterial> GhostBuilding_M_Finder(
		TEXT("Material'/AccurateConstruction/Materials/GhostBuilding_M.GhostBuilding_M'"));

	if (GhostBuilding_M_Finder.Succeeded())
	{
		GhostBuildingMaterial = GhostBuilding_M_Finder.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> ValidGhostBuilding_MI_Finder(
		TEXT("MaterialInstanceConstant'/AccurateConstruction/Materials/ValidGhostBuilding_MI.ValidGhostBuilding_MI'"));
	
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> InvalidGhostBuilding_MI_Finder(
		TEXT("MaterialInstanceConstant'/AccurateConstruction/Materials/InvalidGhostBuilding_MI.InvalidGhostBuilding_MI'"));

	if (ValidGhostBuilding_MI_Finder.Succeeded())
	{
		ValidGostBuilding_MI = ValidGhostBuilding_MI_Finder.Object;
	}

	if (InvalidGhostBuilding_MI_Finder.Succeeded())
	{
		InvalidGhostBuilding_MI = InvalidGhostBuilding_MI_Finder.Object;
	}

}

void AGhostBuilding::SpawnGhost(
	TSubclassOf<ABuildingMaster> MasterClass)
{

	FTransform Transform = this->GetActorTransform();

	FVector Location = Transform.GetLocation();
	FRotator Rotation = Transform.GetRotation().Rotator();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = this;

	CurrentGhostBuilding = GetWorld()->SpawnActor<ABuildingMaster>(MasterClass);

	if (::IsValid(CurrentGhostBuilding))
	{
		BuildingMasterClass = MasterClass;
		ConstructionProxyClass = CurrentGhostBuilding->ConstructionProxyClass;
		DisplayMesh = CurrentGhostBuilding->DisplayMesh;

		StaticMeshBase->SetStaticMesh(DisplayMesh);
		StaticMeshBase->RegisterComponent();

		StaticMeshBase->SetMaterial(0, GhostBuildingMaterial);
	}

	CurrentGhostBuilding->Destroy();
	CurrentGhostBuilding = nullptr;
}

void AGhostBuilding::KillGhost()
{
	//UE_LOG(LogTemp, Warning, TEXT("AGhostBuilding::OnKillGhost"));
	
	BuildingMasterClass = nullptr;
	ConstructionProxyClass = nullptr;
	DisplayMesh = nullptr;

	StaticMeshBase->SetStaticMesh(nullptr);
}

FConstructionRules AGhostBuilding::GetConstructionRules()
{
	FConstructionRules Rules;
	Rules.BuildingMasterClass = this->BuildingMasterClass;
	Rules.ConstructionProxyClass = this->ConstructionProxyClass;
	Rules.DisplayMesh = this->DisplayMesh;
	Rules.Transform = this->GetActorTransform();

	int32 Hour = 4;
	Rules.TimeRequired = FTimespan{ Hour, 0, 0 };
	
	return Rules;
}

bool AGhostBuilding::IsOverlappingActors()
{
	TArray<AActor*> Result;
	GetOverlappingActors(Result);
	return static_cast<bool>(Result.Num());
}

void AGhostBuilding::TickColor(bool Valid)
{
	if (Valid)
	{
		StaticMeshBase->SetMaterial(0, ValidGostBuilding_MI);
	}
	else {
		StaticMeshBase->SetMaterial(0, InvalidGhostBuilding_MI);
	}
}



