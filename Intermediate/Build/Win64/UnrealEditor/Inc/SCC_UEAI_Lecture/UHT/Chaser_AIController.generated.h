// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaser_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAIState : uint8;
struct FAIStimulus;
#ifdef SCC_UEAI_LECTURE_Chaser_AIController_generated_h
#error "Chaser_AIController.generated.h already included, missing '#pragma once' in Chaser_AIController.h"
#endif
#define SCC_UEAI_LECTURE_Chaser_AIController_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execUpdateAIState); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execStopChasing); \
	DECLARE_FUNCTION(execStartChasing);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaser_AIController(); \
	friend struct Z_Construct_UClass_AChaser_AIController_Statics; \
public: \
	DECLARE_CLASS(AChaser_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AChaser_AIController)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaser_AIController(AChaser_AIController&&); \
	AChaser_AIController(const AChaser_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChaser_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaser_AIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChaser_AIController) \
	NO_API virtual ~AChaser_AIController();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_20_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AChaser_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Chasing) 

enum class EAIState : uint8;
template<> struct TIsUEnumClass<EAIState> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
