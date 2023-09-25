// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "ConstructionProxy.h"
#include "BuildingMaster.generated.h"

UCLASS()
class ACCURATECONSTRUCTION_API ABuildingMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingMaster();


public:
	
	/**
	Components
	*/

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		USceneComponent* Scene;

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		UStaticMeshComponent* StaticMeshBase;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Category = "AccurateConstruction"))
		TSubclassOf<AConstructionProxy> ConstructionProxyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Category = "AccurateConstruction"))
		UStaticMesh* DisplayMesh;

private:

	void SetupDefaults();
	void ConstructSubObjects();
	void SetupSubObjects();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
