// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstructionRules;
class ABuildingMaster;
#ifdef ACCURATECONSTRUCTION_GhostBuilding_generated_h
#error "GhostBuilding.generated.h already included, missing '#pragma once' in GhostBuilding.h"
#endif
#define ACCURATECONSTRUCTION_GhostBuilding_generated_h

#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_SPARSE_DATA
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSlopeCheck); \
	DECLARE_FUNCTION(execTickColor); \
	DECLARE_FUNCTION(execIsOverlappingActors); \
	DECLARE_FUNCTION(execGetConstructionRules); \
	DECLARE_FUNCTION(execKillGhost); \
	DECLARE_FUNCTION(execSpawnGhost);


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSlopeCheck); \
	DECLARE_FUNCTION(execTickColor); \
	DECLARE_FUNCTION(execIsOverlappingActors); \
	DECLARE_FUNCTION(execGetConstructionRules); \
	DECLARE_FUNCTION(execKillGhost); \
	DECLARE_FUNCTION(execSpawnGhost);


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostBuilding(); \
	friend struct Z_Construct_UClass_AGhostBuilding_Statics; \
public: \
	DECLARE_CLASS(AGhostBuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateConstruction"), NO_API) \
	DECLARE_SERIALIZER(AGhostBuilding)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAGhostBuilding(); \
	friend struct Z_Construct_UClass_AGhostBuilding_Statics; \
public: \
	DECLARE_CLASS(AGhostBuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateConstruction"), NO_API) \
	DECLARE_SERIALIZER(AGhostBuilding)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGhostBuilding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGhostBuilding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostBuilding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostBuilding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostBuilding(AGhostBuilding&&); \
	NO_API AGhostBuilding(const AGhostBuilding&); \
public:


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostBuilding(AGhostBuilding&&); \
	NO_API AGhostBuilding(const AGhostBuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostBuilding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostBuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostBuilding)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_26_PROLOG
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_SPARSE_DATA \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_RPC_WRAPPERS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_INCLASS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_SPARSE_DATA \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATECONSTRUCTION_API UClass* StaticClass<class AGhostBuilding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_GhostBuilding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
