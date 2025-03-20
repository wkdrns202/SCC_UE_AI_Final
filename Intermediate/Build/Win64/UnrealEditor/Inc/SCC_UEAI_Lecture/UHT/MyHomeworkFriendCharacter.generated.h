// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyHomeworkFriendCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyHomeworkFriendCharacter;
enum class EMoodState : uint8;
struct FAIRequestID;
#ifdef SCC_UEAI_LECTURE_MyHomeworkFriendCharacter_generated_h
#error "MyHomeworkFriendCharacter.generated.h already included, missing '#pragma once' in MyHomeworkFriendCharacter.h"
#endif
#define SCC_UEAI_LECTURE_MyHomeworkFriendCharacter_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execOnSeeOtherNPC); \
	DECLARE_FUNCTION(execShouldPlayCombatAnimation); \
	DECLARE_FUNCTION(execSetMood);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHomeworkFriendCharacter(); \
	friend struct Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyHomeworkFriendCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AMyHomeworkFriendCharacter)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyHomeworkFriendCharacter(AMyHomeworkFriendCharacter&&); \
	AMyHomeworkFriendCharacter(const AMyHomeworkFriendCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHomeworkFriendCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHomeworkFriendCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyHomeworkFriendCharacter) \
	NO_API virtual ~AMyHomeworkFriendCharacter();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_20_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AMyHomeworkFriendCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h


#define FOREACH_ENUM_EMOODSTATE(op) \
	op(EMoodState::Neutral) \
	op(EMoodState::Happy) \
	op(EMoodState::Curious) \
	op(EMoodState::Sad) \
	op(EMoodState::Scared) \
	op(EMoodState::Angry) 

enum class EMoodState : uint8;
template<> struct TIsUEnumClass<EMoodState> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EMoodState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
