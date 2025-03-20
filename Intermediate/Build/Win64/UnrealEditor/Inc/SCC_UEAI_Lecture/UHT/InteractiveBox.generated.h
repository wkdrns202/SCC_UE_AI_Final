// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SCC_UEAI_LECTURE_InteractiveBox_generated_h
#error "InteractiveBox.generated.h already included, missing '#pragma once' in InteractiveBox.h"
#endif
#define SCC_UEAI_LECTURE_InteractiveBox_generated_h

#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Interactor); \
	DECLARE_FUNCTION(execInteract);


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_CALLBACK_WRAPPERS
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveBox(); \
	friend struct Z_Construct_UClass_AInteractiveBox_Statics; \
public: \
	DECLARE_CLASS(AInteractiveBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SCC_UEAI_Lecture"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveBox) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractiveBox*>(this); }


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractiveBox(AInteractiveBox&&); \
	AInteractiveBox(const AInteractiveBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractiveBox) \
	NO_API virtual ~AInteractiveBox();


#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_8_PROLOG
#define FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_CALLBACK_WRAPPERS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_INCLASS_NO_PURE_DECLS \
	FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCC_UEAI_LECTURE_API UClass* StaticClass<class AInteractiveBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
