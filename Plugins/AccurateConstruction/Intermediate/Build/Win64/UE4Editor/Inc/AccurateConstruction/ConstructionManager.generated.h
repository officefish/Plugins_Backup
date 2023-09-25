// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstructionQueue;
class ABuildingMaster;
struct FConstructionRules;
#ifdef ACCURATECONSTRUCTION_ConstructionManager_generated_h
#error "ConstructionManager.generated.h already included, missing '#pragma once' in ConstructionManager.h"
#endif
#define ACCURATECONSTRUCTION_ConstructionManager_generated_h

#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstructionQueue_Statics; \
	ACCURATECONSTRUCTION_API static class UScriptStruct* StaticStruct();


template<> ACCURATECONSTRUCTION_API UScriptStruct* StaticStruct<struct FConstructionQueue>();

#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstructionRules_Statics; \
	ACCURATECONSTRUCTION_API static class UScriptStruct* StaticStruct();


template<> ACCURATECONSTRUCTION_API UScriptStruct* StaticStruct<struct FConstructionRules>();

#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_77_DELEGATE \
struct _Script_AccurateConstruction_eventConstuctionCompleteDelegate_Parms \
{ \
	FConstructionQueue Queue; \
}; \
static inline void FConstuctionCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConstuctionCompleteDelegate, FConstructionQueue Queue) \
{ \
	_Script_AccurateConstruction_eventConstuctionCompleteDelegate_Parms Parms; \
	Parms.Queue=Queue; \
	ConstuctionCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_SPARSE_DATA
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConstructionComplete); \
	DECLARE_FUNCTION(execGetBuildingMasterClass); \
	DECLARE_FUNCTION(execFinishConstruction); \
	DECLARE_FUNCTION(execQueueConstruction);


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConstructionComplete); \
	DECLARE_FUNCTION(execGetBuildingMasterClass); \
	DECLARE_FUNCTION(execFinishConstruction); \
	DECLARE_FUNCTION(execQueueConstruction);


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConstructionManager(); \
	friend struct Z_Construct_UClass_AConstructionManager_Statics; \
public: \
	DECLARE_CLASS(AConstructionManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateConstruction"), NO_API) \
	DECLARE_SERIALIZER(AConstructionManager)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_INCLASS \
private: \
	static void StaticRegisterNativesAConstructionManager(); \
	friend struct Z_Construct_UClass_AConstructionManager_Statics; \
public: \
	DECLARE_CLASS(AConstructionManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateConstruction"), NO_API) \
	DECLARE_SERIALIZER(AConstructionManager)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConstructionManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConstructionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConstructionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConstructionManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConstructionManager(AConstructionManager&&); \
	NO_API AConstructionManager(const AConstructionManager&); \
public:


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConstructionManager(AConstructionManager&&); \
	NO_API AConstructionManager(const AConstructionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConstructionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConstructionManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConstructionManager)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_79_PROLOG
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_SPARSE_DATA \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_RPC_WRAPPERS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_INCLASS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_SPARSE_DATA \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATECONSTRUCTION_API UClass* StaticClass<class AConstructionManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionManager_h


#define FOREACH_ENUM_EEBUILDINGCATEGORY(op) \
	op(EEBuildingCategory::Residential) \
	op(EEBuildingCategory::Industrial) \
	op(EEBuildingCategory::Commercial) \
	op(EEBuildingCategory::Scientific) \
	op(EEBuildingCategory::Military) \
	op(EEBuildingCategory::Religious) \
	op(EEBuildingCategory::Administrative) 

enum class EEBuildingCategory : uint8;
template<> ACCURATECONSTRUCTION_API UEnum* StaticEnum<EEBuildingCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
