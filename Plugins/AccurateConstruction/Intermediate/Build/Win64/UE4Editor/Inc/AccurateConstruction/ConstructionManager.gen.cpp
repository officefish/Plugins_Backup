// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateConstruction/Public/ConstructionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionManager() {}
// Cross Module References
	ACCURATECONSTRUCTION_API UFunction* Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AccurateConstruction();
	ACCURATECONSTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionQueue();
	ACCURATECONSTRUCTION_API UEnum* Z_Construct_UEnum_AccurateConstruction_EEBuildingCategory();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy_NoRegister();
	ACCURATECONSTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionRules();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_ABuildingMaster_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionManager_NoRegister();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_AccurateConstruction_eventConstuctionCompleteDelegate_Parms
		{
			FConstructionQueue Queue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Queue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AccurateConstruction_eventConstuctionCompleteDelegate_Parms, Queue), Z_Construct_UScriptStruct_FConstructionQueue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::NewProp_Queue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AccurateConstruction, nullptr, "ConstuctionCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AccurateConstruction_eventConstuctionCompleteDelegate_Parms), Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EEBuildingCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccurateConstruction_EEBuildingCategory, Z_Construct_UPackage__Script_AccurateConstruction(), TEXT("EEBuildingCategory"));
		}
		return Singleton;
	}
	template<> ACCURATECONSTRUCTION_API UEnum* StaticEnum<EEBuildingCategory>()
	{
		return EEBuildingCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEBuildingCategory(EEBuildingCategory_StaticEnum, TEXT("/Script/AccurateConstruction"), TEXT("EEBuildingCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccurateConstruction_EEBuildingCategory_Hash() { return 3156717351U; }
	UEnum* Z_Construct_UEnum_AccurateConstruction_EEBuildingCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateConstruction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEBuildingCategory"), 0, Get_Z_Construct_UEnum_AccurateConstruction_EEBuildingCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEBuildingCategory::Residential", (int64)EEBuildingCategory::Residential },
				{ "EEBuildingCategory::Industrial", (int64)EEBuildingCategory::Industrial },
				{ "EEBuildingCategory::Commercial", (int64)EEBuildingCategory::Commercial },
				{ "EEBuildingCategory::Scientific", (int64)EEBuildingCategory::Scientific },
				{ "EEBuildingCategory::Military", (int64)EEBuildingCategory::Military },
				{ "EEBuildingCategory::Religious", (int64)EEBuildingCategory::Religious },
				{ "EEBuildingCategory::Administrative", (int64)EEBuildingCategory::Administrative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Administrative.DisplayName", "Administrative" },
				{ "Administrative.Name", "EEBuildingCategory::Administrative" },
				{ "BlueprintType", "true" },
				{ "Commercial.DisplayName", "Commercial" },
				{ "Commercial.Name", "EEBuildingCategory::Commercial" },
				{ "Industrial.DisplayName", "Industrial" },
				{ "Industrial.Name", "EEBuildingCategory::Industrial" },
				{ "Military.DisplayName", "Military" },
				{ "Military.Name", "EEBuildingCategory::Military" },
				{ "ModuleRelativePath", "Public/ConstructionManager.h" },
				{ "Religious.DisplayName", "Religious" },
				{ "Religious.Name", "EEBuildingCategory::Religious" },
				{ "Residential.DisplayName", "Residential" },
				{ "Residential.Name", "EEBuildingCategory::Residential" },
				{ "Scientific.DisplayName", "Scientific" },
				{ "Scientific.Name", "EEBuildingCategory::Scientific" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccurateConstruction,
				nullptr,
				"EEBuildingCategory",
				"EEBuildingCategory",
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
class UScriptStruct* FConstructionQueue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATECONSTRUCTION_API uint32 Get_Z_Construct_UScriptStruct_FConstructionQueue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructionQueue, Z_Construct_UPackage__Script_AccurateConstruction(), TEXT("ConstructionQueue"), sizeof(FConstructionQueue), Get_Z_Construct_UScriptStruct_FConstructionQueue_Hash());
	}
	return Singleton;
}
template<> ACCURATECONSTRUCTION_API UScriptStruct* StaticStruct<FConstructionQueue>()
{
	return FConstructionQueue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstructionQueue(FConstructionQueue::StaticStruct, TEXT("/Script/AccurateConstruction"), TEXT("ConstructionQueue"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateConstruction_StaticRegisterNativesFConstructionQueue
{
	FScriptStruct_AccurateConstruction_StaticRegisterNativesFConstructionQueue()
	{
		UScriptStruct::DeferCppStructOps<FConstructionQueue>(FName(TEXT("ConstructionQueue")));
	}
} ScriptStruct_AccurateConstruction_StaticRegisterNativesFConstructionQueue;
	struct Z_Construct_UScriptStruct_FConstructionQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionCompleteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstructionCompleteTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionQueue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructionQueue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionQueue, Proxy), Z_Construct_UClass_AConstructionProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Proxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionQueue, Rules), Z_Construct_UScriptStruct_FConstructionRules, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Rules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_ConstructionCompleteTime_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_ConstructionCompleteTime = { "ConstructionCompleteTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionQueue, ConstructionCompleteTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_ConstructionCompleteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_ConstructionCompleteTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructionQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Proxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionQueue_Statics::NewProp_ConstructionCompleteTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructionQueue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
		nullptr,
		&NewStructOps,
		"ConstructionQueue",
		sizeof(FConstructionQueue),
		alignof(FConstructionQueue),
		Z_Construct_UScriptStruct_FConstructionQueue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionQueue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionQueue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionQueue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructionQueue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstructionQueue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateConstruction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstructionQueue"), sizeof(FConstructionQueue), Get_Z_Construct_UScriptStruct_FConstructionQueue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstructionQueue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstructionQueue_Hash() { return 1042243160U; }
class UScriptStruct* FConstructionRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCURATECONSTRUCTION_API uint32 Get_Z_Construct_UScriptStruct_FConstructionRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructionRules, Z_Construct_UPackage__Script_AccurateConstruction(), TEXT("ConstructionRules"), sizeof(FConstructionRules), Get_Z_Construct_UScriptStruct_FConstructionRules_Hash());
	}
	return Singleton;
}
template<> ACCURATECONSTRUCTION_API UScriptStruct* StaticStruct<FConstructionRules>()
{
	return FConstructionRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstructionRules(FConstructionRules::StaticStruct, TEXT("/Script/AccurateConstruction"), TEXT("ConstructionRules"), false, nullptr, nullptr);
static struct FScriptStruct_AccurateConstruction_StaticRegisterNativesFConstructionRules
{
	FScriptStruct_AccurateConstruction_StaticRegisterNativesFConstructionRules()
	{
		UScriptStruct::DeferCppStructOps<FConstructionRules>(FName(TEXT("ConstructionRules")));
	}
} ScriptStruct_AccurateConstruction_StaticRegisterNativesFConstructionRules;
	struct Z_Construct_UScriptStruct_FConstructionRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingMasterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BuildingMasterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionProxyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConstructionProxyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructionRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructionRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_BuildingMasterClass_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_BuildingMasterClass = { "BuildingMasterClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionRules, BuildingMasterClass), Z_Construct_UClass_ABuildingMaster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_BuildingMasterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_BuildingMasterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_ConstructionProxyClass_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_ConstructionProxyClass = { "ConstructionProxyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionRules, ConstructionProxyClass), Z_Construct_UClass_AConstructionProxy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_ConstructionProxyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_ConstructionProxyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionRules, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_DisplayMesh_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionRules, DisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_DisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_DisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_TimeRequired_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_TimeRequired = { "TimeRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionRules, TimeRequired), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_TimeRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_TimeRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructionRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_BuildingMasterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_ConstructionProxyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_DisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionRules_Statics::NewProp_TimeRequired,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructionRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
		nullptr,
		&NewStructOps,
		"ConstructionRules",
		sizeof(FConstructionRules),
		alignof(FConstructionRules),
		Z_Construct_UScriptStruct_FConstructionRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructionRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstructionRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccurateConstruction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstructionRules"), sizeof(FConstructionRules), Get_Z_Construct_UScriptStruct_FConstructionRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstructionRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstructionRules_Hash() { return 1390747061U; }
	DEFINE_FUNCTION(AConstructionManager::execConstructionTimeCheck)
	{
		P_GET_STRUCT(FDateTime,Z_Param_CurrentDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructionTimeCheck(Z_Param_CurrentDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConstructionManager::execOnConstructionComplete)
	{
		P_GET_STRUCT(FConstructionQueue,Z_Param_Queue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConstructionComplete(Z_Param_Queue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConstructionManager::execGetBuildingMasterClass)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_BuildingCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_BuildingIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ABuildingMaster> *)Z_Param__Result=P_THIS->GetBuildingMasterClass(Z_Param_BuildingCategory,Z_Param_BuildingIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConstructionManager::execFinishConstruction)
	{
		P_GET_STRUCT(FConstructionQueue,Z_Param_Queue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishConstruction(Z_Param_Queue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConstructionManager::execQueueConstruction)
	{
		P_GET_STRUCT(FConstructionRules,Z_Param_Rules);
		P_GET_STRUCT(FDateTime,Z_Param_CurrentDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueueConstruction(Z_Param_Rules,Z_Param_CurrentDateTime);
		P_NATIVE_END;
	}
	void AConstructionManager::StaticRegisterNativesAConstructionManager()
	{
		UClass* Class = AConstructionManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructionTimeCheck", &AConstructionManager::execConstructionTimeCheck },
			{ "FinishConstruction", &AConstructionManager::execFinishConstruction },
			{ "GetBuildingMasterClass", &AConstructionManager::execGetBuildingMasterClass },
			{ "OnConstructionComplete", &AConstructionManager::execOnConstructionComplete },
			{ "QueueConstruction", &AConstructionManager::execQueueConstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics
	{
		struct ConstructionManager_eventConstructionTimeCheck_Parms
		{
			FDateTime CurrentDateTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::NewProp_CurrentDateTime = { "CurrentDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventConstructionTimeCheck_Parms, CurrentDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::NewProp_CurrentDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConstructionManager, nullptr, "ConstructionTimeCheck", nullptr, nullptr, sizeof(ConstructionManager_eventConstructionTimeCheck_Parms), Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics
	{
		struct ConstructionManager_eventFinishConstruction_Parms
		{
			FConstructionQueue Queue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Queue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventFinishConstruction_Parms, Queue), Z_Construct_UScriptStruct_FConstructionQueue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::NewProp_Queue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConstructionManager, nullptr, "FinishConstruction", nullptr, nullptr, sizeof(ConstructionManager_eventFinishConstruction_Parms), Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConstructionManager_FinishConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConstructionManager_FinishConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics
	{
		struct ConstructionManager_eventGetBuildingMasterClass_Parms
		{
			uint8 BuildingCategory;
			int32 BuildingIndex;
			TSubclassOf<ABuildingMaster>  ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuildingCategory;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingIndex;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::NewProp_BuildingCategory = { "BuildingCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventGetBuildingMasterClass_Parms, BuildingCategory), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::NewProp_BuildingIndex = { "BuildingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventGetBuildingMasterClass_Parms, BuildingIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventGetBuildingMasterClass_Parms, ReturnValue), Z_Construct_UClass_ABuildingMaster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::NewProp_BuildingCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::NewProp_BuildingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConstructionManager, nullptr, "GetBuildingMasterClass", nullptr, nullptr, sizeof(ConstructionManager_eventGetBuildingMasterClass_Parms), Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics
	{
		struct ConstructionManager_eventOnConstructionComplete_Parms
		{
			FConstructionQueue Queue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Queue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventOnConstructionComplete_Parms, Queue), Z_Construct_UScriptStruct_FConstructionQueue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::NewProp_Queue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConstructionManager, nullptr, "OnConstructionComplete", nullptr, nullptr, sizeof(ConstructionManager_eventOnConstructionComplete_Parms), Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConstructionManager_OnConstructionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConstructionManager_OnConstructionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics
	{
		struct ConstructionManager_eventQueueConstruction_Parms
		{
			FConstructionRules Rules;
			FDateTime CurrentDateTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventQueueConstruction_Parms, Rules), Z_Construct_UScriptStruct_FConstructionRules, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::NewProp_CurrentDateTime = { "CurrentDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionManager_eventQueueConstruction_Parms, CurrentDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::NewProp_CurrentDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConstructionManager, nullptr, "QueueConstruction", nullptr, nullptr, sizeof(ConstructionManager_eventQueueConstruction_Parms), Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConstructionManager_QueueConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConstructionManager_QueueConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConstructionManager_NoRegister()
	{
		return AConstructionManager::StaticClass();
	}
	struct Z_Construct_UClass_AConstructionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstructionCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstructionCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConstructionManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConstructionManager_ConstructionTimeCheck, "ConstructionTimeCheck" }, // 780335113
		{ &Z_Construct_UFunction_AConstructionManager_FinishConstruction, "FinishConstruction" }, // 2040125147
		{ &Z_Construct_UFunction_AConstructionManager_GetBuildingMasterClass, "GetBuildingMasterClass" }, // 4229283724
		{ &Z_Construct_UFunction_AConstructionManager_OnConstructionComplete, "OnConstructionComplete" }, // 1468129145
		{ &Z_Construct_UFunction_AConstructionManager_QueueConstruction, "QueueConstruction" }, // 435177396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructionManager.h" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionManager_Statics::NewProp_OnConstructionCompleteDelegate_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AConstructionManager_Statics::NewProp_OnConstructionCompleteDelegate = { "OnConstructionCompleteDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructionManager, OnConstructionCompleteDelegate), Z_Construct_UDelegateFunction_AccurateConstruction_ConstuctionCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AConstructionManager_Statics::NewProp_OnConstructionCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionManager_Statics::NewProp_OnConstructionCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructionManager_Statics::NewProp_OnConstructionCompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructionManager_Statics::ClassParams = {
		&AConstructionManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConstructionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructionManager, 2881745348);
	template<> ACCURATECONSTRUCTION_API UClass* StaticClass<AConstructionManager>()
	{
		return AConstructionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructionManager(Z_Construct_UClass_AConstructionManager, &AConstructionManager::StaticClass, TEXT("/Script/AccurateConstruction"), TEXT("AConstructionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
