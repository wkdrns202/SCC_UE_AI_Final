// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SCC_UEAI_LectureCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef SCC_UEAI_LECTURE_SCC_UEAI_LectureCharacter_generated_h
#error "SCC_UEAI_LectureCharacter.generated.h already included, missing '#pragma once' in SCC_UEAI_LectureCharacter.h"
#endif
#define SCC_UEAI_LECTURE_SCC_UEAI_LectureCharacter_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillState_Statics; \
	SCC_UEAI_LECTURE_API static class UScriptStruct* StaticStruct();


template<> SCC_UEAI_LECTURE_API UScriptStruct* StaticStruct<struct FSkillState>();

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopAIDetection); \
	DECLARE_FUNCTION(execPlayerCaptured); \
	DECLARE_FUNCTION(execTryPersuade); \
	DECLARE_FUNCTION(execActivateStealth); \
	DECLARE_FUNCTION(execActivateSilentMovement); \
	DECLARE_FUNCTION(execFindTargetPoints); \
	DECLARE_FUNCTION(execStartMoving); \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execMoveToTarget);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCC_UEAILectureCharacter(); \
	friend struct Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCC_UEAILectureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(ASCC_UEAILectureCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASCC_UEAILectureCharacter*>(this); }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASCC_UEAILectureCharacter(ASCC_UEAILectureCharacter&&); \
	ASCC_UEAILectureCharacter(const ASCC_UEAILectureCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCC_UEAILectureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCC_UEAILectureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCC_UEAILectureCharacter) \
	NO_API virtual ~ASCC_UEAILectureCharacter();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_41_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class ASCC_UEAILectureCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
