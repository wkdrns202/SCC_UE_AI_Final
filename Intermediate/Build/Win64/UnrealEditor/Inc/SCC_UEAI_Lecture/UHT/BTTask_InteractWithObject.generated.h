// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTTask_InteractWithObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SCC_UEAI_LECTURE_BTTask_InteractWithObject_generated_h
#error "BTTask_InteractWithObject.generated.h already included, missing '#pragma once' in BTTask_InteractWithObject.h"
#endif
#define SCC_UEAI_LECTURE_BTTask_InteractWithObject_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Interactor) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_CALLBACK_WRAPPERS
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCC_UEAI_LECTURE_API UInteractiveObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveObject(UInteractiveObject&&); \
	UInteractiveObject(const UInteractiveObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCC_UEAI_LECTURE_API, UInteractiveObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveObject) \
	SCC_UEAI_LECTURE_API virtual ~UInteractiveObject();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractiveObject(); \
	friend struct Z_Construct_UClass_UInteractiveObject_Statics; \
public: \
	DECLARE_CLASS(UInteractiveObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), SCC_UEAI_LECTURE_API) \
	DECLARE_SERIALIZER(UInteractiveObject)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractiveObject() {} \
public: \
	typedef UInteractiveObject UClassType; \
	typedef IInteractiveObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_10_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_CALLBACK_WRAPPERS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class UInteractiveObject>();

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_InteractWithObject(); \
	friend struct Z_Construct_UClass_UBTTask_InteractWithObject_Statics; \
public: \
	DECLARE_CLASS(UBTTask_InteractWithObject, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_InteractWithObject)


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_InteractWithObject(UBTTask_InteractWithObject&&); \
	UBTTask_InteractWithObject(const UBTTask_InteractWithObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_InteractWithObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_InteractWithObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTTask_InteractWithObject) \
	NO_API virtual ~UBTTask_InteractWithObject();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_27_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_30_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class UBTTask_InteractWithObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
