// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "ConstructionProxy.generated.h"

class AConstructionProxy;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConstructionCompleteDelegate, AConstructionProxy*, Proxy);

UCLASS()
class ACCURATECONSTRUCTION_API AConstructionProxy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructionProxy();

public:

	/**
	 Components
	*/

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "AccurateConstruction"))
		USceneComponent* Scene;

public:

	// Delegates
	UPROPERTY(BlueprintAssignable, Category = "AccurateConstruction")
		FConstructionCompleteDelegate OnConstructionCompleteDelegate;

private:

	void SetupDefaults();
	void ConstructSubObjects();
	

private:

	UStaticMesh* StaticMeshInstance;

	bool bIsConstructionCompleted;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
