// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSSmoothCamera/Public/RTSSmoothCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSSmoothCameraComponent() {}
// Cross Module References
	RTSSMOOTHCAMERA_API UClass* Z_Construct_UClass_URTSSmoothCameraComponent_NoRegister();
	RTSSMOOTHCAMERA_API UClass* Z_Construct_UClass_URTSSmoothCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_RTSSmoothCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execSetWorldSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldSize(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execPitchCamera)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PitchCamera(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execPanCamera)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PanCamera(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execZoomCamera)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomCamera(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execRotateCameraReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCameraReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execRotateCameraPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCameraPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execMoveCameraLeftRightPerUnit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCameraLeftRightPerUnit(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execMoveCameraUpDownPerUnit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCameraUpDownPerUnit(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execMoveCameraUpDown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCameraUpDown(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URTSSmoothCameraComponent::execMoveCameraLeftRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCameraLeftRight(Z_Param_Value);
		P_NATIVE_END;
	}
	void URTSSmoothCameraComponent::StaticRegisterNativesURTSSmoothCameraComponent()
	{
		UClass* Class = URTSSmoothCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveCameraLeftRight", &URTSSmoothCameraComponent::execMoveCameraLeftRight },
			{ "MoveCameraLeftRightPerUnit", &URTSSmoothCameraComponent::execMoveCameraLeftRightPerUnit },
			{ "MoveCameraUpDown", &URTSSmoothCameraComponent::execMoveCameraUpDown },
			{ "MoveCameraUpDownPerUnit", &URTSSmoothCameraComponent::execMoveCameraUpDownPerUnit },
			{ "PanCamera", &URTSSmoothCameraComponent::execPanCamera },
			{ "PitchCamera", &URTSSmoothCameraComponent::execPitchCamera },
			{ "RotateCameraPressed", &URTSSmoothCameraComponent::execRotateCameraPressed },
			{ "RotateCameraReleased", &URTSSmoothCameraComponent::execRotateCameraReleased },
			{ "SetWorldSize", &URTSSmoothCameraComponent::execSetWorldSize },
			{ "ZoomCamera", &URTSSmoothCameraComponent::execZoomCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics
	{
		struct RTSSmoothCameraComponent_eventMoveCameraLeftRight_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventMoveCameraLeftRight_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "MoveCameraLeftRight", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventMoveCameraLeftRight_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics
	{
		struct RTSSmoothCameraComponent_eventMoveCameraLeftRightPerUnit_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventMoveCameraLeftRightPerUnit_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "MoveCameraLeftRightPerUnit", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventMoveCameraLeftRightPerUnit_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics
	{
		struct RTSSmoothCameraComponent_eventMoveCameraUpDown_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventMoveCameraUpDown_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "MoveCameraUpDown", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventMoveCameraUpDown_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics
	{
		struct RTSSmoothCameraComponent_eventMoveCameraUpDownPerUnit_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventMoveCameraUpDownPerUnit_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "MoveCameraUpDownPerUnit", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventMoveCameraUpDownPerUnit_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics
	{
		struct RTSSmoothCameraComponent_eventPanCamera_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventPanCamera_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "PanCamera", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventPanCamera_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics
	{
		struct RTSSmoothCameraComponent_eventPitchCamera_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventPitchCamera_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "PitchCamera", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventPitchCamera_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "RotateCameraPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "RotateCameraReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics
	{
		struct RTSSmoothCameraComponent_eventSetWorldSize_Parms
		{
			FVector2D Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventSetWorldSize_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "SetWorldSize", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventSetWorldSize_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics
	{
		struct RTSSmoothCameraComponent_eventZoomCamera_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSSmoothCameraComponent_eventZoomCamera_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmoothCamera" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSSmoothCameraComponent, nullptr, "ZoomCamera", nullptr, nullptr, sizeof(RTSSmoothCameraComponent_eventZoomCamera_Parms), Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URTSSmoothCameraComponent_NoRegister()
	{
		return URTSSmoothCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_URTSSmoothCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPanPerUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPanPerUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitchPerUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitchPerUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomPerUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomPerUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMaximumPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMaximumPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMinimumPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraMinimumPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveWithCursor_MetaData[];
#endif
		static void NewProp_bMoveWithCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveWithCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckBoundsWithWorldSize_MetaData[];
#endif
		static void NewProp_bCheckBoundsWithWorldSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckBoundsWithWorldSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTSSmoothCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSSmoothCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URTSSmoothCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRight, "MoveCameraLeftRight" }, // 2978297312
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraLeftRightPerUnit, "MoveCameraLeftRightPerUnit" }, // 175346321
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDown, "MoveCameraUpDown" }, // 1587191259
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_MoveCameraUpDownPerUnit, "MoveCameraUpDownPerUnit" }, // 1761960372
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_PanCamera, "PanCamera" }, // 2506486336
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_PitchCamera, "PitchCamera" }, // 1493596168
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraPressed, "RotateCameraPressed" }, // 4184143280
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_RotateCameraReleased, "RotateCameraReleased" }, // 4075321813
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_SetWorldSize, "SetWorldSize" }, // 4066303091
		{ &Z_Construct_UFunction_URTSSmoothCameraComponent_ZoomCamera, "ZoomCamera" }, // 884474575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "RTSSmoothCameraComponent.h" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "Comment", "/** This is the \"boom arm\" that the camera is attached to */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "This is the \"boom arm\" that the camera is attached to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpringArm = { "CameraSpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Rate camera moves when moving */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Rate camera moves when moving" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraSpeed), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPanPerUnit_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Rate camera moves when panning */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Rate camera moves when panning" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPanPerUnit = { "CameraPanPerUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraPanPerUnit), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPanPerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPanPerUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPitchPerUnit_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Rate camera moves when pitching */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Rate camera moves when pitching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPitchPerUnit = { "CameraPitchPerUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraPitchPerUnit), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPitchPerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPitchPerUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomSpeed_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "Comment", "/** Rate at which the camera zooms to a desired zoom distance */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Rate at which the camera zooms to a desired zoom distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomPerUnit_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "Comment", "/** Amount the desired camera distance should change per zoom action */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Amount the desired camera distance should change per zoom action" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomPerUnit = { "CameraZoomPerUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraZoomPerUnit), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomPerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomPerUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMaximumPitch_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMax", "88" },
		{ "ClampMin", "-88" },
		{ "Comment", "/** Maximum angle rotation angle */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Maximum angle rotation angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMaximumPitch = { "CameraMaximumPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraMaximumPitch), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMaximumPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMaximumPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMinimumPitch_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMax", "88" },
		{ "ClampMin", "-88" },
		{ "Comment", "/** Maximum angle rotation angle */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Maximum angle rotation angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMinimumPitch = { "CameraMinimumPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, CameraMinimumPitch), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMinimumPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMinimumPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Min zoom distance */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Min zoom distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, MinCameraDistance), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MinCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MinCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max zoom distance */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Max zoom distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTSSmoothCameraComponent, MaxCameraDistance), METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MaxCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MaxCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "Comment", "/** Check World Width/Height Size for Camera moves limits */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Check World Width/Height Size for Camera moves limits" },
	};
#endif
	void Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor_SetBit(void* Obj)
	{
		((URTSSmoothCameraComponent*)Obj)->bMoveWithCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor = { "bMoveWithCursor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSSmoothCameraComponent), &Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize_MetaData[] = {
		{ "Category", "SmoothCamera" },
		{ "Comment", "/** Check World Width/Height Size for Camera moves limits */" },
		{ "ModuleRelativePath", "Public/RTSSmoothCameraComponent.h" },
		{ "ToolTip", "Check World Width/Height Size for Camera moves limits" },
	};
#endif
	void Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize_SetBit(void* Obj)
	{
		((URTSSmoothCameraComponent*)Obj)->bCheckBoundsWithWorldSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize = { "bCheckBoundsWithWorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTSSmoothCameraComponent), &Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSSmoothCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPanPerUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraPitchPerUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraZoomPerUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMaximumPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_CameraMinimumPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MinCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_MaxCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bMoveWithCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSSmoothCameraComponent_Statics::NewProp_bCheckBoundsWithWorldSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTSSmoothCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSSmoothCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URTSSmoothCameraComponent_Statics::ClassParams = {
		&URTSSmoothCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URTSSmoothCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTSSmoothCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTSSmoothCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URTSSmoothCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URTSSmoothCameraComponent, 2248364752);
	template<> RTSSMOOTHCAMERA_API UClass* StaticClass<URTSSmoothCameraComponent>()
	{
		return URTSSmoothCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URTSSmoothCameraComponent(Z_Construct_UClass_URTSSmoothCameraComponent, &URTSSmoothCameraComponent::StaticClass, TEXT("/Script/RTSSmoothCamera"), TEXT("URTSSmoothCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTSSmoothCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
