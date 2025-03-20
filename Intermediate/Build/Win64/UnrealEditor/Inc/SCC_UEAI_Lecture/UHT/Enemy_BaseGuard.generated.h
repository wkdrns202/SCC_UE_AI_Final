// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy_BaseGuard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
enum class EAlertLevel : uint8;
struct FAIStimulus;
#ifdef SCC_UEAI_LECTURE_Enemy_BaseGuard_generated_h
#error "Enemy_BaseGuard.generated.h already included, missing '#pragma once' in Enemy_BaseGuard.h"
#endif
#define SCC_UEAI_LECTURE_Enemy_BaseGuard_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execAlertOtherGuards); \
	DECLARE_FUNCTION(execCapturePlayer); \
	DECLARE_FUNCTION(execPatrol); \
	DECLARE_FUNCTION(execInvestigateLastKnownLocation); \
	DECLARE_FUNCTION(execPursuePlayer); \
	DECLARE_FUNCTION(execSetAlertLevel); \
	DECLARE_FUNCTION(execOnSeePlayer); \
	DECLARE_FUNCTION(execOnHearNoise); \
	DECLARE_FUNCTION(execOnPlayerDetected);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_BaseGuard(); \
	friend struct Z_Construct_UClass_AEnemy_BaseGuard_Statics; \
public: \
	DECLARE_CLASS(AEnemy_BaseGuard, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_BaseGuard) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy_BaseGuard*>(this); }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_BaseGuard(AEnemy_BaseGuard&&); \
	AEnemy_BaseGuard(const AEnemy_BaseGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_BaseGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_BaseGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_BaseGuard) \
	NO_API virtual ~AEnemy_BaseGuard();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_29_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AEnemy_BaseGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h


#define FOREACH_ENUM_EALERTLEVEL(op) \
	op(EAlertLevel::Normal) \
	op(EAlertLevel::Suspicious) \
	op(EAlertLevel::Alert) \
	op(EAlertLevel::Pursuit) 

enum class EAlertLevel : uint8;
template<> struct TIsUEnumClass<EAlertLevel> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EAlertLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
