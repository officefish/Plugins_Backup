// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EESex : uint8;
enum class EEAgeGroup : uint8;
#ifdef RTSPOPULATION_RTSCharacter_generated_h
#error "RTSCharacter.generated.h already included, missing '#pragma once' in RTSCharacter.h"
#endif
#define RTSPOPULATION_RTSCharacter_generated_h

#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterProfile_Statics; \
	RTSPOPULATION_API static class UScriptStruct* StaticStruct();


template<> RTSPOPULATION_API UScriptStruct* StaticStruct<struct FCharacterProfile>();

#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_SPARSE_DATA
#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSex); \
	DECLARE_FUNCTION(execGetTotalYears); \
	DECLARE_FUNCTION(execGetFullName); \
	DECLARE_FUNCTION(execGetAgeGroop);


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSex); \
	DECLARE_FUNCTION(execGetTotalYears); \
	DECLARE_FUNCTION(execGetFullName); \
	DECLARE_FUNCTION(execGetAgeGroop);


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSCharacter(); \
	friend struct Z_Construct_UClass_ARTSCharacter_Statics; \
public: \
	DECLARE_CLASS(ARTSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSPopulation"), NO_API) \
	DECLARE_SERIALIZER(ARTSCharacter)


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_INCLASS \
private: \
	static void StaticRegisterNativesARTSCharacter(); \
	friend struct Z_Construct_UClass_ARTSCharacter_Statics; \
public: \
	DECLARE_CLASS(ARTSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSPopulation"), NO_API) \
	DECLARE_SERIALIZER(ARTSCharacter)


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCharacter(ARTSCharacter&&); \
	NO_API ARTSCharacter(const ARTSCharacter&); \
public:


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCharacter(ARTSCharacter&&); \
	NO_API ARTSCharacter(const ARTSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSCharacter)


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_36_PROLOG
#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_SPARSE_DATA \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_RPC_WRAPPERS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_INCLASS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_SPARSE_DATA \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSPOPULATION_API UClass* StaticClass<class ARTSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_RTSPopulation_Source_RTSPopulation_Public_RTSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
