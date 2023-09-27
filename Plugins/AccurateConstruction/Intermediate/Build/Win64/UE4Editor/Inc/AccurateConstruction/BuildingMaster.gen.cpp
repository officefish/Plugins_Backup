// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateConstruction/Public/BuildingMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingMaster() {}
// Cross Module References
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_ABuildingMaster_NoRegister();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_ABuildingMaster();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AccurateConstruction();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	void ABuildingMaster::StaticRegisterNativesABuildingMaster()
	{
	}
	UClass* Z_Construct_UClass_ABuildingMaster_NoRegister()
	{
		return ABuildingMaster::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionProxyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConstructionProxyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildingMaster.h" },
		{ "ModuleRelativePath", "Public/BuildingMaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingMaster_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "Comment", "/**\n\x09""Components\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingMaster.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingMaster_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingMaster, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingMaster_Statics::NewProp_StaticMeshBase_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingMaster_Statics::NewProp_StaticMeshBase = { "StaticMeshBase", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingMaster, StaticMeshBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_StaticMeshBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_StaticMeshBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingMaster_Statics::NewProp_ConstructionProxyClass_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/BuildingMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABuildingMaster_Statics::NewProp_ConstructionProxyClass = { "ConstructionProxyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingMaster, ConstructionProxyClass), Z_Construct_UClass_AConstructionProxy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_ConstructionProxyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_ConstructionProxyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingMaster_Statics::NewProp_DisplayMesh_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/BuildingMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingMaster_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingMaster, DisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_DisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_DisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingMaster_Statics::NewProp_TimeRequired_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/BuildingMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildingMaster_Statics::NewProp_TimeRequired = { "TimeRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingMaster, TimeRequired), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_TimeRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::NewProp_TimeRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingMaster_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingMaster_Statics::NewProp_StaticMeshBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingMaster_Statics::NewProp_ConstructionProxyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingMaster_Statics::NewProp_DisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingMaster_Statics::NewProp_TimeRequired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingMaster_Statics::ClassParams = {
		&ABuildingMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildingMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingMaster, 2307521406);
	template<> ACCURATECONSTRUCTION_API UClass* StaticClass<ABuildingMaster>()
	{
		return ABuildingMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingMaster(Z_Construct_UClass_ABuildingMaster, &ABuildingMaster::StaticClass, TEXT("/Script/AccurateConstruction"), TEXT("ABuildingMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
