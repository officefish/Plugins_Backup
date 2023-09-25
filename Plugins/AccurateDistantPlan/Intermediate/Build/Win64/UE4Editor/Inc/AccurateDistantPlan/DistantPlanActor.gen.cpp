// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDistantPlan/Public/DistantPlanActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistantPlanActor() {}
// Cross Module References
	ACCURATEDISTANTPLAN_API UEnum* Z_Construct_UEnum_AccurateDistantPlan_EELandscapeBackground();
	UPackage* Z_Construct_UPackage__Script_AccurateDistantPlan();
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_ADistantPlanActor_NoRegister();
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_ADistantPlanActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CULTUREGAMESTATE_API UEnum* Z_Construct_UEnum_CultureGameState_EEDemiSeason();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* EELandscapeBackground_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccurateDistantPlan_EELandscapeBackground, Z_Construct_UPackage__Script_AccurateDistantPlan(), TEXT("EELandscapeBackground"));
		}
		return Singleton;
	}
	template<> ACCURATEDISTANTPLAN_API UEnum* StaticEnum<EELandscapeBackground>()
	{
		return EELandscapeBackground_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELandscapeBackground(EELandscapeBackground_StaticEnum, TEXT("/Script/AccurateDistantPlan"), TEXT("EELandscapeBackground"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccurateDistantPlan_EELandscapeBackground_Hash() { return 355289666U; }
	UEnum* Z_Construct_UEnum_AccurateDistantPlan_EELandscapeBackground()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateDistantPlan();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELandscapeBackground"), 0, Get_Z_Construct_UEnum_AccurateDistantPlan_EELandscapeBackground_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELandscapeBackground::AlpineMountain_A", (int64)EELandscapeBackground::AlpineMountain_A },
				{ "EELandscapeBackground::AlpineMountain_B", (int64)EELandscapeBackground::AlpineMountain_B },
				{ "EELandscapeBackground::AlpineMountain_C", (int64)EELandscapeBackground::AlpineMountain_C },
				{ "EELandscapeBackground::AlpineMountain_D", (int64)EELandscapeBackground::AlpineMountain_D },
				{ "EELandscapeBackground::AlpineMountain_E", (int64)EELandscapeBackground::AlpineMountain_E },
				{ "EELandscapeBackground::AfghanMountain_A", (int64)EELandscapeBackground::AfghanMountain_A },
				{ "EELandscapeBackground::AfghanMountain_B", (int64)EELandscapeBackground::AfghanMountain_B },
				{ "EELandscapeBackground::Canyon_A", (int64)EELandscapeBackground::Canyon_A },
				{ "EELandscapeBackground::Canyon_B", (int64)EELandscapeBackground::Canyon_B },
				{ "EELandscapeBackground::Canyon_C", (int64)EELandscapeBackground::Canyon_C },
				{ "EELandscapeBackground::DesertDune", (int64)EELandscapeBackground::DesertDune },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfghanMountain_A.DisplayName", "AfghanMountain_A" },
				{ "AfghanMountain_A.Name", "EELandscapeBackground::AfghanMountain_A" },
				{ "AfghanMountain_B.DisplayName", "AfghanMountain_B" },
				{ "AfghanMountain_B.Name", "EELandscapeBackground::AfghanMountain_B" },
				{ "AlpineMountain_A.DisplayName", "AlpineMountain_A" },
				{ "AlpineMountain_A.Name", "EELandscapeBackground::AlpineMountain_A" },
				{ "AlpineMountain_B.DisplayName", "AlpineMountain_B" },
				{ "AlpineMountain_B.Name", "EELandscapeBackground::AlpineMountain_B" },
				{ "AlpineMountain_C.DisplayName", "AlpineMountain_C" },
				{ "AlpineMountain_C.Name", "EELandscapeBackground::AlpineMountain_C" },
				{ "AlpineMountain_D.DisplayName", "AlpineMountain_D" },
				{ "AlpineMountain_D.Name", "EELandscapeBackground::AlpineMountain_D" },
				{ "AlpineMountain_E.DisplayName", "AlpineMountain_E" },
				{ "AlpineMountain_E.Name", "EELandscapeBackground::AlpineMountain_E" },
				{ "BlueprintType", "true" },
				{ "Canyon_A.DisplayName", "Canyon_A" },
				{ "Canyon_A.Name", "EELandscapeBackground::Canyon_A" },
				{ "Canyon_B.DisplayName", "Canyon_B" },
				{ "Canyon_B.Name", "EELandscapeBackground::Canyon_B" },
				{ "Canyon_C.DisplayName", "Canyon_C" },
				{ "Canyon_C.Name", "EELandscapeBackground::Canyon_C" },
				{ "DesertDune.DisplayName", "DesertDune" },
				{ "DesertDune.Name", "EELandscapeBackground::DesertDune" },
				{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccurateDistantPlan,
				nullptr,
				"EELandscapeBackground",
				"EELandscapeBackground",
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
	DEFINE_FUNCTION(ADistantPlanActor::execOnSeasonChange)
	{
		P_GET_ENUM(EEDemiSeason,Z_Param_Season);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeasonChange(EEDemiSeason(Z_Param_Season),Z_Param_Delta);
		P_NATIVE_END;
	}
	void ADistantPlanActor::StaticRegisterNativesADistantPlanActor()
	{
		UClass* Class = ADistantPlanActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSeasonChange", &ADistantPlanActor::execOnSeasonChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics
	{
		struct DistantPlanActor_eventOnSeasonChange_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::NewProp_Season_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DistantPlanActor_eventOnSeasonChange_Parms, Season), Z_Construct_UEnum_CultureGameState_EEDemiSeason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DistantPlanActor_eventOnSeasonChange_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::NewProp_Season_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* UFunctions */" },
		{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
		{ "ToolTip", "UFunctions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADistantPlanActor, nullptr, "OnSeasonChange", nullptr, nullptr, sizeof(DistantPlanActor_eventOnSeasonChange_Parms), Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADistantPlanActor_NoRegister()
	{
		return ADistantPlanActor::StaticClass();
	}
	struct Z_Construct_UClass_ADistantPlanActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ELandscapeBackground_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELandscapeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ELandscapeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowLandscapeBackground_MetaData[];
#endif
		static void NewProp_bLowLandscapeBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowLandscapeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandscapeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADistantPlanActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDistantPlan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADistantPlanActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADistantPlanActor_OnSeasonChange, "OnSeasonChange" }, // 896883575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistantPlanActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DistantPlanActor.h" },
		{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground = { "ELandscapeBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistantPlanActor, ELandscapeBackground), Z_Construct_UEnum_AccurateDistantPlan_EELandscapeBackground, METADATA_PARAMS(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
	};
#endif
	void Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground_SetBit(void* Obj)
	{
		((ADistantPlanActor*)Obj)->bLowLandscapeBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground = { "bLowLandscapeBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADistantPlanActor), &Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_LandscapeScale_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_LandscapeScale = { "LandscapeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistantPlanActor, LandscapeScale), METADATA_PARAMS(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_LandscapeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_LandscapeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Components*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DistantPlanActor.h" },
		{ "OverrideNativeName", "Scene" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistantPlanActor, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADistantPlanActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_ELandscapeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_bLowLandscapeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_LandscapeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistantPlanActor_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADistantPlanActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADistantPlanActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADistantPlanActor_Statics::ClassParams = {
		&ADistantPlanActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADistantPlanActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADistantPlanActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADistantPlanActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADistantPlanActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADistantPlanActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADistantPlanActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADistantPlanActor, 1121583022);
	template<> ACCURATEDISTANTPLAN_API UClass* StaticClass<ADistantPlanActor>()
	{
		return ADistantPlanActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADistantPlanActor(Z_Construct_UClass_ADistantPlanActor, &ADistantPlanActor::StaticClass, TEXT("/Script/AccurateDistantPlan"), TEXT("ADistantPlanActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADistantPlanActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
