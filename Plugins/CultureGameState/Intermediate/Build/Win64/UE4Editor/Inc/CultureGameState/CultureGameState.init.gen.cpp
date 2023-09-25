// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCultureGameState_init() {}
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CultureGameState()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CultureGameState",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2DF97370,
				0x78B6D963,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
