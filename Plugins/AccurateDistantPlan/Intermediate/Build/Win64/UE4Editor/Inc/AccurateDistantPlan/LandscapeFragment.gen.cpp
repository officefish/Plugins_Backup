// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDistantPlan/Public/LandscapeFragment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeFragment() {}
// Cross Module References
	ACCURATEDISTANTPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeFragmentRules();
	UPackage* Z_Construct_UPackage__Script_AccurateDistantPlan();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_ULandscapeFragment_NoRegister();
	ACCURATEDISTANTPLAN_API UClass* Z_Construct_UClass_ULandscapeFragment();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FLandscapeFragmentRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATEDISTANTPLAN_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeFragmentRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeFragmentRules, Z_Construct_UPackage__Script_AccurateDistantPlan(), TEXT("LandscapeFragmentRules"), sizeof(FLandscapeFragmentRules), Get_Z_Construct_UScriptStruct_FLandscapeFragmentRules_Hash());
	}
	return Singleton;
}
template<> ACCURATEDISTANTPLAN_API UScriptStruct* StaticStruct<FLandscapeFragmentRules>()
{
	return FLandscapeFragmentRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeFragmentRules(FLandscapeFragmentRules::StaticStruct, TEXT("/Script/AccurateDistantPlan"), TEXT("LandscapeFragmentRules"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateDistantPlan_StaticRegisterNativesFLandscapeFragmentRules
{
	FScriptStruct_AccurateDistantPlan_StaticRegisterNativesFLandscapeFragmentRules()
	{
		UScriptStruct::DeferCppStructOps<FLandscapeFragmentRules>(FName(TEXT("LandscapeFragmentRules")));
	}
} ScriptStruct_AccurateDistantPlan_StaticRegisterNativesFLandscapeFragmentRules;
	struct Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SummerMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SummerMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutumnMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutumnMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_BC_Red_1_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_BC_Red_1_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_BC_Red_2_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_BC_Red_2_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_BC_Green_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_BC_Green_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_BC_Blue_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_BC_Blue_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_BC_Snow_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_BC_Snow_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_BC_Red_1_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_BC_Red_1_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_BC_Red_2_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_BC_Red_2_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_BC_Green_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_BC_Green_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_BC_Blue_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_BC_Blue_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_BC_Red_1_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_BC_Red_1_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_BC_Red_2_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_BC_Red_2_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_BC_Green_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_BC_Green_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_BC_Blue_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_BC_Blue_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winter_BC_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winter_BC_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winter_Snow_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winter_Snow_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_Normal_Red_1_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_Normal_Red_1_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_Normal_Red_2_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_Normal_Red_2_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_Normal_Green_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_Normal_Green_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_Normal_Blue_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_Normal_Blue_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spring_Normal_Snow_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spring_Normal_Snow_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_Normal_Red_1_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_Normal_Red_1_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_Normal_Red_2_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_Normal_Red_2_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_Normal_Green_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_Normal_Green_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summer_Normal_Blue_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summer_Normal_Blue_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_Normal_Red_1_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_Normal_Red_1_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_Normal_Red_2_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_Normal_Red_2_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_Normal_Green_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_Normal_Green_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Autumn_Normal_Blue_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Autumn_Normal_Blue_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winter_BC_Normal_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winter_BC_Normal_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winter_Snow_Normal_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winter_Snow_Normal_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Main_Normal_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Main_Normal_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splat_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Splat_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winter_Splat_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winter_Splat_T;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeFragmentRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SpringMaterial_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SpringMaterial = { "SpringMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, SpringMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SpringMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SpringMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SummerMaterial_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SummerMaterial = { "SummerMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, SummerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SummerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SummerMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_AutumnMaterial_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_AutumnMaterial = { "AutumnMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, AutumnMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_AutumnMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_AutumnMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_WinterMaterial_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_WinterMaterial = { "WinterMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, WinterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_WinterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_WinterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_LandscapeMaterial_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "OverrideNativeName", "LandscapeMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, LandscapeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_LandscapeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_LandscapeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_1_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Spring */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Spring" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_1_T = { "Spring_BC_Red_1_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_BC_Red_1_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_1_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_1_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_2_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_2_T = { "Spring_BC_Red_2_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_BC_Red_2_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_2_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_2_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Green_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Green_T = { "Spring_BC_Green_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_BC_Green_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Green_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Green_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Blue_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Blue_T = { "Spring_BC_Blue_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_BC_Blue_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Blue_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Blue_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Snow_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Snow_T = { "Spring_BC_Snow_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_BC_Snow_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Snow_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Snow_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_1_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Summer */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Summer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_1_T = { "Summer_BC_Red_1_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_BC_Red_1_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_1_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_1_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_2_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_2_T = { "Summer_BC_Red_2_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_BC_Red_2_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_2_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_2_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Green_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Green_T = { "Summer_BC_Green_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_BC_Green_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Green_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Green_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Blue_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Blue_T = { "Summer_BC_Blue_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_BC_Blue_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Blue_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Blue_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_1_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Autumn */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Autumn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_1_T = { "Autumn_BC_Red_1_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_BC_Red_1_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_1_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_1_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_2_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_2_T = { "Autumn_BC_Red_2_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_BC_Red_2_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_2_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_2_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Green_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Green_T = { "Autumn_BC_Green_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_BC_Green_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Green_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Green_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Blue_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Blue_T = { "Autumn_BC_Blue_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_BC_Blue_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Blue_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Blue_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Winter */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Winter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_T = { "Winter_BC_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Winter_BC_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_T = { "Winter_Snow_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Winter_Snow_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_1_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Spring */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Spring" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_1_T = { "Spring_Normal_Red_1_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_Normal_Red_1_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_1_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_1_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_2_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_2_T = { "Spring_Normal_Red_2_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_Normal_Red_2_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_2_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_2_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Green_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Green_T = { "Spring_Normal_Green_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_Normal_Green_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Green_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Green_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Blue_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Blue_T = { "Spring_Normal_Blue_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_Normal_Blue_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Blue_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Blue_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Snow_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Snow_T = { "Spring_Normal_Snow_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Spring_Normal_Snow_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Snow_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Snow_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_1_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Summer */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Summer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_1_T = { "Summer_Normal_Red_1_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_Normal_Red_1_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_1_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_1_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_2_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_2_T = { "Summer_Normal_Red_2_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_Normal_Red_2_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_2_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_2_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Green_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Green_T = { "Summer_Normal_Green_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_Normal_Green_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Green_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Green_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Blue_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Blue_T = { "Summer_Normal_Blue_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Summer_Normal_Blue_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Blue_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Blue_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_1_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Autumn */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Autumn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_1_T = { "Autumn_Normal_Red_1_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_Normal_Red_1_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_1_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_1_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_2_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_2_T = { "Autumn_Normal_Red_2_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_Normal_Red_2_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_2_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_2_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Green_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Green_T = { "Autumn_Normal_Green_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_Normal_Green_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Green_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Green_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Blue_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Blue_T = { "Autumn_Normal_Blue_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Autumn_Normal_Blue_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Blue_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Blue_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_Normal_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/* Winter */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Winter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_Normal_T = { "Winter_BC_Normal_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Winter_BC_Normal_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_Normal_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_Normal_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_Normal_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_Normal_T = { "Winter_Snow_Normal_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Winter_Snow_Normal_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_Normal_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_Normal_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Main_Normal_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "// Special Textures\n" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Special Textures" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Main_Normal_T = { "Main_Normal_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Main_Normal_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Main_Normal_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Main_Normal_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Splat_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Splat_T = { "Splat_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Splat_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Splat_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Splat_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Splat_T_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Splat_T = { "Winter_Splat_T", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeFragmentRules, Winter_Splat_T), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Splat_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Splat_T_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SpringMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_SummerMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_AutumnMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_WinterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_LandscapeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_1_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Red_2_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Green_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Blue_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_BC_Snow_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_1_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Red_2_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Green_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_BC_Blue_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_1_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Red_2_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Green_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_BC_Blue_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_1_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Red_2_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Green_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Blue_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Spring_Normal_Snow_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_1_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Red_2_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Green_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Summer_Normal_Blue_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_1_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Red_2_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Green_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Autumn_Normal_Blue_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_BC_Normal_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Snow_Normal_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Main_Normal_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Splat_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::NewProp_Winter_Splat_T,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDistantPlan,
		nullptr,
		&NewStructOps,
		"LandscapeFragmentRules",
		sizeof(FLandscapeFragmentRules),
		alignof(FLandscapeFragmentRules),
		Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeFragmentRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeFragmentRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateDistantPlan();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeFragmentRules"), sizeof(FLandscapeFragmentRules), Get_Z_Construct_UScriptStruct_FLandscapeFragmentRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeFragmentRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeFragmentRules_Hash() { return 811570115U; }
	DEFINE_FUNCTION(ULandscapeFragment::execSetLandscapeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LandscapeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLandscapeScale(Z_Param_LandscapeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeFragment::execSetRules)
	{
		P_GET_STRUCT(FLandscapeFragmentRules,Z_Param_Rules);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRules(Z_Param_Rules);
		P_NATIVE_END;
	}
	void ULandscapeFragment::StaticRegisterNativesULandscapeFragment()
	{
		UClass* Class = ULandscapeFragment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLandscapeScale", &ULandscapeFragment::execSetLandscapeScale },
			{ "SetRules", &ULandscapeFragment::execSetRules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics
	{
		struct LandscapeFragment_eventSetLandscapeScale_Parms
		{
			float LandscapeScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandscapeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::NewProp_LandscapeScale = { "LandscapeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeFragment_eventSetLandscapeScale_Parms, LandscapeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::NewProp_LandscapeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeFragment, nullptr, "SetLandscapeScale", nullptr, nullptr, sizeof(LandscapeFragment_eventSetLandscapeScale_Parms), Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics
	{
		struct LandscapeFragment_eventSetRules_Parms
		{
			FLandscapeFragmentRules Rules;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeFragment_eventSetRules_Parms, Rules), Z_Construct_UScriptStruct_FLandscapeFragmentRules, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::NewProp_Rules,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Functions */" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeFragment, nullptr, "SetRules", nullptr, nullptr, sizeof(LandscapeFragment_eventSetRules_Parms), Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeFragment_SetRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULandscapeFragment_SetRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULandscapeFragment_NoRegister()
	{
		return ULandscapeFragment::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDistantPlan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeFragment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeFragment_SetLandscapeScale, "SetLandscapeScale" }, // 3384797981
		{ &Z_Construct_UFunction_ULandscapeFragment_SetRules, "SetRules" }, // 3314080402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeFragment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LandscapeFragment.h" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "Comment", "/*UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = \"AccurateDistantPlan\", OverrideNativeName = \"Scene\"))\n\x09\x09USceneComponent* Scene;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = \"AccurateDistantPlan\", OverrideNativeName = \"Scene\"))\n               USceneComponent* Scene;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeFragment, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_LandscapeMaterial_MetaData[] = {
		{ "Category", "AccurateDistantPlan" },
		{ "ModuleRelativePath", "Public/LandscapeFragment.h" },
		{ "OverrideNativeName", "LandscapeMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeFragment, LandscapeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_LandscapeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_LandscapeMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeFragment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeFragment_Statics::NewProp_LandscapeMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeFragment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeFragment_Statics::ClassParams = {
		&ULandscapeFragment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeFragment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeFragment_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeFragment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeFragment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeFragment, 1126592285);
	template<> ACCURATEDISTANTPLAN_API UClass* StaticClass<ULandscapeFragment>()
	{
		return ULandscapeFragment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeFragment(Z_Construct_UClass_ULandscapeFragment, &ULandscapeFragment::StaticClass, TEXT("/Script/AccurateDistantPlan"), TEXT("ULandscapeFragment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeFragment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
