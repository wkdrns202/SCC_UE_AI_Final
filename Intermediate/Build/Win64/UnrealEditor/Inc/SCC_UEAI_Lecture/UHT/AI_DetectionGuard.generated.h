// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI_DetectionGuard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
struct FAIStimulus;
#ifdef SCC_UEAI_LECTURE_AI_DetectionGuard_generated_h
#error "AI_DetectionGuard.generated.h already included, missing '#pragma once' in AI_DetectionGuard.h"
#endif
#define SCC_UEAI_LECTURE_AI_DetectionGuard_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSpeedByAlertLevel); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnHearNoise); \
	DECLARE_FUNCTION(execOnSeePlayer); \
	DECLARE_FUNCTION(execUpdateBlackboard); \
	DECLARE_FUNCTION(execDecrementDetectionCount); \
	DECLARE_FUNCTION(execIncrementDetectionCount); \
	DECLARE_FUNCTION(execUpdateAlertLevel); \
	DECLARE_FUNCTION(execStopChasing);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_DetectionGuard(); \
	friend struct Z_Construct_UClass_AAI_DetectionGuard_Statics; \
public: \
	DECLARE_CLASS(AAI_DetectionGuard, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AAI_DetectionGuard)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAI_DetectionGuard(AAI_DetectionGuard&&); \
	AAI_DetectionGuard(const AAI_DetectionGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_DetectionGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_DetectionGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_DetectionGuard) \
	NO_API virtual ~AAI_DetectionGuard();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_18_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AAI_DetectionGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h


#define FOREACH_ENUM_EGUARDALERTLEVEL(op) \
	op(EGuardAlertLevel::Idle) \
	op(EGuardAlertLevel::Suspicious) \
	op(EGuardAlertLevel::Chasing) 

enum class EGuardAlertLevel : uint8;
template<> struct TIsUEnumClass<EGuardAlertLevel> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EGuardAlertLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
