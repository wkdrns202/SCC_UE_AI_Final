// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyFriendCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef SCC_UEAI_LECTURE_MyFriendCharacter_generated_h
#error "MyFriendCharacter.generated.h already included, missing '#pragma once' in MyFriendCharacter.h"
#endif
#define SCC_UEAI_LECTURE_MyFriendCharacter_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execFindTargetPoints); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execStartMoving);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFriendCharacter(); \
	friend struct Z_Construct_UClass_AMyFriendCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFriendCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AMyFriendCharacter)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyFriendCharacter(AMyFriendCharacter&&); \
	AMyFriendCharacter(const AMyFriendCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFriendCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFriendCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFriendCharacter) \
	NO_API virtual ~AMyFriendCharacter();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_11_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AMyFriendCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
