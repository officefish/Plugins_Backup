// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostBuilding.h"

// Sets default values
AGhostBuilding::AGhostBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bGenerateOverlapEventsDuringLevelStreaming = true;

	SlopeTraceDistance = 1000.0f;
	MaxSlopeDifference = 40.0f;


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

float AGhostBuilding::SlopeTrace(FVector TraceVector)
{
	FVector TraceStart = TraceVector + FVector(0, 0, SlopeTraceDistance);
	FVector TraceEnd = TraceVector - FVector(0, 0, SlopeTraceDistance);

	FHitResult Hit;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_GameTraceChannel1, QueryParams);

	float LocationZ = this->GetActorLocation().Z;
	float InpactZ = Hit.ImpactPoint.Z;

	return LocationZ - InpactZ;

}

bool AGhostBuilding::SlopeCheck()
{
	FVector Origin;
	FVector Extent;
	this->GetActorBounds(true, Origin, Extent);

	FVector Location = this->GetActorLocation();
	FVector Forward = this->GetActorTransform().GetRotation().GetForwardVector();
	FVector Right = this->GetActorTransform().GetRotation().GetRightVector();

	TArray<float> Differences;

	// Calculate Slope
	FVector Vec1 = Forward + Right;
	Vec1 *= Extent;
	Vec1 += Location;
	float Diff1 = SlopeTrace(Vec1);
	Differences.Add(Diff1);

	FVector Vec2 = (Forward * -1) + Right;
	Vec2 *= Extent;
	Vec2 += Location;
	float Diff2 = SlopeTrace(Vec2);
	Differences.Add(Diff2);

	FVector Vec3 = (Forward) + (Right * -1);
	Vec3 *= Extent;
	Vec3 += Location;
	float Diff3 = SlopeTrace(Vec3);
	Differences.Add(Diff3);

	FVector Vec4 = (Forward * -1)+ (Right * -1);
	Vec4 *= Extent;
	Vec4 += Location;
	float Diff4 = SlopeTrace(Vec4);
	Differences.Add(Diff4);

	float LocDiff = SlopeTrace(Location);
	Differences.Add(LocDiff);

	int32 MinIndex;
	float MinValue;

	int32 MaxIndex;
	float MaxValue;

	UKismetMathLibrary::MinOfFloatArray(Differences, MinIndex, MinValue);
	UKismetMathLibrary::MaxOfFloatArray(Differences, MaxIndex, MaxValue);

	if (MinIndex > -1 && MaxIndex > -1)
	{
		FVector TraceStart = Location + FVector(0, 0, SlopeTraceDistance);
		FVector TraceEnd = Location - FVector(0, 0, SlopeTraceDistance);
		FVector HalfSize = FVector{Extent.X, Extent.Y, 0};
		FRotator Orientation;

		FHitResult Hit;

		ECollisionChannel LandscapeChannel = ECC_GameTraceChannel1;

		TArray<AActor*> ActorsToIgnore;

		bool BoxTrace = UKismetSystemLibrary::BoxTraceSingle(GetWorld(),
			TraceStart, TraceEnd, HalfSize, Orientation,
			UEngineTypes::ConvertToTraceType(LandscapeChannel), false,
			ActorsToIgnore, EDrawDebugTrace::None, Hit, true			
		);

		if (BoxTrace)
		{
			FVector NewLocation{ Location.X, Location.Y, Hit.ImpactPoint.Z };
			this->SetActorLocation(NewLocation);
		}
	}

	float MinValueAbs = UKismetMathLibrary::Abs(MinValue);
	float MaxValueAbs = UKismetMathLibrary::Abs(MaxValue);

	bool bBadLocation = (MaxValueAbs >= MaxSlopeDifference)
		|| (MinValueAbs >= MaxSlopeDifference);

	return bBadLocation;
}



