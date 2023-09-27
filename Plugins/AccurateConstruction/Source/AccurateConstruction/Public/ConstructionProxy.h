// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstanceConstant.h"
#include "ConstructionProxy.generated.h"

UCLASS()
class ACCURATECONSTRUCTION_API AConstructionProxy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructionProxy();

public:

	UFUNCTION(BlueprintCallable, meta = (Category = "AccurateConstruction"))
		void SetDisplayMesh(UStaticMesh* DisplayMesh);

public:

	/**
	 Components
	*/

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		UStaticMeshComponent* StaticMeshBase;

	//UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		
	
private:

	UMaterialInstanceConstant* InProgress_MI;
};
