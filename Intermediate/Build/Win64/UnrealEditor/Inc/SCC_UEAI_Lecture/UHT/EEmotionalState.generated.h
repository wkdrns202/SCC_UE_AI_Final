// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EEmotionalState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCC_UEAI_LECTURE_EEmotionalState_generated_h
#error "EEmotionalState.generated.h already included, missing '#pragma once' in EEmotionalState.h"
#endif
#define SCC_UEAI_LECTURE_EEmotionalState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_EEmotionalState_h


#define FOREACH_ENUM_EEMOTIONALSTATE(op) \
	op(EEmotionalState::Sad) \
	op(EEmotionalState::Happy) \
	op(EEmotionalState::Curious) \
	op(EEmotionalState::Neutral) \
	op(EEmotionalState::Scared) \
	op(EEmotionalState::Angry) 

enum class EEmotionalState : uint8;
template<> struct TIsUEnumClass<EEmotionalState> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EEmotionalState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
