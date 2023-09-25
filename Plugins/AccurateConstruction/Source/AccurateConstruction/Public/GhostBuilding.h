// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "ConstructionManager.h"
#include "Materials/MaterialInstanceConstant.h"
#include "GhostBuilding.generated.h"



/* Spawn ghost when new building construction in plans delegate. */
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnGhostDelegate, FGhostBuildingRules, Rules);

/* Kill ghost when new building construction started or canceled */
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKillGhostDelegate);



UCLASS()
class ACCURATECONSTRUCTION_API AGhostBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGhostBuilding();

public:

	UFUNCTION(BlueprintCallable, meta = (Category = "AccurateConstruction"))
		void SpawnGhost(TSubclassOf<ABuildingMaster> MasterClass);

	UFUNCTION(BlueprintCallable, meta = (Category = "AccurateConstruction"))
		void KillGhost();

	UFUNCTION(BlueprintPure, meta = (Category = "AccurateConstruction"))
		FConstructionRules GetConstructionRules();

	UFUNCTION(BlueprintPure, meta = (Category = "AccurateConstruction"))
		bool IsOverlappingActors();

	UFUNCTION(BlueprintCallable, meta = (Category = "AccurateConstruction"))
		void TickColor(bool Valid);

public:

	/**
	 Components
	*/

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		UStaticMeshComponent* StaticMeshBase;

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		UStaticMesh* DisplayMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		TSubclassOf<ABuildingMaster> BuildingMasterClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		TSubclassOf<AConstructionProxy> ConstructionProxyClass;

private:

	ABuildingMaster* CurrentGhostBuilding;

	UMaterial* GhostBuildingMaterial;
	UMaterialInstanceConstant* ValidGostBuilding_MI;
	UMaterialInstanceConstant* InvalidGhostBuilding_MI;
	/**
	Delegates
	*/
	// Delegates
	//UPROPERTY(BlueprintAssignable, Category = "AccurateDayNight")
	//	FSpawnGhostDelegate OnSpawnGhostDelegate;

	//UPROPERTY(BlueprintAssignable, Category = "AccurateDayNight")
	//	FKillGhostDelegate OnKillGhostDelegate;

};
