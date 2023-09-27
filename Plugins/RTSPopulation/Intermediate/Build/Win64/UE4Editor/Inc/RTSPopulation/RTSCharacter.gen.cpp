// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSPopulation/Public/RTSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCharacter() {}
// Cross Module References
	RTSPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterProfile();
	UPackage* Z_Construct_UPackage__Script_RTSPopulation();
	RTSPOPULATION_API UEnum* Z_Construct_UEnum_RTSPopulation_EESex();
	RTSPOPULATION_API UClass* Z_Construct_UClass_ARTSCharacter_NoRegister();
	RTSPOPULATION_API UClass* Z_Construct_UClass_ARTSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	RTSPOPULATION_API UEnum* Z_Construct_UEnum_RTSPopulation_EEAgeGroup();
// End Cross Module References
class UScriptStruct* FCharacterProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RTSPOPULATION_API uint32 Get_Z_Construct_UScriptStruct_FCharacterProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterProfile, Z_Construct_UPackage__Script_RTSPopulation(), TEXT("CharacterProfile"), sizeof(FCharacterProfile), Get_Z_Construct_UScriptStruct_FCharacterProfile_Hash());
	}
	return Singleton;
}
template<> RTSPOPULATION_API UScriptStruct* StaticStruct<FCharacterProfile>()
{
	return FCharacterProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterProfile(FCharacterProfile::StaticStruct, TEXT("/Script/RTSPopulation"), TEXT("CharacterProfile"), false, nullptr, nullptr);
static struct FScriptStruct_RTSPopulation_StaticRegisterNativesFCharacterProfile
{
	FScriptStruct_RTSPopulation_StaticRegisterNativesFCharacterProfile()
	{
		UScriptStruct::DeferCppStructOps<FCharacterProfile>(FName(TEXT("CharacterProfile")));
	}
} ScriptStruct_RTSPopulation_StaticRegisterNativesFCharacterProfile;
	struct Z_Construct_UScriptStruct_FCharacterProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalYears_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TotalYears;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_TotalYears_MetaData[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_TotalYears = { "TotalYears", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterProfile, TotalYears), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_TotalYears_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_TotalYears_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex_MetaData[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex = { "Sex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterProfile, Sex), Z_Construct_UEnum_RTSPopulation_EESex, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterProfile, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_FirstName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterProfile, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_LastName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_TotalYears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_Sex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterProfile_Statics::NewProp_LastName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RTSPopulation,
		nullptr,
		&NewStructOps,
		"CharacterProfile",
		sizeof(FCharacterProfile),
		alignof(FCharacterProfile),
		Z_Construct_UScriptStruct_FCharacterProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RTSPopulation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterProfile"), sizeof(FCharacterProfile), Get_Z_Construct_UScriptStruct_FCharacterProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterProfile_Hash() { return 4294244836U; }
	DEFINE_FUNCTION(ARTSCharacter::execSetSex)
	{
		P_GET_ENUM(EESex,Z_Param_Sex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSex(EESex(Z_Param_Sex));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacter::execGetTotalYears)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetTotalYears();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacter::execGetFullName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFullName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSCharacter::execGetAgeGroop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEAgeGroup*)Z_Param__Result=P_THIS->GetAgeGroop();
		P_NATIVE_END;
	}
	void ARTSCharacter::StaticRegisterNativesARTSCharacter()
	{
		UClass* Class = ARTSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAgeGroop", &ARTSCharacter::execGetAgeGroop },
			{ "GetFullName", &ARTSCharacter::execGetFullName },
			{ "GetTotalYears", &ARTSCharacter::execGetTotalYears },
			{ "SetSex", &ARTSCharacter::execSetSex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics
	{
		struct RTSCharacter_eventGetAgeGroop_Parms
		{
			EEAgeGroup ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacter_eventGetAgeGroop_Parms, ReturnValue), Z_Construct_UEnum_RTSPopulation_EEAgeGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacter, nullptr, "GetAgeGroop", nullptr, nullptr, sizeof(RTSCharacter_eventGetAgeGroop_Parms), Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacter_GetAgeGroop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSCharacter_GetAgeGroop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics
	{
		struct RTSCharacter_eventGetFullName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacter_eventGetFullName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacter, nullptr, "GetFullName", nullptr, nullptr, sizeof(RTSCharacter_eventGetFullName_Parms), Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacter_GetFullName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSCharacter_GetFullName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics
	{
		struct RTSCharacter_eventGetTotalYears_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacter_eventGetTotalYears_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacter, nullptr, "GetTotalYears", nullptr, nullptr, sizeof(RTSCharacter_eventGetTotalYears_Parms), Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacter_GetTotalYears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSCharacter_GetTotalYears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSCharacter_SetSex_Statics
	{
		struct RTSCharacter_eventSetSex_Parms
		{
			EESex Sex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::NewProp_Sex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::NewProp_Sex = { "Sex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSCharacter_eventSetSex_Parms, Sex), Z_Construct_UEnum_RTSPopulation_EESex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::NewProp_Sex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::NewProp_Sex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSCharacter, nullptr, "SetSex", nullptr, nullptr, sizeof(RTSCharacter_eventSetSex_Parms), Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSCharacter_SetSex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSCharacter_SetSex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARTSCharacter_NoRegister()
	{
		return ARTSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARTSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSPopulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSCharacter_GetAgeGroop, "GetAgeGroop" }, // 1067033574
		{ &Z_Construct_UFunction_ARTSCharacter_GetFullName, "GetFullName" }, // 837917503
		{ &Z_Construct_UFunction_ARTSCharacter_GetTotalYears, "GetTotalYears" }, // 3805615579
		{ &Z_Construct_UFunction_ARTSCharacter_SetSex, "SetSex" }, // 1816515427
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSCharacter.h" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCharacter_Statics::NewProp_Profile_MetaData[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RTSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSCharacter_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSCharacter, Profile), Z_Construct_UScriptStruct_FCharacterProfile, METADATA_PARAMS(Z_Construct_UClass_ARTSCharacter_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacter_Statics::NewProp_Profile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCharacter_Statics::NewProp_Profile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSCharacter_Statics::ClassParams = {
		&ARTSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTSCharacter, 3682879343);
	template<> RTSPOPULATION_API UClass* StaticClass<ARTSCharacter>()
	{
		return ARTSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSCharacter(Z_Construct_UClass_ARTSCharacter, &ARTSCharacter::StaticClass, TEXT("/Script/RTSPopulation"), TEXT("ARTSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
