// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEDemiSeason : uint8;
struct FDateTime;
enum class EEGameSpeed : uint8;
enum class EEDayNightSchedule : uint8;
enum class EEDayNightCicle : uint8;
struct FTimespan;
#ifdef CULTUREGAMESTATE_CultureGameStateBase_generated_h
#error "CultureGameStateBase.generated.h already included, missing '#pragma once' in CultureGameStateBase.h"
#endif
#define CULTUREGAMESTATE_CultureGameStateBase_generated_h

#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDemiSeasonKeyFrames_Statics; \
	CULTUREGAMESTATE_API static class UScriptStruct* StaticStruct();


template<> CULTUREGAMESTATE_API UScriptStruct* StaticStruct<struct FDemiSeasonKeyFrames>();

#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_114_DELEGATE \
static inline void FNewDayDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewDayDelegate) \
{ \
	NewDayDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_112_DELEGATE \
struct _Script_CultureGameState_eventDemiSeasonDelegate_Parms \
{ \
	EEDemiSeason Season; \
	float Delta; \
}; \
static inline void FDemiSeasonDelegate_DelegateWrapper(const FMulticastScriptDelegate& DemiSeasonDelegate, EEDemiSeason Season, float Delta) \
{ \
	_Script_CultureGameState_eventDemiSeasonDelegate_Parms Parms; \
	Parms.Season=Season; \
	Parms.Delta=Delta; \
	DemiSeasonDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_108_DELEGATE \
struct _Script_CultureGameState_eventGameStateTickDelegate_Parms \
{ \
	FDateTime TickDateTime; \
}; \
static inline void FGameStateTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameStateTickDelegate, FDateTime TickDateTime) \
{ \
	_Script_CultureGameState_eventGameStateTickDelegate_Parms Parms; \
	Parms.TickDateTime=TickDateTime; \
	GameStateTickDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_107_DELEGATE \
struct _Script_CultureGameState_eventGameSpeedDelegate_Parms \
{ \
	EEGameSpeed EGameSpeed; \
}; \
static inline void FGameSpeedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameSpeedDelegate, EEGameSpeed EGameSpeed) \
{ \
	_Script_CultureGameState_eventGameSpeedDelegate_Parms Parms; \
	Parms.EGameSpeed=EGameSpeed; \
	GameSpeedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_106_DELEGATE \
struct _Script_CultureGameState_eventDayNightScheduleDelegate_Parms \
{ \
	EEDayNightSchedule EDayNightSchedule; \
}; \
static inline void FDayNightScheduleDelegate_DelegateWrapper(const FMulticastScriptDelegate& DayNightScheduleDelegate, EEDayNightSchedule EDayNightSchedule) \
{ \
	_Script_CultureGameState_eventDayNightScheduleDelegate_Parms Parms; \
	Parms.EDayNightSchedule=EDayNightSchedule; \
	DayNightScheduleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_105_DELEGATE \
struct _Script_CultureGameState_eventDayNightCicleDelegate_Parms \
{ \
	EEDayNightCicle EDayNightCycle; \
}; \
static inline void FDayNightCicleDelegate_DelegateWrapper(const FMulticastScriptDelegate& DayNightCicleDelegate, EEDayNightCicle EDayNightCycle) \
{ \
	_Script_CultureGameState_eventDayNightCicleDelegate_Parms Parms; \
	Parms.EDayNightCycle=EDayNightCycle; \
	DayNightCicleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_SPARSE_DATA
#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetGameStartDateTime); \
	DECLARE_FUNCTION(execGetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameSpeed); \
	DECLARE_FUNCTION(execGetGameSolarTime); \
	DECLARE_FUNCTION(execGetGameCurrentDaySeconds); \
	DECLARE_FUNCTION(execGameSpeedDown); \
	DECLARE_FUNCTION(execGameSpeedUp);


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetDayNightTransitionTime); \
	DECLARE_FUNCTION(execSetGameStartDateTime); \
	DECLARE_FUNCTION(execGetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameTimeMultiplier); \
	DECLARE_FUNCTION(execSetGameSpeed); \
	DECLARE_FUNCTION(execGetGameSolarTime); \
	DECLARE_FUNCTION(execGetGameCurrentDaySeconds); \
	DECLARE_FUNCTION(execGameSpeedDown); \
	DECLARE_FUNCTION(execGameSpeedUp);


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACultureGameStateBase(); \
	friend struct Z_Construct_UClass_ACultureGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACultureGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CultureGameState"), NO_API) \
	DECLARE_SERIALIZER(ACultureGameStateBase)


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_INCLASS \
private: \
	static void StaticRegisterNativesACultureGameStateBase(); \
	friend struct Z_Construct_UClass_ACultureGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACultureGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CultureGameState"), NO_API) \
	DECLARE_SERIALIZER(ACultureGameStateBase)


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACultureGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACultureGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACultureGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACultureGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACultureGameStateBase(ACultureGameStateBase&&); \
	NO_API ACultureGameStateBase(const ACultureGameStateBase&); \
public:


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACultureGameStateBase(ACultureGameStateBase&&); \
	NO_API ACultureGameStateBase(const ACultureGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACultureGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACultureGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACultureGameStateBase)


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_PRIVATE_PROPERTY_OFFSET
#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_116_PROLOG
#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_SPARSE_DATA \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_RPC_WRAPPERS \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_INCLASS \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_PRIVATE_PROPERTY_OFFSET \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_SPARSE_DATA \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_INCLASS_NO_PURE_DECLS \
	RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CULTUREGAMESTATE_API UClass* StaticClass<class ACultureGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTSGame_Plugins_CultureGameState_Source_CultureGameState_Public_CultureGameStateBase_h


#define FOREACH_ENUM_EEDAYNIGHTSCHEDULE(op) \
	op(EEDayNightSchedule::Night) \
	op(EEDayNightSchedule::LateNight) \
	op(EEDayNightSchedule::Morning) \
	op(EEDayNightSchedule::LateMorning) \
	op(EEDayNightSchedule::Day) \
	op(EEDayNightSchedule::LateDay) \
	op(EEDayNightSchedule::Evening) \
	op(EEDayNightSchedule::LateEvening) 

enum class EEDayNightSchedule : uint8;
template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEDayNightSchedule>();

#define FOREACH_ENUM_EEDAYNIGHTCICLE(op) \
	op(EEDayNightCicle::BeforeSunsetStart) \
	op(EEDayNightCicle::SunsetStart) \
	op(EEDayNightCicle::NightStart) \
	op(EEDayNightCicle::BeforeSunriseStart) \
	op(EEDayNightCicle::SunriseStart) \
	op(EEDayNightCicle::DayStart) 

enum class EEDayNightCicle : uint8;
template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEDayNightCicle>();

#define FOREACH_ENUM_EEGAMESPEED(op) \
	op(EEGameSpeed::Pause) \
	op(EEGameSpeed::SlowMotion) \
	op(EEGameSpeed::RealTime) \
	op(EEGameSpeed::GameTime) \
	op(EEGameSpeed::GameTimeX2) \
	op(EEGameSpeed::GameTimeX5) \
	op(EEGameSpeed::GameTimeX50) \
	op(EEGameSpeed::GameTimeX500) \
	op(EEGameSpeed::GameTimeNextDay) 

enum class EEGameSpeed : uint8;
template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEGameSpeed>();

#define FOREACH_ENUM_EEDEMISEASON(op) \
	op(EEDemiSeason::WinterToSpring) \
	op(EEDemiSeason::Spring) \
	op(EEDemiSeason::SpringToSummer) \
	op(EEDemiSeason::Summer) \
	op(EEDemiSeason::SummerToAutumn) \
	op(EEDemiSeason::Autumn) \
	op(EEDemiSeason::AutumnToWinter) \
	op(EEDemiSeason::Winter) 

enum class EEDemiSeason : uint8;
template<> CULTUREGAMESTATE_API UEnum* StaticEnum<EEDemiSeason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
