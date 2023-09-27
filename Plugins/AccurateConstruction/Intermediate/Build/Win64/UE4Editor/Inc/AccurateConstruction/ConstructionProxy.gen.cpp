// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateConstruction/Public/ConstructionProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionProxy() {}
// Cross Module References
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy_NoRegister();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AccurateConstruction();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AConstructionProxy::execSetDisplayMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_DisplayMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayMesh(Z_Param_DisplayMesh);
		P_NATIVE_END;
	}
	void AConstructionProxy::StaticRegisterNativesAConstructionProxy()
	{
		UClass* Class = AConstructionProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDisplayMesh", &AConstructionProxy::execSetDisplayMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics
	{
		struct ConstructionProxy_eventSetDisplayMesh_Parms
		{
			UStaticMesh* DisplayMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionProxy_eventSetDisplayMesh_Parms, DisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::NewProp_DisplayMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AccurateConstruction" },
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConstructionProxy, nullptr, "SetDisplayMesh", nullptr, nullptr, sizeof(ConstructionProxy_eventSetDisplayMesh_Parms), Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConstructionProxy_NoRegister()
	{
		return AConstructionProxy::StaticClass();
	}
	struct Z_Construct_UClass_AConstructionProxy_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructionProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConstructionProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConstructionProxy_SetDisplayMesh, "SetDisplayMesh" }, // 107096590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructionProxy.h" },
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionProxy_Statics::NewProp_StaticMeshBase_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "Comment", "/**\n\x09 Components\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructionProxy_Statics::NewProp_StaticMeshBase = { "StaticMeshBase", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructionProxy, StaticMeshBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructionProxy_Statics::NewProp_StaticMeshBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionProxy_Statics::NewProp_StaticMeshBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructionProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructionProxy_Statics::NewProp_StaticMeshBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructionProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructionProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructionProxy_Statics::ClassParams = {
		&AConstructionProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConstructionProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionProxy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructionProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructionProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructionProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructionProxy, 4227808657);
	template<> ACCURATECONSTRUCTION_API UClass* StaticClass<AConstructionProxy>()
	{
		return AConstructionProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructionProxy(Z_Construct_UClass_AConstructionProxy, &AConstructionProxy::StaticClass, TEXT("/Script/AccurateConstruction"), TEXT("AConstructionProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructionProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
