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
	ACCURATECONSTRUCTION_API UFunction* Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AccurateConstruction();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy_NoRegister();
	ACCURATECONSTRUCTION_API UClass* Z_Construct_UClass_AConstructionProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_AccurateConstruction_eventConstructionCompleteDelegate_Parms
		{
			AConstructionProxy* Proxy;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AccurateConstruction_eventConstructionCompleteDelegate_Parms, Proxy), Z_Construct_UClass_AConstructionProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::NewProp_Proxy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AccurateConstruction, nullptr, "ConstructionCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AccurateConstruction_eventConstructionCompleteDelegate_Parms), Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AConstructionProxy::StaticRegisterNativesAConstructionProxy()
	{
	}
	UClass* Z_Construct_UClass_AConstructionProxy_NoRegister()
	{
		return AConstructionProxy::StaticClass();
	}
	struct Z_Construct_UClass_AConstructionProxy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstructionCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstructionCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructionProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateConstruction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructionProxy.h" },
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionProxy_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "Comment", "/**\n\x09 Components\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructionProxy_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructionProxy, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructionProxy_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionProxy_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructionProxy_Statics::NewProp_OnConstructionCompleteDelegate_MetaData[] = {
		{ "Category", "AccurateConstruction" },
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/ConstructionProxy.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AConstructionProxy_Statics::NewProp_OnConstructionCompleteDelegate = { "OnConstructionCompleteDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructionProxy, OnConstructionCompleteDelegate), Z_Construct_UDelegateFunction_AccurateConstruction_ConstructionCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AConstructionProxy_Statics::NewProp_OnConstructionCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructionProxy_Statics::NewProp_OnConstructionCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructionProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructionProxy_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructionProxy_Statics::NewProp_OnConstructionCompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructionProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructionProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructionProxy_Statics::ClassParams = {
		&AConstructionProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConstructionProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AConstructionProxy, 2892208382);
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
