// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RandomCharacterFunctionLibrary.generated.h"

/* RTS Character Enums */
UENUM(BlueprintType)
enum class EESex : uint8
{
	Male			UMETA(DisplayName = "Male"),
	Female			UMETA(DisplayName = "Female"),
};

UENUM(BlueprintType)
enum class EEAgeGroup : uint8
{
	INFANT			UMETA(DisplayName = "Infant"),
	YANG_CHILD		UMETA(DisplayName = "SmallChild"),
	CHILD			UMETA(DisplayName = "Child"),
	TEENAGER		UMETA(DisplayName = "Teenager"),
	YANG_ADULT		UMETA(DisplayName = "YangAdult"),
	ADULT			UMETA(DisplayName = "MiddleAdult"),
	OLD				UMETA(DisplayName = "Old"),
	VERY_OLD		UMETA(DisplayName = "VeryOld"),
};

/**
 * 
 */
UCLASS()
class RTSPOPULATION_API URandomCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/* Functions */
	UFUNCTION(BlueprintPure, Category = RTSPopulation,
		meta = (WorldContext = "WorldContextObject"))
		static FString FirstName(TEnumAsByte<EESex> ESex);

	UFUNCTION(BlueprintPure, Category = RTSPopulation,
		meta = (WorldContext = "WorldContextObject"))
		static FString LastName();

	UFUNCTION(BlueprintPure, Category = RTSPopulation,
		meta = (WorldContext = "WorldContextObject"))
		static TEnumAsByte<EESex> Sex(float MaleProbability = 0.5f);

private:

	static const TArray<FString> MaleNames;
	static const TArray<FString> FemaleNames;
	static const TArray<FString> LastNames;


};
