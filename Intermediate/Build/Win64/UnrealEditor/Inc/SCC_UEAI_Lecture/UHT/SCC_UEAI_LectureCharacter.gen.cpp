// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/SCC_UEAI_LectureCharacter.h"
#include "Runtime/AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCC_UEAI_LectureCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ASCC_UEAILectureCharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ASCC_UEAILectureCharacter_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UDetectableInterface_NoRegister();
SCC_UEAI_LECTURE_API UScriptStruct* Z_Construct_UScriptStruct_FSkillState();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin ScriptStruct FSkillState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkillState;
class UScriptStruct* FSkillState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkillState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkillState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillState, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("SkillState"));
	}
	return Z_Registration_Info_UScriptStruct_SkillState.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UScriptStruct* StaticStruct<FSkillState>()
{
	return FSkillState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkillState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc chapter 4\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc chapter 4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "SkillState" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "SkillState" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "Category", "SkillState" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "SkillState" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FSkillState*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkillState), &Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillState, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillState, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillState, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillState_Statics::NewProp_ManaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	&NewStructOps,
	"SkillState",
	Z_Construct_UScriptStruct_FSkillState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillState_Statics::PropPointers),
	sizeof(FSkillState),
	alignof(FSkillState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkillState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkillState()
{
	if (!Z_Registration_Info_UScriptStruct_SkillState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkillState.InnerSingleton, Z_Construct_UScriptStruct_FSkillState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkillState.InnerSingleton;
}
// End ScriptStruct FSkillState

// Begin Class ASCC_UEAILectureCharacter Function ActivateSilentMovement
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "ActivateSilentMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execActivateSilentMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateSilentMovement();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function ActivateSilentMovement

// Begin Class ASCC_UEAILectureCharacter Function ActivateStealth
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Skills" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "ActivateStealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execActivateStealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateStealth();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function ActivateStealth

// Begin Class ASCC_UEAILectureCharacter Function FindTargetPoints
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "FindTargetPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execFindTargetPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindTargetPoints();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function FindTargetPoints

// Begin Class ASCC_UEAILectureCharacter Function MoveToTarget
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "MoveToTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execMoveToTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToTarget();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function MoveToTarget

// Begin Class ASCC_UEAILectureCharacter Function OnMoveCompleted
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics
{
	struct SCC_UEAILectureCharacter_eventOnMoveCompleted_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCC_UEAILectureCharacter_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(0, nullptr) }; // 2000238872
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCC_UEAILectureCharacter_eventOnMoveCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "OnMoveCompleted", nullptr, nullptr, Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::SCC_UEAILectureCharacter_eventOnMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::SCC_UEAILectureCharacter_eventOnMoveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execOnMoveCompleted)
{
	P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
	P_GET_PROPERTY(FByteProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function OnMoveCompleted

// Begin Class ASCC_UEAILectureCharacter Function PlayerCaptured
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "PlayerCaptured", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execPlayerCaptured)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerCaptured();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function PlayerCaptured

// Begin Class ASCC_UEAILectureCharacter Function StartMoving
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd - \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd - \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "StartMoving", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execStartMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMoving();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function StartMoving

// Begin Class ASCC_UEAILectureCharacter Function StopAIDetection
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb1\x95\xed\x84\xb0""3 \xea\xb3\xbc\xec\xa0\x9c\n// \xed\x83\x90\xec\xa7\x80 \xec\xa4\x91\xec\xa7\x80 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb1\x95\xed\x84\xb0""3 \xea\xb3\xbc\xec\xa0\x9c\n\xed\x83\x90\xec\xa7\x80 \xec\xa4\x91\xec\xa7\x80 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "StopAIDetection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execStopAIDetection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAIDetection();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function StopAIDetection

// Begin Class ASCC_UEAILectureCharacter Function TryPersuade
struct Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Skills" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAILectureCharacter, nullptr, "TryPersuade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAILectureCharacter::execTryPersuade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryPersuade();
	P_NATIVE_END;
}
// End Class ASCC_UEAILectureCharacter Function TryPersuade

// Begin Class ASCC_UEAILectureCharacter
void ASCC_UEAILectureCharacter::StaticRegisterNativesASCC_UEAILectureCharacter()
{
	UClass* Class = ASCC_UEAILectureCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateSilentMovement", &ASCC_UEAILectureCharacter::execActivateSilentMovement },
		{ "ActivateStealth", &ASCC_UEAILectureCharacter::execActivateStealth },
		{ "FindTargetPoints", &ASCC_UEAILectureCharacter::execFindTargetPoints },
		{ "MoveToTarget", &ASCC_UEAILectureCharacter::execMoveToTarget },
		{ "OnMoveCompleted", &ASCC_UEAILectureCharacter::execOnMoveCompleted },
		{ "PlayerCaptured", &ASCC_UEAILectureCharacter::execPlayerCaptured },
		{ "StartMoving", &ASCC_UEAILectureCharacter::execStartMoving },
		{ "StopAIDetection", &ASCC_UEAILectureCharacter::execStopAIDetection },
		{ "TryPersuade", &ASCC_UEAILectureCharacter::execTryPersuade },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCC_UEAILectureCharacter);
UClass* Z_Construct_UClass_ASCC_UEAILectureCharacter_NoRegister()
{
	return ASCC_UEAILectureCharacter::StaticClass();
}
struct Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCC_UEAI_LectureCharacter.h" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavInvoker_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Navigation Invoker component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Navigation Invoker component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInStealthMode_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanMakeNoise_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSucceededPersuasion_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavGenerationRadius_MetaData[] = {
		{ "Category", "Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd7\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd7\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavRemovalRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSucceeded_MetaData[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI Modifier \xef\xbf\xbd\xd7\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Modifier \xef\xbf\xbd\xd7\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target2_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseEmitterComponent_MetaData[] = {
		{ "Category", "Noise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xb9\xdd\xba\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\n// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xb9\xdd\xba\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\n\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "Category", "AI|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SilentMovementAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersuadeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenInterval_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SilentMovementSkill_MetaData[] = {
		{ "Category", "Player Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthSkill_MetaData[] = {
		{ "Category", "Player Skills" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvulnerabilitySkill_MetaData[] = {
		{ "Category", "Player Skills" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWalkSpeed_MetaData[] = {
		{ "Category", "Player Skills" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowWalkSpeed_MetaData[] = {
		{ "Category", "Player Skills" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCaptured_MetaData[] = {
		{ "Category", "AI Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInvulnerable_MetaData[] = {
		{ "Category", "AI Interaction" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTimerSet_MetaData[] = {
		{ "Category", "AI Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc5\xb8\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvulnerabilityDuration_MetaData[] = {
		{ "Category", "AI Interaction" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersuasionChance_MetaData[] = {
		{ "Category", "AI Interaction" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersuasionWindow_MetaData[] = {
		{ "Category", "AI Interaction" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureTime_MetaData[] = {
		{ "Category", "AI Interaction" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMovementNoiseLoudness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe2\xba\xbb \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavInvoker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static void NewProp_bIsInStealthMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInStealthMode;
	static void NewProp_bCanMakeNoise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMakeNoise;
	static void NewProp_bIsSucceededPersuasion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSucceededPersuasion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavGenerationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavRemovalRadius;
	static void NewProp_bIsSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSucceeded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseEmitterComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SilentMovementAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersuadeAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SilentMovementSkill;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StealthSkill;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvulnerabilitySkill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowWalkSpeed;
	static void NewProp_bIsCaptured_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCaptured;
	static void NewProp_bIsInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvulnerable;
	static void NewProp_bIsTimerSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTimerSet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvulnerabilityDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PersuasionChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PersuasionWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMovementNoiseLoudness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateSilentMovement, "ActivateSilentMovement" }, // 3556281314
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_ActivateStealth, "ActivateStealth" }, // 2188857788
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_FindTargetPoints, "FindTargetPoints" }, // 576213463
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_MoveToTarget, "MoveToTarget" }, // 4226075369
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_OnMoveCompleted, "OnMoveCompleted" }, // 2827060042
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_PlayerCaptured, "PlayerCaptured" }, // 4020438424
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_StartMoving, "StartMoving" }, // 2514289009
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_StopAIDetection, "StopAIDetection" }, // 15787154
		{ &Z_Construct_UFunction_ASCC_UEAILectureCharacter_TryPersuade, "TryPersuade" }, // 165531158
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCC_UEAILectureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NavInvoker = { "NavInvoker", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, NavInvoker), Z_Construct_UClass_UNavigationInvokerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavInvoker_MetaData), NewProp_NavInvoker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInStealthMode_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsInStealthMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInStealthMode = { "bIsInStealthMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInStealthMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInStealthMode_MetaData), NewProp_bIsInStealthMode_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bCanMakeNoise_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bCanMakeNoise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bCanMakeNoise = { "bCanMakeNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bCanMakeNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanMakeNoise_MetaData), NewProp_bCanMakeNoise_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceededPersuasion_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsSucceededPersuasion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceededPersuasion = { "bIsSucceededPersuasion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceededPersuasion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSucceededPersuasion_MetaData), NewProp_bIsSucceededPersuasion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NavGenerationRadius = { "NavGenerationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, NavGenerationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavGenerationRadius_MetaData), NewProp_NavGenerationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NavRemovalRadius = { "NavRemovalRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, NavRemovalRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavRemovalRadius_MetaData), NewProp_NavRemovalRadius_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceeded_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceeded = { "bIsSucceeded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSucceeded_MetaData), NewProp_bIsSucceeded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_Target2 = { "Target2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, Target2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target2_MetaData), NewProp_Target2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NoiseEmitterComponent = { "NoiseEmitterComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, NoiseEmitterComponent), Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseEmitterComponent_MetaData), NewProp_NoiseEmitterComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, Lives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lives_MetaData), NewProp_Lives_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_SilentMovementAction = { "SilentMovementAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, SilentMovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SilentMovementAction_MetaData), NewProp_SilentMovementAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_StealthAction = { "StealthAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, StealthAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthAction_MetaData), NewProp_StealthAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_PersuadeAction = { "PersuadeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, PersuadeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersuadeAction_MetaData), NewProp_PersuadeAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, ManaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_ManaRegenInterval = { "ManaRegenInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, ManaRegenInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenInterval_MetaData), NewProp_ManaRegenInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_SilentMovementSkill = { "SilentMovementSkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, SilentMovementSkill), Z_Construct_UScriptStruct_FSkillState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SilentMovementSkill_MetaData), NewProp_SilentMovementSkill_MetaData) }; // 223194883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_StealthSkill = { "StealthSkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, StealthSkill), Z_Construct_UScriptStruct_FSkillState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthSkill_MetaData), NewProp_StealthSkill_MetaData) }; // 223194883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_InvulnerabilitySkill = { "InvulnerabilitySkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, InvulnerabilitySkill), Z_Construct_UScriptStruct_FSkillState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvulnerabilitySkill_MetaData), NewProp_InvulnerabilitySkill_MetaData) }; // 223194883
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_DefaultWalkSpeed = { "DefaultWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, DefaultWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWalkSpeed_MetaData), NewProp_DefaultWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_SlowWalkSpeed = { "SlowWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, SlowWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowWalkSpeed_MetaData), NewProp_SlowWalkSpeed_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsCaptured_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsCaptured = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsCaptured = { "bIsCaptured", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsCaptured_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCaptured_MetaData), NewProp_bIsCaptured_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInvulnerable_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInvulnerable = { "bIsInvulnerable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInvulnerable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInvulnerable_MetaData), NewProp_bIsInvulnerable_MetaData) };
void Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsTimerSet_SetBit(void* Obj)
{
	((ASCC_UEAILectureCharacter*)Obj)->bIsTimerSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsTimerSet = { "bIsTimerSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAILectureCharacter), &Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsTimerSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTimerSet_MetaData), NewProp_bIsTimerSet_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_InvulnerabilityDuration = { "InvulnerabilityDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, InvulnerabilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvulnerabilityDuration_MetaData), NewProp_InvulnerabilityDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_PersuasionChance = { "PersuasionChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, PersuasionChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersuasionChance_MetaData), NewProp_PersuasionChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_PersuasionWindow = { "PersuasionWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, PersuasionWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersuasionWindow_MetaData), NewProp_PersuasionWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_CaptureTime = { "CaptureTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, CaptureTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureTime_MetaData), NewProp_CaptureTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_DefaultMovementNoiseLoudness = { "DefaultMovementNoiseLoudness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, DefaultMovementNoiseLoudness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMovementNoiseLoudness_MetaData), NewProp_DefaultMovementNoiseLoudness_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_StealthMaterial = { "StealthMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAILectureCharacter, StealthMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthMaterial_MetaData), NewProp_StealthMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NavInvoker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInStealthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bCanMakeNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceededPersuasion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NavGenerationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NavRemovalRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_Target2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_NoiseEmitterComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_Lives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_SilentMovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_StealthAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_PersuadeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_ManaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_ManaRegenInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_SilentMovementSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_StealthSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_InvulnerabilitySkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_DefaultWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_SlowWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsCaptured,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsInvulnerable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_bIsTimerSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_InvulnerabilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_PersuasionChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_PersuasionWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_CaptureTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_DefaultMovementNoiseLoudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::NewProp_StealthMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDetectableInterface_NoRegister, (int32)VTABLE_OFFSET(ASCC_UEAILectureCharacter, IDetectableInterface), false },  // 3634255630
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::ClassParams = {
	&ASCC_UEAILectureCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASCC_UEAILectureCharacter()
{
	if (!Z_Registration_Info_UClass_ASCC_UEAILectureCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCC_UEAILectureCharacter.OuterSingleton, Z_Construct_UClass_ASCC_UEAILectureCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASCC_UEAILectureCharacter.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ASCC_UEAILectureCharacter>()
{
	return ASCC_UEAILectureCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASCC_UEAILectureCharacter);
ASCC_UEAILectureCharacter::~ASCC_UEAILectureCharacter() {}
// End Class ASCC_UEAILectureCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkillState::StaticStruct, Z_Construct_UScriptStruct_FSkillState_Statics::NewStructOps, TEXT("SkillState"), &Z_Registration_Info_UScriptStruct_SkillState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillState), 223194883U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASCC_UEAILectureCharacter, ASCC_UEAILectureCharacter::StaticClass, TEXT("ASCC_UEAILectureCharacter"), &Z_Registration_Info_UClass_ASCC_UEAILectureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCC_UEAILectureCharacter), 3419459839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_1586534731(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
