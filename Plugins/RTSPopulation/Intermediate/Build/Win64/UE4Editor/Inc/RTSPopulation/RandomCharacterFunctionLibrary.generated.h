// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EESex : uint8;
#ifdef RTSPOPULATION_RandomCharacterFunctionLibrary_generated_h
#error "RandomCharacterFunctionLibrary.generated.h already included, missing '#pragma once' in RandomCharacterFunctionLibrary.h"
#endif
#define RTSPOPULATION_RandomCharacterFunctionLibrary_generated_h

#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_SPARSE_DATA
#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSex); \
	DECLARE_FUNCTION(execLastName); \
	DECLARE_FUNCTION(execFirstName);


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSex); \
	DECLARE_FUNCTION(execLastName); \
	DECLARE_FUNCTION(execFirstName);


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURandomCharacterFunctionLibrary(); \
	friend struct Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URandomCharacterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTSPopulation"), NO_API) \
	DECLARE_SERIALIZER(URandomCharacterFunctionLibrary)


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesURandomCharacterFunctionLibrary(); \
	friend struct Z_Construct_UClass_URandomCharacterFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URandomCharacterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTSPopulation"), NO_API) \
	DECLARE_SERIALIZER(URandomCharacterFunctionLibrary)


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URandomCharacterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URandomCharacterFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomCharacterFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomCharacterFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomCharacterFunctionLibrary(URandomCharacterFunctionLibrary&&); \
	NO_API URandomCharacterFunctionLibrary(const URandomCharacterFunctionLibrary&); \
public:


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URandomCharacterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomCharacterFunctionLibrary(URandomCharacterFunctionLibrary&&); \
	NO_API URandomCharacterFunctionLibrary(const URandomCharacterFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomCharacterFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomCharacterFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URandomCharacterFunctionLibrary)


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_33_PROLOG
#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_SPARSE_DATA \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_RPC_WRAPPERS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_INCLASS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_SPARSE_DATA \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSPOPULATION_API UClass* StaticClass<class URandomCharacterFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RandomCharacterFunctionLibrary_h


#define FOREACH_ENUM_EEAGEGROUP(op) \
	op(EEAgeGroup::INFANT) \
	op(EEAgeGroup::YANG_CHILD) \
	op(EEAgeGroup::CHILD) \
	op(EEAgeGroup::TEENAGER) \
	op(EEAgeGroup::YANG_ADULT) \
	op(EEAgeGroup::ADULT) \
	op(EEAgeGroup::OLD) \
	op(EEAgeGroup::VERY_OLD) 

enum class EEAgeGroup : uint8;
template<> RTSPOPULATION_API UEnum* StaticEnum<EEAgeGroup>();

#define FOREACH_ENUM_EESEX(op) \
	op(EESex::Male) \
	op(EESex::Female) 

enum class EESex : uint8;
template<> RTSPOPULATION_API UEnum* StaticEnum<EESex>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
