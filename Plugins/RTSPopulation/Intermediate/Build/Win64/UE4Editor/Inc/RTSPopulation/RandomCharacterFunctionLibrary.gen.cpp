// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSPopulation/Public/RandomCharacterFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomCharacterFunctionLibrary() {}
// Cross Module References
	RTSPOPULATION_API UEnum* Z_Construct_UEnum_RTSPopulation_EEAgeGroup();
	UPackage* Z_Construct_UPackage__Script_RTSPopulation();
	RTSPOPULATION_API UEnum* Z_Construct_UEnum_RTSPopulation_EESex();
	RTSPOPULATION_API UClass* Z_Construct_UClass_URandomCharacterFunctionLibrary_NoRegister();
	RTSPOPULATION_API UClass* Z_Construct_UClass_URandomCharacterFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EEAgeGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTSPopulation_EEAgeGroup, Z_Construct_UPackage__Script_RTSPopulation(), TEXT("EEAgeGroup"));
		}
		return Singleton;
	}
	template<> RTSPOPULATION_API UEnum* StaticEnum<EEAgeGroup>()
	{
		return EEAgeGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEAgeGroup(EEAgeGroup_StaticEnum, TEXT("/Script/RTSPopulation"), TEXT("EEAgeGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTSPopulation_EEAgeGroup_Hash() { return 3921558616U; }
	UEnum* Z_Construct_UEnum_RTSPopulation_EEAgeGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTSPopulation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEAgeGroup"), 0, Get_Z_Construct_UEnum_RTSPopulation_EEAgeGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEAgeGroup::INFANT", (int64)EEAgeGroup::INFANT },
				{ "EEAgeGroup::YANG_CHILD", (int64)EEAgeGroup::YANG_CHILD },
				{ "EEAgeGroup::CHILD", (int64)EEAgeGroup::CHILD },
				{ "EEAgeGroup::TEENAGER", (int64)EEAgeGroup::TEENAGER },
				{ "EEAgeGroup::YANG_ADULT", (int64)EEAgeGroup::YANG_ADULT },
				{ "EEAgeGroup::ADULT", (int64)EEAgeGroup::ADULT },
				{ "EEAgeGroup::OLD", (int64)EEAgeGroup::OLD },
				{ "EEAgeGroup::VERY_OLD", (int64)EEAgeGroup::VERY_OLD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADULT.DisplayName", "MiddleAdult" },
				{ "ADULT.Name", "EEAgeGroup::ADULT" },
				{ "BlueprintType", "true" },
				{ "CHILD.DisplayName", "Child" },
				{ "CHILD.Name", "EEAgeGroup::CHILD" },
				{ "INFANT.DisplayName", "Infant" },
				{ "INFANT.Name", "EEAgeGroup::INFANT" },
				{ "ModuleRelativePath", "Public/RandomCharacterFunctionLibrary.h" },
				{ "OLD.DisplayName", "Old" },
				{ "OLD.Name", "EEAgeGroup::OLD" },
				{ "TEENAGER.DisplayName", "Teenager" },
				{ "TEENAGER.Name", "EEAgeGroup::TEENAGER" },
				{ "VERY_OLD.DisplayName", "VeryOld" },
				{ "VERY_OLD.Name", "EEAgeGroup::VERY_OLD" },
				{ "YANG_ADULT.DisplayName", "YangAdult" },
				{ "YANG_ADULT.Name", "EEAgeGroup::YANG_ADULT" },
				{ "YANG_CHILD.DisplayName", "SmallChild" },
				{ "YANG_CHILD.Name", "EEAgeGroup::YANG_CHILD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTSPopulation,
				nullptr,
				"EEAgeGroup",
				"EEAgeGroup",
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
	static UEnum* EESex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTSPopulation_EESex, Z_Construct_UPackage__Script_RTSPopulation(), TEXT("EESex"));
		}
		return Singleton;
	}
	template<> RTSPOPULATION_API UEnum* StaticEnum<EESex>()
	{
		return EESex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EESex(EESex_StaticEnum, TEXT("/Script/RTSPopulation"), TEXT("EESex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTSPopulation_EESex_Hash() { return 508533684U; }
	UEnum* Z_Construct_UEnum_RTSPopulation_EESex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTSPopulation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EESex"), 0, Get_Z_Construct_UEnum_RTSPopulation_EESex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EESex::Male", (int64)EESex::Male },
				{ "EESex::Female", (int64)EESex::Female },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* RTS Character Enums */" },
				{ "Female.DisplayName", "Female" },
				{ "Female.Name", "EESex::Female" },
				{ "Male.DisplayName", "Male" },
				{ "Male.Name", "EESex::Male" },
				{ "ModuleRelativePath", "Public/RandomCharacterFunctionLibrary.h" },
				{ "ToolTip", "RTS Character Enums" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTSPopulation,
				nullptr,
				"EESex",
				"EESex",
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
	DEFINE_FUNCTION(URandomCharacterFunctionLibrary::execSex)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaleProbability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EESex*)Z_Param__Result=URandomCharacterFunctionLibrary::Sex(Z_Param_MaleProbability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomCharacterFunctionLibrary::execLastName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URandomCharacterFunctionLibrary::LastName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomCharacterFunctionLibrary::execFirstName)
	{
		P_GET_ENUM(EESex,Z_Param_ESex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URandomCharacterFunctionLibrary::FirstName(EESex(Z_Param_ESex));
		P_NATIVE_END;
	}
	void URandomCharacterFunctionLibrary::StaticRegisterNativesURandomCharacterFunctionLibrary()
	{
		UClass* Class = URandomCharacterFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirstName", &URandomCharacterFunctionLibrary::execFirstName },
			{ "LastName", &URandomCharacterFunctionLibrary::execLastName },
			{ "Sex", &URandomCharacterFunctionLibrary::execSex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics
	{
		struct RandomCharacterFunctionLibrary_eventFirstName_Parms
		{
			EESex ESex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ESex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ESex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::NewProp_ESex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::NewProp_ESex = { "ESex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomCharacterFunctionLibrary_eventFirstName_Parms, ESex), Z_Construct_UEnum_RTSPopulation_EESex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomCharacterFunctionLibrary_eventFirstName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::NewProp_ESex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::NewProp_ESex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "Comment", "/* Functions */" },
		{ "ModuleRelativePath", "Public/RandomCharacterFunctionLibrary.h" },
		{ "ToolTip", "Functions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomCharacterFunctionLibrary, nullptr, "FirstName", nullptr, nullptr, sizeof(RandomCharacterFunctionLibrary_eventFirstName_Parms), Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics
	{
		struct RandomCharacterFunctionLibrary_eventLastName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomCharacterFunctionLibrary_eventLastName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "ModuleRelativePath", "Public/RandomCharacterFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomCharacterFunctionLibrary, nullptr, "LastName", nullptr, nullptr, sizeof(RandomCharacterFunctionLibrary_eventLastName_Parms), Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics
	{
		struct RandomCharacterFunctionLibrary_eventSex_Parms
		{
			float MaleProbability;
			EESex ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaleProbability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::NewProp_MaleProbability = { "MaleProbability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomCharacterFunctionLibrary_eventSex_Parms, MaleProbability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomCharacterFunctionLibrary_eventSex_Parms, ReturnValue), Z_Construct_UEnum_RTSPopulation_EESex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::NewProp_MaleProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTSPopulation" },
		{ "CPP_Default_MaleProbability", "0.500000" },
		{ "ModuleRelativePath", "Public/RandomCharacterFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomCharacterFunctionLibrary, nullptr, "Sex", nullptr, nullptr, sizeof(RandomCharacterFunctionLibrary_eventSex_Parms), Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URandomCharacterFunctionLibrary_NoRegister()
	{
		return URandomCharacterFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSPopulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URandomCharacterFunctionLibrary_FirstName, "FirstName" }, // 289355351
		{ &Z_Construct_UFunction_URandomCharacterFunctionLibrary_LastName, "LastName" }, // 403083138
		{ &Z_Construct_UFunction_URandomCharacterFunctionLibrary_Sex, "Sex" }, // 2756239939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RandomCharacterFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RandomCharacterFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomCharacterFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::ClassParams = {
		&URandomCharacterFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomCharacterFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URandomCharacterFunctionLibrary, 2616133436);
	template<> RTSPOPULATION_API UClass* StaticClass<URandomCharacterFunctionLibrary>()
	{
		return URandomCharacterFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URandomCharacterFunctionLibrary(Z_Construct_UClass_URandomCharacterFunctionLibrary, &URandomCharacterFunctionLibrary::StaticClass, TEXT("/Script/RTSPopulation"), TEXT("URandomCharacterFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomCharacterFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
