// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateConstruction/Public/GhostBuilding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostBuilding() {}
// Cross Module References
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AGhostBuilding_NoRegister();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AGhostBuilding();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AccurateConstruction();
	ACCURATECONSTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionRules();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_ABuildingMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	DEFINE_FUNCTION(AGhostBuilding::execSlopeCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SlopeCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGhostBuilding::execTickColor)
	{
		P_GET_UBOOL(Z_Param_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickColor(Z_Param_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGhostBuilding::execIsOverlappingActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGhostBuilding::execGetConstructionRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConstructionRules*)Z_Param__Result=P_THIS->GetConstructionRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGhostBuilding::execKillGhost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillGhost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGhostBuilding::execSpawnGhost)
	{
		P_GET_OBJECT(UClass,Z_Param_MasterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnGhost(Z_Param_MasterClass);
		P_NATIVE_END;
	}
	void AGhostBuilding::StaticRegisterNativesAGhostBuilding()
	{
		UClass* Class = AGhostBuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConstructionRules", &AGhostBuilding::execGetConstructionRules },
			{ "IsOverlappingActors", &AGhostBuilding::execIsOverlappingActors },
			{ "KillGhost", &AGhostBuilding::execKillGhost },
			{ "SlopeCheck", &AGhostBuilding::execSlopeCheck },
			{ "SpawnGhost", &AGhostBuilding::execSpawnGhost },
			{ "TickColor", &AGhostBuilding::execTickColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics
	{
		struct GhostBuilding_eventGetConstructionRules_Parms
		{
			FConstructionRules ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostBuilding_eventGetConstructionRules_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstructionRules, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostBuilding, nullptr, "GetConstructionRules", nullptr, nullptr, sizeof(GhostBuilding_eventGetConstructionRules_Parms), Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhostBuilding_GetConstructionRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhostBuilding_GetConstructionRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics
	{
		struct GhostBuilding_eventIsOverlappingActors_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GhostBuilding_eventIsOverlappingActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostBuilding_eventIsOverlappingActors_Parms), &Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostBuilding, nullptr, "IsOverlappingActors", nullptr, nullptr, sizeof(GhostBuilding_eventIsOverlappingActors_Parms), Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhostBuilding_KillGhost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostBuilding_KillGhost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostBuilding_KillGhost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostBuilding, nullptr, "KillGhost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhostBuilding_KillGhost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_KillGhost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhostBuilding_KillGhost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhostBuilding_KillGhost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics
	{
		struct GhostBuilding_eventSlopeCheck_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GhostBuilding_eventSlopeCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostBuilding_eventSlopeCheck_Parms), &Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostBuilding, nullptr, "SlopeCheck", nullptr, nullptr, sizeof(GhostBuilding_eventSlopeCheck_Parms), Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhostBuilding_SlopeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhostBuilding_SlopeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics
	{
		struct GhostBuilding_eventSpawnGhost_Parms
		{
			TSubclassOf<ABuildingMaster>  MasterClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MasterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::NewProp_MasterClass = { "MasterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostBuilding_eventSpawnGhost_Parms, MasterClass), Z_Construct_UClass_ABuildingMaster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::NewProp_MasterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostBuilding, nullptr, "SpawnGhost", nullptr, nullptr, sizeof(GhostBuilding_eventSpawnGhost_Parms), Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhostBuilding_SpawnGhost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhostBuilding_SpawnGhost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhostBuilding_TickColor_Statics
	{
		struct GhostBuilding_eventTickColor_Parms
		{
			bool Valid;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((GhostBuilding_eventTickColor_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostBuilding_eventTickColor_Parms), &Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::NewProp_Valid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostBuilding, nullptr, "TickColor", nullptr, nullptr, sizeof(GhostBuilding_eventTickColor_Parms), Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhostBuilding_TickColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhostBuilding_TickColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGhostBuilding_NoRegister()
	{
		return AGhostBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AGhostBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingMasterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BuildingMasterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionProxyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConstructionProxyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlopeDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlopeDifference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhostBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGhostBuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhostBuilding_GetConstructionRules, "GetConstructionRules" }, // 1500827312
		{ &Z_Construct_UFunction_AGhostBuilding_IsOverlappingActors, "IsOverlappingActors" }, // 2775865991
		{ &Z_Construct_UFunction_AGhostBuilding_KillGhost, "KillGhost" }, // 2596216008
		{ &Z_Construct_UFunction_AGhostBuilding_SlopeCheck, "SlopeCheck" }, // 2851189103
		{ &Z_Construct_UFunction_AGhostBuilding_SpawnGhost, "SpawnGhost" }, // 808001493
		{ &Z_Construct_UFunction_AGhostBuilding_TickColor, "TickColor" }, // 549863861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKillGhostDelegate);\n" },
		{ "IncludePath", "GhostBuilding.h" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKillGhostDelegate);" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_StaticMeshBase_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "Comment", "/**\n\x09 Components\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_StaticMeshBase = { "StaticMeshBase", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, StaticMeshBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_StaticMeshBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_StaticMeshBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_DisplayMesh_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x0010000400000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, DisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_DisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_DisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_BuildingMasterClass_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_BuildingMasterClass = { "BuildingMasterClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, BuildingMasterClass), Z_Construct_UClass_ABuildingMaster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_BuildingMasterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_BuildingMasterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_ConstructionProxyClass_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_ConstructionProxyClass = { "ConstructionProxyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, ConstructionProxyClass), Z_Construct_UClass_AConstructionProxy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_ConstructionProxyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_ConstructionProxyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_TimeRequired_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_TimeRequired = { "TimeRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, TimeRequired), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_TimeRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_TimeRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_SlopeTraceDistance_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_SlopeTraceDistance = { "SlopeTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, SlopeTraceDistance), METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_SlopeTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_SlopeTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBuilding_Statics::NewProp_MaxSlopeDifference_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/GhostBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGhostBuilding_Statics::NewProp_MaxSlopeDifference = { "MaxSlopeDifference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBuilding, MaxSlopeDifference), METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_MaxSlopeDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::NewProp_MaxSlopeDifference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhostBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_StaticMeshBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_DisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_BuildingMasterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_ConstructionProxyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_TimeRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_SlopeTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBuilding_Statics::NewProp_MaxSlopeDifference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhostBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostBuilding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGhostBuilding_Statics::ClassParams = {
		&AGhostBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGhostBuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGhostBuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGhostBuilding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGhostBuilding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGhostBuilding, 1102918881);
	template<> ACCURATECONSTRUCTION_API UClass* StaticClass<AGhostBuilding>()
	{
		return AGhostBuilding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhostBuilding(Z_Construct_UClass_AGhostBuilding, &AGhostBuilding::StaticClass, TEXT("/Script/AccurateConstruction"), TEXT("AGhostBuilding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostBuilding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
