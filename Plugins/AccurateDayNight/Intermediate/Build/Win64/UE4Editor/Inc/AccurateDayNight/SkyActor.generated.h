// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDayLightSavingsTime;
struct FMoonRules;
struct FQuat;
struct FRotator;
struct FSunPositionRules;
struct FTimespan;
struct FDateTime;
enum class EEDayNightCicle : uint8;
#ifdef ACCURATEDAYNIGHT_SkyActor_generated_h
#error "SkyActor.generated.h already included, missing '#pragma once' in SkyActor.h"
#endif
#define ACCURATEDAYNIGHT_SkyActor_generated_h

#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_SPARSE_DATA
#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDay); \
	DECLARE_FUNCTION(execOnSunrise); \
	DECLARE_FUNCTION(execOnBeforeSunrise); \
	DECLARE_FUNCTION(execOnNight); \
	DECLARE_FUNCTION(execOnSunset); \
	DECLARE_FUNCTION(execOnBeforeSunset); \
	DECLARE_FUNCTION(execIsDST); \
	DECLARE_FUNCTION(execSetMoonRules); \
	DECLARE_FUNCTION(execUpdateSky); \
	DECLARE_FUNCTION(execUpdateCompass); \
	DECLARE_FUNCTION(execUpdateMoon); \
	DECLARE_FUNCTION(execUpdateSun); \
	DECLARE_FUNCTION(execGetCurrentRotator); \
	DECLARE_FUNCTION(execGetSunriseTime); \
	DECLARE_FUNCTION(execGetSunsetTime); \
	DECLARE_FUNCTION(execOnNextDay); \
	DECLARE_FUNCTION(execOnGameStateTick); \
	DECLARE_FUNCTION(execOnDayNightCycleChange);


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDay); \
	DECLARE_FUNCTION(execOnSunrise); \
	DECLARE_FUNCTION(execOnBeforeSunrise); \
	DECLARE_FUNCTION(execOnNight); \
	DECLARE_FUNCTION(execOnSunset); \
	DECLARE_FUNCTION(execOnBeforeSunset); \
	DECLARE_FUNCTION(execIsDST); \
	DECLARE_FUNCTION(execSetMoonRules); \
	DECLARE_FUNCTION(execUpdateSky); \
	DECLARE_FUNCTION(execUpdateCompass); \
	DECLARE_FUNCTION(execUpdateMoon); \
	DECLARE_FUNCTION(execUpdateSun); \
	DECLARE_FUNCTION(execGetCurrentRotator); \
	DECLARE_FUNCTION(execGetSunriseTime); \
	DECLARE_FUNCTION(execGetSunsetTime); \
	DECLARE_FUNCTION(execOnNextDay); \
	DECLARE_FUNCTION(execOnGameStateTick); \
	DECLARE_FUNCTION(execOnDayNightCycleChange);


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkyActor(); \
	friend struct Z_Construct_UClass_ASkyActor_Statics; \
public: \
	DECLARE_CLASS(ASkyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDayNight"), NO_API) \
	DECLARE_SERIALIZER(ASkyActor)


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_INCLASS \
private: \
	static void StaticRegisterNativesASkyActor(); \
	friend struct Z_Construct_UClass_ASkyActor_Statics; \
public: \
	DECLARE_CLASS(ASkyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AccurateDayNight"), NO_API) \
	DECLARE_SERIALIZER(ASkyActor)


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyActor(ASkyActor&&); \
	NO_API ASkyActor(const ASkyActor&); \
public:


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyActor(ASkyActor&&); \
	NO_API ASkyActor(const ASkyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASkyActor)


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_36_PROLOG
#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_SPARSE_DATA \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_RPC_WRAPPERS \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_INCLASS \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_SPARSE_DATA \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCURATEDAYNIGHT_API UClass* StaticClass<class ASkyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_AccurateDayNight_Source_AccurateDayNight_Public_SkyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
