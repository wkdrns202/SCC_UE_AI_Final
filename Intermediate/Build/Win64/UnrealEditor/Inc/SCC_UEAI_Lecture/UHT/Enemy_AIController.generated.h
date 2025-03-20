// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef SCC_UEAI_LECTURE_Enemy_AIController_generated_h
#error "Enemy_AIController.generated.h already included, missing '#pragma once' in Enemy_AIController.h"
#endif
#define SCC_UEAI_LECTURE_Enemy_AIController_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_AIController(); \
	friend struct Z_Construct_UClass_AEnemy_AIController_Statics; \
public: \
	DECLARE_CLASS(AEnemy_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_AIController)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_AIController(AEnemy_AIController&&); \
	AEnemy_AIController(const AEnemy_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_AIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_AIController) \
	NO_API virtual ~AEnemy_AIController();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_13_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AEnemy_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
