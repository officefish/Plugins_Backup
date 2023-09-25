// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSSmoothCamera/Public/RTSSmoothCameraPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSSmoothCameraPawn() {}
// Cross Module References
	RTSSMOOTHCAMERA_API UClass* Z_Construct_UClass_ARTSSmoothCameraPawn_NoRegister();
	RTSSMOOTHCAMERA_API UClass* Z_Construct_UClass_ARTSSmoothCameraPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RTSSmoothCamera();
	RTSSMOOTHCAMERA_API UClass* Z_Construct_UClass_URTSSmoothCameraComponent_NoRegister();
// End Cross Module References
	void ARTSSmoothCameraPawn::StaticRegisterNativesARTSSmoothCameraPawn()
	{
	}
	UClass* Z_Construct_UClass_ARTSSmoothCameraPawn_NoRegister()
	{
		return ARTSSmoothCameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSSmoothCameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTSCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTSCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSSmoothCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSSmoothCameraPawn.h" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::NewProp_RTSCameraComponent_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::NewProp_RTSCameraComponent = { "RTSCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSSmoothCameraPawn, RTSCameraComponent), Z_Construct_UClass_URTSSmoothCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::NewProp_RTSCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::NewProp_RTSCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::NewProp_RTSCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSSmoothCameraPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::ClassParams = {
		&ARTSSmoothCameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSSmoothCameraPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTSSmoothCameraPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTSSmoothCameraPawn, 599803734);
	template<> RTSSMOOTHCAMERA_API UClass* StaticClass<ARTSSmoothCameraPawn>()
	{
		return ARTSSmoothCameraPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSSmoothCameraPawn(Z_Construct_UClass_ARTSSmoothCameraPawn, &ARTSSmoothCameraPawn::StaticClass, TEXT("/Script/RTSSmoothCamera"), TEXT("ARTSSmoothCameraPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSSmoothCameraPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
