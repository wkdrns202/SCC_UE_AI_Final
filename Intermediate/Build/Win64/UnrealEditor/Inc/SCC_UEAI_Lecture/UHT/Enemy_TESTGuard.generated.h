// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy_TESTGuard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef SCC_UEAI_LECTURE_Enemy_TESTGuard_generated_h
#error "Enemy_TESTGuard.generated.h already included, missing '#pragma once' in Enemy_TESTGuard.h"
#endif
#define SCC_UEAI_LECTURE_Enemy_TESTGuard_generated_h

#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execStartMoving); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execFindTargetPoints);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_TESTGuard(); \
	friend struct Z_Construct_UClass_AEnemy_TESTGuard_Statics; \
public: \
	DECLARE_CLASS(AEnemy_TESTGuard, AEnemy_BaseGuard, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_TESTGuard)


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_TESTGuard(AEnemy_TESTGuard&&); \
	AEnemy_TESTGuard(const AEnemy_TESTGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_TESTGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_TESTGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_TESTGuard) \
	NO_API virtual ~AEnemy_TESTGuard();


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_11_PROLOG
#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_INCLASS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AEnemy_TESTGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
