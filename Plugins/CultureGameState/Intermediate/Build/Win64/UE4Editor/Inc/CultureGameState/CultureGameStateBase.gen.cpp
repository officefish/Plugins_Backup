// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CultureGameState/Public/CultureGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCultureGameStateBase() {}
// Cross Module References
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CultureGameState();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UEnum* Z_Construct_UEnum_CultureGameState_EEDemiSeason();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UEnum* Z_Construct_UEnum_CultureGameState_EEGameSpeed();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UEnum* Z_Construct_UEnum_CultureGameState_EEDayNightSchedule();
	CULTUREGAMESTATE_API UFunction* Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature();
	CULTUREGAMESTATE_API UEnum* Z_Construct_UEnum_CultureGameState_EEDayNightCicle();
	CULTUREGAMESTATE_API UScriptStruct* Z_Construct_UScriptStruct_FDemiSeasonKeyFrames();
	CULTUREGAMESTATE_API UClass* Z_Construct_UClass_ACultureGameStateBase_NoRegister();
	CULTUREGAMESTATE_API UClass* Z_Construct_UClass_ACultureGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CultureGameState, nullptr, "NewDayDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics
	{
		struct _Script_CultureGameState_eventDemiSeasonDelegate_Parms
		{
			EEDemiSeason Season;
			float Delta;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Season_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::NewProp_Season_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CultureGameState_eventDemiSeasonDelegate_Parms, Season), Z_Construct_UEnum_CultureGameState_EEDemiSeason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CultureGameState_eventDemiSeasonDelegate_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::NewProp_Season_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CultureGameState, nullptr, "DemiSeasonDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_CultureGameState_eventDemiSeasonDelegate_Parms), Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics
	{
		struct _Script_CultureGameState_eventGameStateTickDelegate_Parms
		{
			FDateTime TickDateTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::NewProp_TickDateTime = { "TickDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CultureGameState_eventGameStateTickDelegate_Parms, TickDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::NewProp_TickDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CultureGameState, nullptr, "GameStateTickDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_CultureGameState_eventGameStateTickDelegate_Parms), Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics
	{
		struct _Script_CultureGameState_eventGameSpeedDelegate_Parms
		{
			EEGameSpeed EGameSpeed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EGameSpeed_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EGameSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::NewProp_EGameSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::NewProp_EGameSpeed = { "EGameSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CultureGameState_eventGameSpeedDelegate_Parms, EGameSpeed), Z_Construct_UEnum_CultureGameState_EEGameSpeed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::NewProp_EGameSpeed_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::NewProp_EGameSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CultureGameState, nullptr, "GameSpeedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_CultureGameState_eventGameSpeedDelegate_Parms), Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics
	{
		struct _Script_CultureGameState_eventDayNightScheduleDelegate_Parms
		{
			EEDayNightSchedule EDayNightSchedule;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EDayNightSchedule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EDayNightSchedule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::NewProp_EDayNightSchedule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::NewProp_EDayNightSchedule = { "EDayNightSchedule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CultureGameState_eventDayNightScheduleDelegate_Parms, EDayNightSchedule), Z_Construct_UEnum_CultureGameState_EEDayNightSchedule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::NewProp_EDayNightSchedule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::NewProp_EDayNightSchedule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CultureGameState, nullptr, "DayNightScheduleDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_CultureGameState_eventDayNightScheduleDelegate_Parms), Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics
	{
		struct _Script_CultureGameState_eventDayNightCicleDelegate_Parms
		{
			EEDayNightCicle EDayNightCycle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EDayNightCycle_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EDayNightCycle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::NewProp_EDayNightCycle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::NewProp_EDayNightCycle = { "EDayNightCycle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CultureGameState_eventDayNightCicleDelegate_Parms, EDayNightCycle), Z_Construct_UEnum_CultureGameState_EEDayNightCicle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::NewProp_EDayNightCycle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::NewProp_EDayNightCycle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Dynamic multicast */" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Dynamic multicast" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CultureGameState, nullptr, "DayNightCicleDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_CultureGameState_eventDayNightCicleDelegate_Parms), Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EEDayNightSchedule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CultureGameState_EEDayNightSchedule, Z_Construct_UPackage__Script_CultureGameState(), TEXT("EEDayNightSchedule"));
		}
		return Singleton;
	}
	template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEDayNightSchedule>()
	{
		return EEDayNightSchedule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEDayNightSchedule(EEDayNightSchedule_StaticEnum, TEXT("/Script/CultureGameState"), TEXT("EEDayNightSchedule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CultureGameState_EEDayNightSchedule_Hash() { return 2699344735U; }
	UEnum* Z_Construct_UEnum_CultureGameState_EEDayNightSchedule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CultureGameState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEDayNightSchedule"), 0, Get_Z_Construct_UEnum_CultureGameState_EEDayNightSchedule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEDayNightSchedule::Night", (int64)EEDayNightSchedule::Night },
				{ "EEDayNightSchedule::LateNight", (int64)EEDayNightSchedule::LateNight },
				{ "EEDayNightSchedule::Morning", (int64)EEDayNightSchedule::Morning },
				{ "EEDayNightSchedule::LateMorning", (int64)EEDayNightSchedule::LateMorning },
				{ "EEDayNightSchedule::Day", (int64)EEDayNightSchedule::Day },
				{ "EEDayNightSchedule::LateDay", (int64)EEDayNightSchedule::LateDay },
				{ "EEDayNightSchedule::Evening", (int64)EEDayNightSchedule::Evening },
				{ "EEDayNightSchedule::LateEvening", (int64)EEDayNightSchedule::LateEvening },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Day / Night Shedule Enum */" },
				{ "Day.DisplayName", "Day" },
				{ "Day.Name", "EEDayNightSchedule::Day" },
				{ "Evening.DisplayName", "Evening" },
				{ "Evening.Name", "EEDayNightSchedule::Evening" },
				{ "LateDay.DisplayName", "LateDay" },
				{ "LateDay.Name", "EEDayNightSchedule::LateDay" },
				{ "LateEvening.DisplayName", "LateEvening" },
				{ "LateEvening.Name", "EEDayNightSchedule::LateEvening" },
				{ "LateMorning.DisplayName", "LateMorning" },
				{ "LateMorning.Name", "EEDayNightSchedule::LateMorning" },
				{ "LateNight.DisplayName", "LateNight" },
				{ "LateNight.Name", "EEDayNightSchedule::LateNight" },
				{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
				{ "Morning.DisplayName", "Morning" },
				{ "Morning.Name", "EEDayNightSchedule::Morning" },
				{ "Night.DisplayName", "Night" },
				{ "Night.Name", "EEDayNightSchedule::Night" },
				{ "ToolTip", "Day / Night Shedule Enum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CultureGameState,
				nullptr,
				"EEDayNightSchedule",
				"EEDayNightSchedule",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEDayNightCicle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CultureGameState_EEDayNightCicle, Z_Construct_UPackage__Script_CultureGameState(), TEXT("EEDayNightCicle"));
		}
		return Singleton;
	}
	template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEDayNightCicle>()
	{
		return EEDayNightCicle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEDayNightCicle(EEDayNightCicle_StaticEnum, TEXT("/Script/CultureGameState"), TEXT("EEDayNightCicle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CultureGameState_EEDayNightCicle_Hash() { return 3748695008U; }
	UEnum* Z_Construct_UEnum_CultureGameState_EEDayNightCicle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CultureGameState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEDayNightCicle"), 0, Get_Z_Construct_UEnum_CultureGameState_EEDayNightCicle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEDayNightCicle::BeforeSunsetStart", (int64)EEDayNightCicle::BeforeSunsetStart },
				{ "EEDayNightCicle::SunsetStart", (int64)EEDayNightCicle::SunsetStart },
				{ "EEDayNightCicle::NightStart", (int64)EEDayNightCicle::NightStart },
				{ "EEDayNightCicle::BeforeSunriseStart", (int64)EEDayNightCicle::BeforeSunriseStart },
				{ "EEDayNightCicle::SunriseStart", (int64)EEDayNightCicle::SunriseStart },
				{ "EEDayNightCicle::DayStart", (int64)EEDayNightCicle::DayStart },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeforeSunriseStart.DisplayName", "BeforeSunriseStart" },
				{ "BeforeSunriseStart.Name", "EEDayNightCicle::BeforeSunriseStart" },
				{ "BeforeSunsetStart.DisplayName", "BeforeSunsetStart" },
				{ "BeforeSunsetStart.Name", "EEDayNightCicle::BeforeSunsetStart" },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Night Circle Enum */" },
				{ "DayStart.DisplayName", "DayStart" },
				{ "DayStart.Name", "EEDayNightCicle::DayStart" },
				{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
				{ "NightStart.DisplayName", "NightStart" },
				{ "NightStart.Name", "EEDayNightCicle::NightStart" },
				{ "SunriseStart.DisplayName", "SuneriseStart" },
				{ "SunriseStart.Name", "EEDayNightCicle::SunriseStart" },
				{ "SunsetStart.DisplayName", "SunsetStart" },
				{ "SunsetStart.Name", "EEDayNightCicle::SunsetStart" },
				{ "ToolTip", "Night Circle Enum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CultureGameState,
				nullptr,
				"EEDayNightCicle",
				"EEDayNightCicle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEGameSpeed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CultureGameState_EEGameSpeed, Z_Construct_UPackage__Script_CultureGameState(), TEXT("EEGameSpeed"));
		}
		return Singleton;
	}
	template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEGameSpeed>()
	{
		return EEGameSpeed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEGameSpeed(EEGameSpeed_StaticEnum, TEXT("/Script/CultureGameState"), TEXT("EEGameSpeed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CultureGameState_EEGameSpeed_Hash() { return 717130697U; }
	UEnum* Z_Construct_UEnum_CultureGameState_EEGameSpeed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CultureGameState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEGameSpeed"), 0, Get_Z_Construct_UEnum_CultureGameState_EEGameSpeed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEGameSpeed::Pause", (int64)EEGameSpeed::Pause },
				{ "EEGameSpeed::SlowMotion", (int64)EEGameSpeed::SlowMotion },
				{ "EEGameSpeed::RealTime", (int64)EEGameSpeed::RealTime },
				{ "EEGameSpeed::GameTime", (int64)EEGameSpeed::GameTime },
				{ "EEGameSpeed::GameTimeX2", (int64)EEGameSpeed::GameTimeX2 },
				{ "EEGameSpeed::GameTimeX5", (int64)EEGameSpeed::GameTimeX5 },
				{ "EEGameSpeed::GameTimeX50", (int64)EEGameSpeed::GameTimeX50 },
				{ "EEGameSpeed::GameTimeX500", (int64)EEGameSpeed::GameTimeX500 },
				{ "EEGameSpeed::GameTimeNextDay", (int64)EEGameSpeed::GameTimeNextDay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Game Speed Enum */" },
				{ "GameTime.DisplayName", "GameTime" },
				{ "GameTime.Name", "EEGameSpeed::GameTime" },
				{ "GameTimeNextDay.DisplayName", "GameTimeNextDay" },
				{ "GameTimeNextDay.Name", "EEGameSpeed::GameTimeNextDay" },
				{ "GameTimeX2.DisplayName", "GameTimeX2" },
				{ "GameTimeX2.Name", "EEGameSpeed::GameTimeX2" },
				{ "GameTimeX5.DisplayName", "GameTimeX5" },
				{ "GameTimeX5.Name", "EEGameSpeed::GameTimeX5" },
				{ "GameTimeX50.DisplayName", "GameTimeX50" },
				{ "GameTimeX50.Name", "EEGameSpeed::GameTimeX50" },
				{ "GameTimeX500.DisplayName", "GameTimeX500" },
				{ "GameTimeX500.Name", "EEGameSpeed::GameTimeX500" },
				{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
				{ "Pause.DisplayName", "Pause" },
				{ "Pause.Name", "EEGameSpeed::Pause" },
				{ "RealTime.DisplayName", "RealTime" },
				{ "RealTime.Name", "EEGameSpeed::RealTime" },
				{ "SlowMotion.DisplayName", "SlowMotion" },
				{ "SlowMotion.Name", "EEGameSpeed::SlowMotion" },
				{ "ToolTip", "Game Speed Enum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CultureGameState,
				nullptr,
				"EEGameSpeed",
				"EEGameSpeed",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEDemiSeason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CultureGameState_EEDemiSeason, Z_Construct_UPackage__Script_CultureGameState(), TEXT("EEDemiSeason"));
		}
		return Singleton;
	}
	template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEDemiSeason>()
	{
		return EEDemiSeason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEDemiSeason(EEDemiSeason_StaticEnum, TEXT("/Script/CultureGameState"), TEXT("EEDemiSeason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CultureGameState_EEDemiSeason_Hash() { return 2309494289U; }
	UEnum* Z_Construct_UEnum_CultureGameState_EEDemiSeason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CultureGameState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEDemiSeason"), 0, Get_Z_Construct_UEnum_CultureGameState_EEDemiSeason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEDemiSeason::WinterToSpring", (int64)EEDemiSeason::WinterToSpring },
				{ "EEDemiSeason::Spring", (int64)EEDemiSeason::Spring },
				{ "EEDemiSeason::SpringToSummer", (int64)EEDemiSeason::SpringToSummer },
				{ "EEDemiSeason::Summer", (int64)EEDemiSeason::Summer },
				{ "EEDemiSeason::SummerToAutumn", (int64)EEDemiSeason::SummerToAutumn },
				{ "EEDemiSeason::Autumn", (int64)EEDemiSeason::Autumn },
				{ "EEDemiSeason::AutumnToWinter", (int64)EEDemiSeason::AutumnToWinter },
				{ "EEDemiSeason::Winter", (int64)EEDemiSeason::Winter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Autumn.DisplayName", "Autumn" },
				{ "Autumn.Name", "EEDemiSeason::Autumn" },
				{ "AutumnToWinter.DisplayName", "AutumnToWinter" },
				{ "AutumnToWinter.Name", "EEDemiSeason::AutumnToWinter" },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Demi Seasons Enum */" },
				{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
				{ "Spring.DisplayName", "Spring" },
				{ "Spring.Name", "EEDemiSeason::Spring" },
				{ "SpringToSummer.DisplayName", "SpringToSummer" },
				{ "SpringToSummer.Name", "EEDemiSeason::SpringToSummer" },
				{ "Summer.DisplayName", "Summer" },
				{ "Summer.Name", "EEDemiSeason::Summer" },
				{ "SummerToAutumn.DisplayName", "SummerToAutumn" },
				{ "SummerToAutumn.Name", "EEDemiSeason::SummerToAutumn" },
				{ "ToolTip", "Demi Seasons Enum" },
				{ "Winter.DisplayName", "Winter" },
				{ "Winter.Name", "EEDemiSeason::Winter" },
				{ "WinterToSpring.DisplayName", "WinterToSpring" },
				{ "WinterToSpring.Name", "EEDemiSeason::WinterToSpring" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CultureGameState,
				nullptr,
				"EEDemiSeason",
				"EEDemiSeason",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDemiSeasonKeyFrames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CULTUREGAMESTATE_API uint32 Get_Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames, Z_Construct_UPackage__Script_CultureGameState(), TEXT("DemiSeasonKeyFrames"), sizeof(FDemiSeasonKeyFrames), Get_Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Hash());
	}
	return Singleton;
}
template<> CULTUREGAMESTATE_API UScriptStruct* StaticStruct<FDemiSeasonKeyFrames>()
{
	return FDemiSeasonKeyFrames::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDemiSeasonKeyFrames(FDemiSeasonKeyFrames::StaticStruct, TEXT("/Script/CultureGameState"), TEXT("DemiSeasonKeyFrames"), false, nullptr, nullptr);
static struct FScriptStruct_CultureGameState_StaticRegisterNativesFDemiSeasonKeyFrames
{
	FScriptStruct_CultureGameState_StaticRegisterNativesFDemiSeasonKeyFrames()
	{
		UScriptStruct::DeferCppStructOps<FDemiSeasonKeyFrames>(FName(TEXT("DemiSeasonKeyFrames")));
	}
} ScriptStruct_CultureGameState_StaticRegisterNativesFDemiSeasonKeyFrames;
	struct Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SummerStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SummerStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SummerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SummerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutumnStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutumnStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutumnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutumnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinterStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinterStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinterTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinterTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Season KeyFrames */" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Season KeyFrames" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDemiSeasonKeyFrames>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringStartTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringStartTime = { "SpringStartTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, SpringStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringTime = { "SpringTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, SpringTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerStartTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerStartTime = { "SummerStartTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, SummerStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerTime = { "SummerTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, SummerTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnStartTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnStartTime = { "AutumnStartTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, AutumnStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnTime = { "AutumnTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, AutumnTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterStartTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterStartTime = { "WinterStartTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, WinterStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterTime_MetaData[] = {
		{ "Category", "AccurateSeason" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterTime = { "WinterTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDemiSeasonKeyFrames, WinterTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SpringTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_SummerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_AutumnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::NewProp_WinterTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CultureGameState,
		nullptr,
		&NewStructOps,
		"DemiSeasonKeyFrames",
		sizeof(FDemiSeasonKeyFrames),
		alignof(FDemiSeasonKeyFrames),
		Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDemiSeasonKeyFrames()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CultureGameState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DemiSeasonKeyFrames"), sizeof(FDemiSeasonKeyFrames), Get_Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Hash() { return 2063909268U; }
	DEFINE_FUNCTION(ACultureGameStateBase::execGetDayNightTransitionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetDayNightTransitionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execSetDayNightTransitionTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Hour);
		P_GET_PROPERTY(FIntProperty,Z_Param_Minute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDayNightTransitionTime(Z_Param_Hour,Z_Param_Minute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execSetGameStartDateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameStartDateTime(Z_Param_Out_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execGetGameTimeMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameTimeMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execSetGameTimeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameTimeMultiplier(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execSetGameSpeed)
	{
		P_GET_ENUM(EEGameSpeed,Z_Param_EGameSpeedStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameSpeed(EEGameSpeed(Z_Param_EGameSpeedStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execGetGameSolarTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameSolarTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execGetGameCurrentDaySeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameCurrentDaySeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execGameSpeedDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameSpeedDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACultureGameStateBase::execGameSpeedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameSpeedUp();
		P_NATIVE_END;
	}
	void ACultureGameStateBase::StaticRegisterNativesACultureGameStateBase()
	{
		UClass* Class = ACultureGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameSpeedDown", &ACultureGameStateBase::execGameSpeedDown },
			{ "GameSpeedUp", &ACultureGameStateBase::execGameSpeedUp },
			{ "GetDayNightTransitionTime", &ACultureGameStateBase::execGetDayNightTransitionTime },
			{ "GetGameCurrentDaySeconds", &ACultureGameStateBase::execGetGameCurrentDaySeconds },
			{ "GetGameSolarTime", &ACultureGameStateBase::execGetGameSolarTime },
			{ "GetGameTimeMultiplier", &ACultureGameStateBase::execGetGameTimeMultiplier },
			{ "SetDayNightTransitionTime", &ACultureGameStateBase::execSetDayNightTransitionTime },
			{ "SetGameSpeed", &ACultureGameStateBase::execSetGameSpeed },
			{ "SetGameStartDateTime", &ACultureGameStateBase::execSetGameStartDateTime },
			{ "SetGameTimeMultiplier", &ACultureGameStateBase::execSetGameTimeMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDatetime" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "GameSpeedDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDatetime" },
		{ "Comment", "/* Functions */" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "GameSpeedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics
	{
		struct CultureGameStateBase_eventGetDayNightTransitionTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventGetDayNightTransitionTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDatetime" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "GetDayNightTransitionTime", nullptr, nullptr, sizeof(CultureGameStateBase_eventGetDayNightTransitionTime_Parms), Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics
	{
		struct CultureGameStateBase_eventGetGameCurrentDaySeconds_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventGetGameCurrentDaySeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDatetime" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "GetGameCurrentDaySeconds", nullptr, nullptr, sizeof(CultureGameStateBase_eventGetGameCurrentDaySeconds_Parms), Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics
	{
		struct CultureGameStateBase_eventGetGameSolarTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventGetGameSolarTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDatetime" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "GetGameSolarTime", nullptr, nullptr, sizeof(CultureGameStateBase_eventGetGameSolarTime_Parms), Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics
	{
		struct CultureGameStateBase_eventGetGameTimeMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventGetGameTimeMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CultureGameState" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "GetGameTimeMultiplier", nullptr, nullptr, sizeof(CultureGameStateBase_eventGetGameTimeMultiplier_Parms), Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics
	{
		struct CultureGameStateBase_eventSetDayNightTransitionTime_Parms
		{
			int32 Hour;
			int32 Minute;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hour;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventSetDayNightTransitionTime_Parms, Hour), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::NewProp_Minute = { "Minute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventSetDayNightTransitionTime_Parms, Minute), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::NewProp_Hour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::NewProp_Minute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDatetime" },
		{ "Comment", "//// Day/Night Transition Setup\n" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "/ Day/Night Transition Setup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "SetDayNightTransitionTime", nullptr, nullptr, sizeof(CultureGameStateBase_eventSetDayNightTransitionTime_Parms), Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics
	{
		struct CultureGameStateBase_eventSetGameSpeed_Parms
		{
			EEGameSpeed EGameSpeedStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EGameSpeedStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EGameSpeedStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::NewProp_EGameSpeedStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::NewProp_EGameSpeedStatus = { "EGameSpeedStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventSetGameSpeed_Parms, EGameSpeedStatus), Z_Construct_UEnum_CultureGameState_EEGameSpeed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::NewProp_EGameSpeedStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::NewProp_EGameSpeedStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CultureGameState" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "SetGameSpeed", nullptr, nullptr, sizeof(CultureGameStateBase_eventSetGameSpeed_Parms), Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics
	{
		struct CultureGameStateBase_eventSetGameStartDateTime_Parms
		{
			FDateTime DateTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventSetGameStartDateTime_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::NewProp_DateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::NewProp_DateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "CultureGameState" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "SetGameStartDateTime", nullptr, nullptr, sizeof(CultureGameStateBase_eventSetGameStartDateTime_Parms), Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics
	{
		struct CultureGameStateBase_eventSetGameTimeMultiplier_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CultureGameStateBase_eventSetGameTimeMultiplier_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CultureGameState" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACultureGameStateBase, nullptr, "SetGameTimeMultiplier", nullptr, nullptr, sizeof(CultureGameStateBase_eventSetGameTimeMultiplier_Parms), Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACultureGameStateBase_NoRegister()
	{
		return ACultureGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ACultureGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDayNightCycleChangeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDayNightCycleChangeDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDayNightScheduleChangeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDayNightScheduleChangeDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameSpeedChangeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSpeedChangeDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewDayDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewDayDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameStateTickDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStateTickDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeasonChangeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeasonChangeDelegate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ECurrentDemiSeason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECurrentDemiSeason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ECurrentDemiSeason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EGameSpeed_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EGameSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EGameSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EDayNightCycle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EDayNightCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EDayNightCycle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EDayNightSchedule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EDayNightSchedule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EDayNightSchedule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithDayNightCycle_MetaData[];
#endif
		static void NewProp_bWithDayNightCycle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithDayNightCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithSlowMotion_MetaData[];
#endif
		static void NewProp_bWithSlowMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithSlowMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithRealTime_MetaData[];
#endif
		static void NewProp_bWithRealTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithRealTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithX50Time_MetaData[];
#endif
		static void NewProp_bWithX50Time_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithX50Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithX500Time_MetaData[];
#endif
		static void NewProp_bWithX500Time_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithX500Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithNextDay_MetaData[];
#endif
		static void NewProp_bWithNextDay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithNextDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunsetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SunsetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunriseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SunriseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayNightTransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DayNightTransitionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStartDatetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameStartDatetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACultureGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CultureGameState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACultureGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACultureGameStateBase_GameSpeedDown, "GameSpeedDown" }, // 959584363
		{ &Z_Construct_UFunction_ACultureGameStateBase_GameSpeedUp, "GameSpeedUp" }, // 80326120
		{ &Z_Construct_UFunction_ACultureGameStateBase_GetDayNightTransitionTime, "GetDayNightTransitionTime" }, // 4188719470
		{ &Z_Construct_UFunction_ACultureGameStateBase_GetGameCurrentDaySeconds, "GetGameCurrentDaySeconds" }, // 1150776760
		{ &Z_Construct_UFunction_ACultureGameStateBase_GetGameSolarTime, "GetGameSolarTime" }, // 3287928810
		{ &Z_Construct_UFunction_ACultureGameStateBase_GetGameTimeMultiplier, "GetGameTimeMultiplier" }, // 1044792775
		{ &Z_Construct_UFunction_ACultureGameStateBase_SetDayNightTransitionTime, "SetDayNightTransitionTime" }, // 953194683
		{ &Z_Construct_UFunction_ACultureGameStateBase_SetGameSpeed, "SetGameSpeed" }, // 24320345
		{ &Z_Construct_UFunction_ACultureGameStateBase_SetGameStartDateTime, "SetGameStartDateTime" }, // 3993977005
		{ &Z_Construct_UFunction_ACultureGameStateBase_SetGameTimeMultiplier, "SetGameTimeMultiplier" }, // 2304694171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CultureGameStateBase.h" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightCycleChangeDelegate_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightCycleChangeDelegate = { "OnDayNightCycleChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, OnDayNightCycleChangeDelegate), Z_Construct_UDelegateFunction_CultureGameState_DayNightCicleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightCycleChangeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightCycleChangeDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightScheduleChangeDelegate_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightScheduleChangeDelegate = { "OnDayNightScheduleChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, OnDayNightScheduleChangeDelegate), Z_Construct_UDelegateFunction_CultureGameState_DayNightScheduleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightScheduleChangeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightScheduleChangeDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameSpeedChangeDelegate_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameSpeedChangeDelegate = { "OnGameSpeedChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, OnGameSpeedChangeDelegate), Z_Construct_UDelegateFunction_CultureGameState_GameSpeedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameSpeedChangeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameSpeedChangeDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnNewDayDelegate_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnNewDayDelegate = { "OnNewDayDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, OnNewDayDelegate), Z_Construct_UDelegateFunction_CultureGameState_NewDayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnNewDayDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnNewDayDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameStateTickDelegate_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameStateTickDelegate = { "OnGameStateTickDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, OnGameStateTickDelegate), Z_Construct_UDelegateFunction_CultureGameState_GameStateTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameStateTickDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameStateTickDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnSeasonChangeDelegate_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnSeasonChangeDelegate = { "OnSeasonChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, OnSeasonChangeDelegate), Z_Construct_UDelegateFunction_CultureGameState_DemiSeasonDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnSeasonChangeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnSeasonChangeDelegate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "Comment", "// Enums\n" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Enums" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason = { "ECurrentDemiSeason", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, ECurrentDemiSeason), Z_Construct_UEnum_CultureGameState_EEDemiSeason, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed = { "EGameSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, EGameSpeed), Z_Construct_UEnum_CultureGameState_EEGameSpeed, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle = { "EDayNightCycle", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, EDayNightCycle), Z_Construct_UEnum_CultureGameState_EEDayNightCicle, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule = { "EDayNightSchedule", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, EDayNightSchedule), Z_Construct_UEnum_CultureGameState_EEDayNightSchedule, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "Comment", "/* Game time mode flags */" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Game time mode flags" },
	};
#endif
	void Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle_SetBit(void* Obj)
	{
		((ACultureGameStateBase*)Obj)->bWithDayNightCycle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle = { "bWithDayNightCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACultureGameStateBase), &Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion_SetBit(void* Obj)
	{
		((ACultureGameStateBase*)Obj)->bWithSlowMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion = { "bWithSlowMotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACultureGameStateBase), &Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime_SetBit(void* Obj)
	{
		((ACultureGameStateBase*)Obj)->bWithRealTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime = { "bWithRealTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACultureGameStateBase), &Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time_SetBit(void* Obj)
	{
		((ACultureGameStateBase*)Obj)->bWithX50Time = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time = { "bWithX50Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACultureGameStateBase), &Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time_SetBit(void* Obj)
	{
		((ACultureGameStateBase*)Obj)->bWithX500Time = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time = { "bWithX500Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACultureGameStateBase), &Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay_SetBit(void* Obj)
	{
		((ACultureGameStateBase*)Obj)->bWithNextDay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay = { "bWithNextDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACultureGameStateBase), &Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunsetTime_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "Comment", "// Day Night Cicle\n" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Day Night Cicle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunsetTime = { "SunsetTime", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, SunsetTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunsetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunsetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunriseTime_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunriseTime = { "SunriseTime", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, SunriseTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunriseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunriseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_DayNightTransitionTime_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "Comment", "/* Day/Night Transition Time */" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
		{ "ToolTip", "Day/Night Transition Time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_DayNightTransitionTime = { "DayNightTransitionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, DayNightTransitionTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_DayNightTransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_DayNightTransitionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_FullDateTime_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_FullDateTime = { "FullDateTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, FullDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_FullDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_FullDateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_GameStartDatetime_MetaData[] = {
		{ "Category", "AccurateDayNight" },
		{ "ModuleRelativePath", "Public/CultureGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_GameStartDatetime = { "GameStartDatetime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACultureGameStateBase, GameStartDatetime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_GameStartDatetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_GameStartDatetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACultureGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightCycleChangeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnDayNightScheduleChangeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameSpeedChangeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnNewDayDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnGameStateTickDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_OnSeasonChangeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_ECurrentDemiSeason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EGameSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_EDayNightSchedule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithDayNightCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithSlowMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithRealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX50Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithX500Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_bWithNextDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunsetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_SunriseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_DayNightTransitionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_FullDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACultureGameStateBase_Statics::NewProp_GameStartDatetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACultureGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACultureGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACultureGameStateBase_Statics::ClassParams = {
		&ACultureGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACultureGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACultureGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACultureGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACultureGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACultureGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACultureGameStateBase, 2415507759);
	template<> CULTUREGAMESTATE_API UClass* StaticClass<ACultureGameStateBase>()
	{
		return ACultureGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACultureGameStateBase(Z_Construct_UClass_ACultureGameStateBase, &ACultureGameStateBase::StaticClass, TEXT("/Script/CultureGameState"), TEXT("ACultureGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACultureGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
