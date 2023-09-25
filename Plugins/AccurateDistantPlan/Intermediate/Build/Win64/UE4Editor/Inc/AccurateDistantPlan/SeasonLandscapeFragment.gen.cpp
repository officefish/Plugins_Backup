// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDistantPlan/Public/SeasonLandscapeFragment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonLandscapeFragment() {}
// Cross Module References
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_USeasonLandscapeFragment_NoRegister();
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_USeasonLandscapeFragment();
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_ULandscapeFragment();
	UPackage* Z_Construct_UPackage__Script_AccurateDistantPlan();
	CULTUREGAMESTATE_API UEnum* Z_Construct_UEnum_CultureGameState_EEDemiSeason();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USeasonLandscapeFragment::execSmoothChangeSeason)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmoothChangeSeason(Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USeasonLandscapeFragment::execChangeSeason)
	{
		P_GET_ENUM(EEDemiSeason,Z_Param_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSeason(EEDemiSeason(Z_Param_Season));
		P_NATIVE_END;
	}
	void USeasonLandscapeFragment::StaticRegisterNativesUSeasonLandscapeFragment()
	{
		UClass* Class = USeasonLandscapeFragment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSeason", &USeasonLandscapeFragment::execChangeSeason },
			{ "SmoothChangeSeason", &USeasonLandscapeFragment::execSmoothChangeSeason },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics
	{
		struct SeasonLandscapeFragment_eventChangeSeason_Parms
		{
			EEDemiSeason Season;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Season_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::NewProp_Season_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SeasonLandscapeFragment_eventChangeSeason_Parms, Season), Z_Construct_UEnum_CultureGameState_EEDemiSeason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::NewProp_Season_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::NewProp_Season,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SeasonLandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonLandscapeFragment, nullptr, "ChangeSeason", nullptr, nullptr, sizeof(SeasonLandscapeFragment_eventChangeSeason_Parms), Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics
	{
		struct SeasonLandscapeFragment_eventSmoothChangeSeason_Parms
		{
			float Delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SeasonLandscapeFragment_eventSmoothChangeSeason_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SeasonLandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonLandscapeFragment, nullptr, "SmoothChangeSeason", nullptr, nullptr, sizeof(SeasonLandscapeFragment_eventSmoothChangeSeason_Parms), Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USeasonLandscapeFragment_NoRegister()
	{
		return USeasonLandscapeFragment::StaticClass();
	}
	struct Z_Construct_UClass_USeasonLandscapeFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendMaterialInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMaterialInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendMaterialInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeasonLandscapeFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapeFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDistantPlan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USeasonLandscapeFragment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USeasonLandscapeFragment_ChangeSeason, "ChangeSeason" }, // 3207600913
		{ &Z_Construct_UFunction_USeasonLandscapeFragment_SmoothChangeSeason, "SmoothChangeSeason" }, // 3794809568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonLandscapeFragment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SeasonLandscapeFragment.h" },
		{ "ModuleRelativePath", "Public/SeasonLandscapeFragment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInterface_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/SeasonLandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInterface = { "BlendMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonLandscapeFragment, BlendMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInst_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/SeasonLandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInst = { "BlendMaterialInst", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonLandscapeFragment, BlendMaterialInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_TempTexture_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/SeasonLandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_TempTexture = { "TempTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeasonLandscapeFragment, TempTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_TempTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_TempTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeasonLandscapeFragment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_BlendMaterialInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonLandscapeFragment_Statics::NewProp_TempTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeasonLandscapeFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonLandscapeFragment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USeasonLandscapeFragment_Statics::ClassParams = {
		&USeasonLandscapeFragment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USeasonLandscapeFragment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USeasonLandscapeFragment_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USeasonLandscapeFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonLandscapeFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeasonLandscapeFragment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USeasonLandscapeFragment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeasonLandscapeFragment, 977967932);
	template<> ACCURATEDISTANTPLAN_API UClass* StaticClass<USeasonLandscapeFragment>()
	{
		return USeasonLandscapeFragment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeasonLandscapeFragment(Z_Construct_UClass_USeasonLandscapeFragment, &USeasonLandscapeFragment::StaticClass, TEXT("/Script/AccurateDistantPlan"), TEXT("USeasonLandscapeFragment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonLandscapeFragment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
