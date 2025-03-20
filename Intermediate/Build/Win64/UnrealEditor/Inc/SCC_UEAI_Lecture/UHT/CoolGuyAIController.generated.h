// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoolGuyAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef SCC_UEAI_LECTURE_CoolGuyAIController_generated_h
#error "CoolGuyAIController.generated.h already included, missing '#pragma once' in CoolGuyAIController.h"
#endif
#define SCC_UEAI_LECTURE_CoolGuyAIController_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execStartSearchingLastLocation); \
	DECLARE_FUNCTION(execStopChasingPlayer); \
	DECLARE_FUNCTION(execStartChasingPlayer);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoolGuyAIController(); \
	friend struct Z_Construct_UClass_ACoolGuyAIController_Statics; \
public: \
	DECLARE_CLASS(ACoolGuyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(ACoolGuyAIController)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoolGuyAIController(ACoolGuyAIController&&); \
	ACoolGuyAIController(const ACoolGuyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoolGuyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoolGuyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoolGuyAIController) \
	NO_API virtual ~ACoolGuyAIController();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_22_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class ACoolGuyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h


#define FOREACH_ENUM_ESEARCHSTATEINTERNAL(op) \
	op(ESearchStateInternal::Idle) \
	op(ESearchStateInternal::Suspicious) \
	op(ESearchStateInternal::Chasing) 

enum class ESearchStateInternal : uint8;
template<> struct TIsUEnumClass<ESearchStateInternal> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<ESearchStateInternal>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
