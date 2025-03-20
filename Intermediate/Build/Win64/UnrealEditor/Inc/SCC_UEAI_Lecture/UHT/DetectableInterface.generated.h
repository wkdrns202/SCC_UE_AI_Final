// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetectableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
#ifdef SCC_UEAI_LECTURE_DetectableInterface_generated_h
#error "DetectableInterface.generated.h already included, missing '#pragma once' in DetectableInterface.h"
#endif
#define SCC_UEAI_LECTURE_DetectableInterface_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CapturedByAI_Implementation() {}; \
	virtual bool CanMakeNoise_Implementation() const { return false; }; \
	virtual bool CanBeDetected_Implementation() const { return false; }; \
	DECLARE_FUNCTION(execCapturedByAI); \
	DECLARE_FUNCTION(execCanMakeNoise); \
	DECLARE_FUNCTION(execCanBeDetected);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_CALLBACK_WRAPPERS
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCC_UEAI_LECTURE_API UDetectableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDetectableInterface(UDetectableInterface&&); \
	UDetectableInterface(const UDetectableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCC_UEAI_LECTURE_API, UDetectableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetectableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetectableInterface) \
	SCC_UEAI_LECTURE_API virtual ~UDetectableInterface();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDetectableInterface(); \
	friend struct Z_Construct_UClass_UDetectableInterface_Statics; \
public: \
	DECLARE_CLASS(UDetectableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), SCC_UEAI_LECTURE_API) \
	DECLARE_SERIALIZER(UDetectableInterface)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDetectableInterface() {} \
public: \
	typedef UDetectableInterface UClassType; \
	typedef IDetectableInterface ThisClass; \
	static bool Execute_CanBeDetected(const UObject* O); \
	static bool Execute_CanMakeNoise(const UObject* O); \
	static void Execute_CapturedByAI(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_8_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_CALLBACK_WRAPPERS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class UDetectableInterface>();

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 ReportCurrentLives_Implementation() { return 0; }; \
	virtual void ReportGetCoin_Implementation(int32 type) {}; \
	virtual void ReportAlertLevelChange_Implementation(AActor* Guard, uint8 NewAlertLevel) {}; \
	virtual void ReportPlayerDetection_Implementation(APawn* DetectedPlayer, AActor* Detector) {}; \
	virtual void ReportPlayerCapture_Implementation(APawn* CapturedPlayer, AActor* Captor) {}; \
	DECLARE_FUNCTION(execReportCurrentLives); \
	DECLARE_FUNCTION(execReportGetCoin); \
	DECLARE_FUNCTION(execReportAlertLevelChange); \
	DECLARE_FUNCTION(execReportPlayerDetection); \
	DECLARE_FUNCTION(execReportPlayerCapture);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_CALLBACK_WRAPPERS
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCC_UEAI_LECTURE_API UGameRulesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameRulesInterface(UGameRulesInterface&&); \
	UGameRulesInterface(const UGameRulesInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCC_UEAI_LECTURE_API, UGameRulesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameRulesInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameRulesInterface) \
	SCC_UEAI_LECTURE_API virtual ~UGameRulesInterface();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameRulesInterface(); \
	friend struct Z_Construct_UClass_UGameRulesInterface_Statics; \
public: \
	DECLARE_CLASS(UGameRulesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), SCC_UEAI_LECTURE_API) \
	DECLARE_SERIALIZER(UGameRulesInterface)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_GENERATED_UINTERFACE_BODY() \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameRulesInterface() {} \
public: \
	typedef UGameRulesInterface UClassType; \
	typedef IGameRulesInterface ThisClass; \
	static void Execute_ReportAlertLevelChange(UObject* O, AActor* Guard, uint8 NewAlertLevel); \
	static int32 Execute_ReportCurrentLives(UObject* O); \
	static void Execute_ReportGetCoin(UObject* O, int32 type); \
	static void Execute_ReportPlayerCapture(UObject* O, APawn* CapturedPlayer, AActor* Captor); \
	static void Execute_ReportPlayerDetection(UObject* O, APawn* DetectedPlayer, AActor* Detector); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_35_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_CALLBACK_WRAPPERS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class UGameRulesInterface>();

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Persuaded_Implementation() {}; \
	virtual void ReceiveAlert_Implementation(FVector const& Location, uint8 AlertLevel, AActor* AlertSource) {}; \
	virtual APawn* GetTargetPlayer_Implementation() const { return NULL; }; \
	virtual uint8 GetAlertLevel_Implementation() const { return 0; }; \
	virtual FVector GetLastKnownPlayerLocation_Implementation() const { return FVector(ForceInit); }; \
	DECLARE_FUNCTION(execPersuaded); \
	DECLARE_FUNCTION(execReceiveAlert); \
	DECLARE_FUNCTION(execGetTargetPlayer); \
	DECLARE_FUNCTION(execGetAlertLevel); \
	DECLARE_FUNCTION(execGetLastKnownPlayerLocation);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_CALLBACK_WRAPPERS
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCC_UEAI_LECTURE_API UGuardInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGuardInterface(UGuardInterface&&); \
	UGuardInterface(const UGuardInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCC_UEAI_LECTURE_API, UGuardInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGuardInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGuardInterface) \
	SCC_UEAI_LECTURE_API virtual ~UGuardInterface();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGuardInterface(); \
	friend struct Z_Construct_UClass_UGuardInterface_Statics; \
public: \
	DECLARE_CLASS(UGuardInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), SCC_UEAI_LECTURE_API) \
	DECLARE_SERIALIZER(UGuardInterface)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_GENERATED_UINTERFACE_BODY() \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGuardInterface() {} \
public: \
	typedef UGuardInterface UClassType; \
	typedef IGuardInterface ThisClass; \
	static uint8 Execute_GetAlertLevel(const UObject* O); \
	static FVector Execute_GetLastKnownPlayerLocation(const UObject* O); \
	static APawn* Execute_GetTargetPlayer(const UObject* O); \
	static void Execute_Persuaded(UObject* O); \
	static void Execute_ReceiveAlert(UObject* O, FVector const& Location, uint8 AlertLevel, AActor* AlertSource); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_67_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_CALLBACK_WRAPPERS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_70_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class UGuardInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
