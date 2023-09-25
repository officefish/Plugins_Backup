// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AConstructionProxy;
#ifdef ACCURATECONSTRUCTION_ConstructionProxy_generated_h
#error "ConstructionProxy.generated.h already included, missing '#pragma once' in ConstructionProxy.h"
#endif
#define ACCURATECONSTRUCTION_ConstructionProxy_generated_h

#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_14_DELEGATE \
struct _Script_AccurateConstruction_eventConstructionCompleteDelegate_Parms \
{ \
	AConstructionProxy* Proxy; \
}; \
static inline void FConstructionCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConstructionCompleteDelegate, AConstructionProxy* Proxy) \
{ \
	_Script_AccurateConstruction_eventConstructionCompleteDelegate_Parms Parms; \
	Parms.Proxy=Proxy; \
	ConstructionCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_SPARSE_DATA
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_RPC_WRAPPERS
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConstructionProxy(); \
	friend struct Z_Construct_UClass_AConstructionProxy_Statics; \
public: \
	DECLARE_CLASS(AConstructionProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateConstruction"), NO_API) \
	DECLARE_SERIALIZER(AConstructionProxy)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAConstructionProxy(); \
	friend struct Z_Construct_UClass_AConstructionProxy_Statics; \
public: \
	DECLARE_CLASS(AConstructionProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateConstruction"), NO_API) \
	DECLARE_SERIALIZER(AConstructionProxy)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConstructionProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConstructionProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConstructionProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConstructionProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConstructionProxy(AConstructionProxy&&); \
	NO_API AConstructionProxy(const AConstructionProxy&); \
public:


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConstructionProxy(AConstructionProxy&&); \
	NO_API AConstructionProxy(const AConstructionProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConstructionProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConstructionProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConstructionProxy)


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_16_PROLOG
#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_SPARSE_DATA \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_RPC_WRAPPERS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_INCLASS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_SPARSE_DATA \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATECONSTRUCTION_API UClass* StaticClass<class AConstructionProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_AccurateConstruction_Source_AccurateConstruction_Public_ConstructionProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
