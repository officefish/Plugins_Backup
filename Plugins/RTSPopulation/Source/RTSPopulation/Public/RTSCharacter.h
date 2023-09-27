// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RandomCharacterFunctionLibrary.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "RTSCharacter.generated.h"



USTRUCT(BlueprintType)
struct FCharacterProfile
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTSPopulation")
		uint8 TotalYears;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTSPopulation")
		TEnumAsByte<EESex> Sex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTSPopulation")
		FString FirstName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTSPopulation")
		FString LastName;
};



UCLASS()
class RTSPOPULATION_API ARTSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTSCharacter();

public:

	UFUNCTION(BlueprintPure, Category = "RTSPopulation")
		TEnumAsByte<EEAgeGroup> GetAgeGroop();

	UFUNCTION(BlueprintPure, Category = "RTSPopulation")
		FString GetFullName();

	UFUNCTION(BlueprintPure, Category = "RTSPopulation")
		uint8 GetTotalYears();

	UFUNCTION(BlueprintCallable, Category = "RTSPopulation")
		void SetSex(TEnumAsByte<EESex> Sex);


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTSPopulation")
		FCharacterProfile Profile;

private:

	USkeletalMesh* MaleMesh;
	USkeletalMesh* FemaleMesh;

	UMaterialInterface* FemaleBody_MI;
	UMaterialInterface* MaleBody_M;
	UMaterialInstanceDynamic* CurrentMaterial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
