// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccurateDayNight/Public/SunComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSunComponent() {}
// Cross Module References
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_USunComponent_NoRegister();
	ACCURATEDAYNIGHT_API UClass* Z_Construct_UClass_USunComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AccurateDayNight();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
// End Cross Module References
	void USunComponent::StaticRegisterNativesUSunComponent()
	{
	}
	UClass* Z_Construct_UClass_USunComponent_NoRegister()
	{
		return USunComponent::StaticClass();
	}
	struct Z_Construct_UClass_USunComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunDirectionalLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SunDirectionalLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USunComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AccurateDayNight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USunComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SunComponent.h" },
		{ "ModuleRelativePath", "Public/SunComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USunComponent_Statics::NewProp_SunDirectionalLight_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SunComponent.h" },
		{ "OverrideNativeName", "DirectionalLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunComponent_Statics::NewProp_SunDirectionalLight = { "DirectionalLight", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USunComponent, SunDirectionalLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USunComponent_Statics::NewProp_SunDirectionalLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USunComponent_Statics::NewProp_SunDirectionalLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USunComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunComponent_Statics::NewProp_SunDirectionalLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USunComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USunComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USunComponent_Statics::ClassParams = {
		&USunComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USunComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USunComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USunComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USunComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USunComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USunComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USunComponent, 3855118598);
	template<> ACCURATEDAYNIGHT_API UClass* StaticClass<USunComponent>()
	{
		return USunComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USunComponent(Z_Construct_UClass_USunComponent, &USunComponent::StaticClass, TEXT("/Script/AccurateDayNight"), TEXT("USunComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USunComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
