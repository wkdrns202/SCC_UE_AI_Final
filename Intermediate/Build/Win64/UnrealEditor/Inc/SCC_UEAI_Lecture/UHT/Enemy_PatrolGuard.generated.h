// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy_PatrolGuard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef SCC_UEAI_LECTURE_Enemy_PatrolGuard_generated_h
#error "Enemy_PatrolGuard.generated.h already included, missing '#pragma once' in Enemy_PatrolGuard.h"
#endif
#define SCC_UEAI_LECTURE_Enemy_PatrolGuard_generated_h

#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execStartMoving); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execFindTargetPoints);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_PatrolGuard(); \
	friend struct Z_Construct_UClass_AEnemy_PatrolGuard_Statics; \
public: \
	DECLARE_CLASS(AEnemy_PatrolGuard, AEnemy_BaseGuard, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_PatrolGuard)


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_PatrolGuard(AEnemy_PatrolGuard&&); \
	AEnemy_PatrolGuard(const AEnemy_PatrolGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_PatrolGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_PatrolGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_PatrolGuard) \
	NO_API virtual ~AEnemy_PatrolGuard();


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_10_PROLOG
#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AEnemy_PatrolGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PatrolGuard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
