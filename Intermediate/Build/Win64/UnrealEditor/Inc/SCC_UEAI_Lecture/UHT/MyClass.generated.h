// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyClass.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCC_UEAI_LECTURE_MyClass_generated_h
#error "MyClass.generated.h already included, missing '#pragma once' in MyClass.h"
#endif
#define SCC_UEAI_LECTURE_MyClass_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyClass_h


#define FOREACH_ENUM_ESEARCHSTATEINTERNAL_TEST(op) \
	op(ESearchStateInternal_Test::Idle) \
	op(ESearchStateInternal_Test::Investigating) \
	op(ESearchStateInternal_Test::Chasing) \
	op(ESearchStateInternal_Test::Searching) 

enum class ESearchStateInternal_Test : uint8;
template<> struct TIsUEnumClass<ESearchStateInternal_Test> { enum { Value = true }; };
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<ESearchStateInternal_Test>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
