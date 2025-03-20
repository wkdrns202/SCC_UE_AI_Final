// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RVO_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCC_UEAI_LECTURE_RVO_Character_generated_h
#error "RVO_Character.generated.h already included, missing '#pragma once' in RVO_Character.h"
#endif
#define SCC_UEAI_LECTURE_RVO_Character_generated_h

#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRVOAvoidanceEnabled); \
	DECLARE_FUNCTION(execMoveToTarget);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARVO_Character(); \
	friend struct Z_Construct_UClass_ARVO_Character_Statics; \
public: \
	DECLARE_CLASS(ARVO_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(ARVO_Character)


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARVO_Character(ARVO_Character&&); \
	ARVO_Character(const ARVO_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARVO_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARVO_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARVO_Character) \
	NO_API virtual ~ARVO_Character();


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_6_PROLOG
#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_INCLASS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class ARVO_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
