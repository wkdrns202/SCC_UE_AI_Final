// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SCC_UEAI_LectureGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
#ifdef SCC_UEAI_LECTURE_SCC_UEAI_LectureGameMode_generated_h
#error "SCC_UEAI_LectureGameMode.generated.h already included, missing '#pragma once' in SCC_UEAI_LectureGameMode.h"
#endif
#define SCC_UEAI_LECTURE_SCC_UEAI_LectureGameMode_generated_h

#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_11_DELEGATE \
SCC_UEAI_LECTURE_API void FOnPlayerCapturedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerCapturedSignature, APawn* CapturedPlayer, AActor* Captor);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_12_DELEGATE \
SCC_UEAI_LECTURE_API void FOnPlayerDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDetectedSignature, APawn* DetectedPlayer, AActor* Detector);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_13_DELEGATE \
SCC_UEAI_LECTURE_API void FOnAlertLevelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAlertLevelChangedSignature, AActor* Guard, uint8 NewAlertLevel);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_14_DELEGATE \
SCC_UEAI_LECTURE_API void FOnCoinCollectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCoinCollectedSignature, int32 FloorNumber);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_15_DELEGATE \
SCC_UEAI_LECTURE_API void FOnFloorCoinCollectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnFloorCoinCollectedSignature, int32 FloorNumber);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_16_DELEGATE \
SCC_UEAI_LECTURE_API void FOnTimeUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTimeUpdatedSignature, float RemainingTime);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_17_DELEGATE \
SCC_UEAI_LECTURE_API void FOnGameOverSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverSignature);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_18_DELEGATE \
SCC_UEAI_LECTURE_API void FOnGameWinSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGameWinSignature);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execRemoveCurrentWidget); \
	DECLARE_FUNCTION(execShowGameOverWidget); \
	DECLARE_FUNCTION(execShowGameStartWidget); \
	DECLARE_FUNCTION(execNotifyFloorChange); \
	DECLARE_FUNCTION(execTriggerGameWin); \
	DECLARE_FUNCTION(execTriggerGameOver); \
	DECLARE_FUNCTION(execCheckGameOverCondition); \
	DECLARE_FUNCTION(execCheckWinCondition); \
	DECLARE_FUNCTION(execCollectCoin);


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCC_UEAI_LectureGameMode(); \
	friend struct Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics; \
public: \
	DECLARE_CLASS(ASCC_UEAI_LectureGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), SCC_UEAI_LECTURE_API) \
	DECLARE_SERIALIZER(ASCC_UEAI_LectureGameMode) \
	virtual UObject* _getUObject() const override { return const_cast<ASCC_UEAI_LectureGameMode*>(this); }


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASCC_UEAI_LectureGameMode(ASCC_UEAI_LectureGameMode&&); \
	ASCC_UEAI_LectureGameMode(const ASCC_UEAI_LectureGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCC_UEAI_LECTURE_API, ASCC_UEAI_LectureGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCC_UEAI_LectureGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCC_UEAI_LectureGameMode) \
	SCC_UEAI_LECTURE_API virtual ~ASCC_UEAI_LectureGameMode();


#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_20_PROLOG
#define FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class ASCC_UEAI_LectureGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
