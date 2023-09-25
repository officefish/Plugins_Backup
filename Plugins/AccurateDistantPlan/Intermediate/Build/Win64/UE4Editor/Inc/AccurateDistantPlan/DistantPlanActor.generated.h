// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEDemiSeason : uint8;
#ifdef ACCURATEDISTANTPLAN_DistantPlanActor_generated_h
#error "DistantPlanActor.generated.h already included, missing '#pragma once' in DistantPlanActor.h"
#endif
#define ACCURATEDISTANTPLAN_DistantPlanActor_generated_h

#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_SPARSE_DATA
#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSeasonChange);


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSeasonChange);


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADistantPlanActor(); \
	friend struct Z_Construct_UClass_ADistantPlanActor_Statics; \
public: \
	DECLARE_CLASS(ADistantPlanActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDistantPlan"), NO_API) \
	DECLARE_SERIALIZER(ADistantPlanActor)


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_INCLASS \
private: \
	static void StaticRegisterNativesADistantPlanActor(); \
	friend struct Z_Construct_UClass_ADistantPlanActor_Statics; \
public: \
	DECLARE_CLASS(ADistantPlanActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDistantPlan"), NO_API) \
	DECLARE_SERIALIZER(ADistantPlanActor)


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADistantPlanActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADistantPlanActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADistantPlanActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADistantPlanActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADistantPlanActor(ADistantPlanActor&&); \
	NO_API ADistantPlanActor(const ADistantPlanActor&); \
public:


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADistantPlanActor(ADistantPlanActor&&); \
	NO_API ADistantPlanActor(const ADistantPlanActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADistantPlanActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADistantPlanActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADistantPlanActor)


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_45_PROLOG
#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_SPARSE_DATA \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_RPC_WRAPPERS \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_INCLASS \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_SPARSE_DATA \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATEDISTANTPLAN_API UClass* StaticClass<class ADistantPlanActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_AccurateDistantPlan_Source_AccurateDistantPlan_Public_DistantPlanActor_h


#define FOREACH_ENUM_EELANDSCAPEBACKGROUND(op) \
	op(EELandscapeBackground::AlpineMountain_A) \
	op(EELandscapeBackground::AlpineMountain_B) \
	op(EELandscapeBackground::AlpineMountain_C) \
	op(EELandscapeBackground::AlpineMountain_D) \
	op(EELandscapeBackground::AlpineMountain_E) \
	op(EELandscapeBackground::AfghanMountain_A) \
	op(EELandscapeBackground::AfghanMountain_B) \
	op(EELandscapeBackground::Canyon_A) \
	op(EELandscapeBackground::Canyon_B) \
	op(EELandscapeBackground::Canyon_C) \
	op(EELandscapeBackground::DesertDune) 

enum class EELandscapeBackground : uint8;
template<> ACCURATEDISTANTPLAN_API UEnum* StaticEnum<EELandscapeBackground>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
