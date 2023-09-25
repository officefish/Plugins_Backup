// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructionProxy.h"
#include "BuildingMaster.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Misc/DateTime.h"
#include "Misc/Timespan.h"
#include "ConstructionManager.generated.h"

class AConstructionManager;

UENUM(BlueprintType)
enum class EEBuildingCategory : uint8
{
	Residential = 0		UMETA(DisplayName = "Residential"),
	Industrial = 1		UMETA(DisplayName = "Industrial"),
	Commercial = 2		UMETA(DisplayName = "Commercial"),
	Scientific = 3		UMETA(DisplayName = "Scientific"),
	Military = 4		UMETA(DisplayName = "Military"),
	Religious = 5		UMETA(DisplayName = "Religious"),
	Administrative = 6  UMETA(DisplayName = "Administrative")
};


USTRUCT(BlueprintType)
struct FConstructionRules
{
	GENERATED_BODY();


public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		TSubclassOf<ABuildingMaster> BuildingMasterClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		TSubclassOf<AConstructionProxy> ConstructionProxyClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		FTransform Transform;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		UStaticMesh* DisplayMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		FTimespan TimeRequired;


};


USTRUCT(BlueprintType)
struct FConstructionQueue
{
	GENERATED_BODY();

	bool operator==(const FConstructionQueue& Other) const
	{
		return Proxy == Other.Proxy;
	}


public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		AConstructionProxy* Proxy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		FConstructionRules Rules;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConstuctionCompleteDelegate, FConstructionQueue, Queue);

UCLASS()
class ACCURATECONSTRUCTION_API AConstructionManager : public AActor
{
	GENERATED_BODY()

	typedef TArray<TSubclassOf<ABuildingMaster>> TCategoryRegistry;
	typedef TMap<EEBuildingCategory, TCategoryRegistry> TBuildingsRegistry;
	typedef TArray<FConstructionQueue> TConstructionQueues;
	
public:	
	// Sets default values for this actor's properties
	AConstructionManager();

public:

	UFUNCTION(BlueprintCallable, Category = "AccurateConstruction")
		void QueueConstruction(FConstructionRules ConstructionData);

	UFUNCTION(BlueprintCallable, Category = "AccurateConstruction")
		void FinishConstruction(FConstructionQueue Queue);

	UFUNCTION(BlueprintPure, Category = "AccurateConstruction")
		TSubclassOf<ABuildingMaster> GetBuildingMasterClass(uint8 BuildingCategory, int BuildingIndex);

	UFUNCTION(BlueprintCallable, Category = "AccurateConstruction")
	    void OnConstructionComplete(FConstructionQueue Queue);

public:

	UPROPERTY(BlueprintAssignable, Category = "AccurateConstruction")
		FConstuctionCompleteDelegate OnConstructionCompleteDelegate;

private:

	void ConstructRegistry();
	void RegisterBuildings();
	

private:

	TBuildingsRegistry BuildingsRegistry;
	TConstructionQueues Queues;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
