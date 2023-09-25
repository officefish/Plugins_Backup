// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructionManager.h"

// Sets default values
AConstructionManager::AConstructionManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bTickEvenWhenPaused = true;
	//bTickInEditor = true;

	ConstructRegistry();

	OnConstructionCompleteDelegate.AddDynamic(this, &AConstructionManager::OnConstructionComplete);
}

void AConstructionManager::OnConstructionComplete(FConstructionQueue Queue)
{
	/*UE_LOG(LogTemp, Warning,
		TEXT("ConstructionManager::OnConstructionComplete"));*/

	this->FinishConstruction(Queue);
}


void AConstructionManager::ConstructRegistry()
{
	TCategoryRegistry ResidentalBuildings;
	TCategoryRegistry IndustrialBuildings;
	TCategoryRegistry CommercialBuildings;
	TCategoryRegistry ScientificBuildings;
	TCategoryRegistry MilitaryBuildings;
	TCategoryRegistry ReligiousBuildings;
	TCategoryRegistry AdministrativeBuildings;

	BuildingsRegistry.Add(EEBuildingCategory::Residential, ResidentalBuildings);
	BuildingsRegistry.Add(EEBuildingCategory::Industrial, IndustrialBuildings);
	BuildingsRegistry.Add(EEBuildingCategory::Commercial, CommercialBuildings);
	BuildingsRegistry.Add(EEBuildingCategory::Scientific, ScientificBuildings);
	BuildingsRegistry.Add(EEBuildingCategory::Military, MilitaryBuildings);
	BuildingsRegistry.Add(EEBuildingCategory::Religious, ReligiousBuildings);
	BuildingsRegistry.Add(EEBuildingCategory::Administrative, AdministrativeBuildings);

	RegisterBuildings();
}

void AConstructionManager::RegisterBuildings()
{
	/* Residental Classes */
	TCategoryRegistry* ResidentalBuildingsPtr = BuildingsRegistry
		.Find(EEBuildingCategory::Residential);

	static ConstructorHelpers::FClassFinder<ABuildingMaster> AppartmentSmallClassFound(
		TEXT("Class'/AccurateConstruction/Buildings/Residental/AppartmentSmall.AppartmentSmall_C'"));

	if (AppartmentSmallClassFound.Succeeded())
	{
		/*UE_LOG(LogTemp, Warning,
			TEXT("AppartmentSmallClassFound.Succeeded"));*/
		
		ResidentalBuildingsPtr->Add(AppartmentSmallClassFound.Class);

		/*UE_LOG(LogTemp, Warning,
			TEXT("ResidentalBuildings.length: %d"), ResidentalBuildings.Num());

		TCategoryRegistry* ResidentalBuildingsPtr = BuildingsRegistry
			.Find(EEBuildingCategory::Residential);*/

		UE_LOG(LogTemp, Warning,
			TEXT("ResidentalBuildingsPtr.length: %d"), ResidentalBuildingsPtr->Num());

	}

	/* Commercial classes */
	TCategoryRegistry* CommercialBuildingsPtr = BuildingsRegistry
		.Find(EEBuildingCategory::Commercial);

	static ConstructorHelpers::FClassFinder<ABuildingMaster> MarketSmallClassFound(
		TEXT("Class'/AccurateConstruction/Buildings/Commercial/MarketSmall.MarketSmall_C'"));


	if (MarketSmallClassFound.Succeeded())
	{
		/*UE_LOG(LogTemp, Warning,
			TEXT("MarketSmallClassFound.Succeeded"));*/

		CommercialBuildingsPtr->Add(MarketSmallClassFound.Class);
	}
}

void AConstructionManager::QueueConstruction(FConstructionRules Rules)
{
	UE_LOG(LogTemp, Warning,
		TEXT("ConstructionManager::QueueConstruction"));

	FVector Location = Rules.Transform.GetLocation();
	FRotator Rotation = Rules.Transform.GetRotation().Rotator();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = this;

	/*  */
	if (::IsValid(GetWorld())) {

		// Spawn ConstructionManager (maybe it should be scene component instead)
		AConstructionProxy* Proxy = GetWorld()->SpawnActor<AConstructionProxy>(Rules.ConstructionProxyClass,
			Location, Rotation, SpawnInfo);

		FConstructionQueue Queue;
		Queue.Proxy = Proxy;
		Queue.Rules = Rules;

		Queues.Add(Queue);

		// Dispatch event with proxy
		OnConstructionCompleteDelegate.Broadcast(Queue);
	}
}

void AConstructionManager::FinishConstruction(FConstructionQueue Queue)
{
	//UE_LOG(LogTemp, Warning,
	//	TEXT("ConstructionManager::FinishConstruction"));

	Queues.Remove(Queue);

	AConstructionProxy* Proxy = Queue.Proxy;

	if (::IsValid(Proxy) == false) return;

	Proxy->Destroy();

	FVector Location = Queue.Rules.Transform.GetLocation();
	FRotator Rotation = Queue.Rules.Transform.GetRotation().Rotator();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = this;

	ABuildingMaster* Building = GetWorld()->SpawnActor<ABuildingMaster>(
		Queue.Rules.BuildingMasterClass,
		Location, Rotation, SpawnInfo);

	if (::IsValid(Building))
	{
		UE_LOG(LogTemp, Warning,
		TEXT("Bilding construction complete."));
	}
}

TSubclassOf<ABuildingMaster> AConstructionManager::GetBuildingMasterClass(uint8 BuildingCategory, int BuildingIndex)
{
	EEBuildingCategory Category = static_cast<EEBuildingCategory>(BuildingCategory);
	TCategoryRegistry* CategoryRegistryPtr = BuildingsRegistry.Find(Category);

	if (CategoryRegistryPtr != nullptr)
	{
		/*UE_LOG(LogTemp, Warning,
			TEXT("Valid Registrty"));

		UE_LOG(LogTemp, Warning,
			TEXT("Category Registry Num buildings: %d"), CategoryRegistryPtr->Num());*/

		if (CategoryRegistryPtr->Num() && BuildingIndex < CategoryRegistryPtr->Num())
		{
			return (*CategoryRegistryPtr)[BuildingIndex];
			//auto ClassName = MasterClass->GetName(); // *It->GetName();

			//UE_LOG(LogTemp, Warning, TEXT("ClassName: %s"), *ClassName);

			
		}
	}

	return nullptr;
	//return Rules;
}

// Called when the game starts or when spawned
void AConstructionManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConstructionManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

