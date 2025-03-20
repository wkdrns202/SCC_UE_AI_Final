// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Enemy_TESTGuard.h"
#include "Runtime/AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_TESTGuard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_BaseGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_TESTGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_TESTGuard_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AEnemy_TESTGuard Function FindTargetPoints
struct Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_TESTGuard, nullptr, "FindTargetPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_TESTGuard::execFindTargetPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindTargetPoints();
	P_NATIVE_END;
}
// End Class AEnemy_TESTGuard Function FindTargetPoints

// Begin Class AEnemy_TESTGuard Function MoveToTarget
struct Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_TESTGuard, nullptr, "MoveToTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_TESTGuard::execMoveToTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToTarget();
	P_NATIVE_END;
}
// End Class AEnemy_TESTGuard Function MoveToTarget

// Begin Class AEnemy_TESTGuard Function OnMoveCompleted
struct Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics
{
	struct Enemy_TESTGuard_eventOnMoveCompleted_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_TESTGuard_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(0, nullptr) }; // 2000238872
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_TESTGuard_eventOnMoveCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_TESTGuard, nullptr, "OnMoveCompleted", nullptr, nullptr, Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::Enemy_TESTGuard_eventOnMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::Enemy_TESTGuard_eventOnMoveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_TESTGuard::execOnMoveCompleted)
{
	P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
	P_GET_PROPERTY(FByteProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
	P_NATIVE_END;
}
// End Class AEnemy_TESTGuard Function OnMoveCompleted

// Begin Class AEnemy_TESTGuard Function StartMoving
struct Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd - \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd - \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_TESTGuard, nullptr, "StartMoving", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_TESTGuard::execStartMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMoving();
	P_NATIVE_END;
}
// End Class AEnemy_TESTGuard Function StartMoving

// Begin Class AEnemy_TESTGuard
void AEnemy_TESTGuard::StaticRegisterNativesAEnemy_TESTGuard()
{
	UClass* Class = AEnemy_TESTGuard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindTargetPoints", &AEnemy_TESTGuard::execFindTargetPoints },
		{ "MoveToTarget", &AEnemy_TESTGuard::execMoveToTarget },
		{ "OnMoveCompleted", &AEnemy_TESTGuard::execOnMoveCompleted },
		{ "StartMoving", &AEnemy_TESTGuard::execStartMoving },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_TESTGuard);
UClass* Z_Construct_UClass_AEnemy_TESTGuard_NoRegister()
{
	return AEnemy_TESTGuard::StaticClass();
}
struct Z_Construct_UClass_AEnemy_TESTGuard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_TESTGuard.h" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Player Capture" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target2_MetaData[] = {
		{ "Category", "Player Capture" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSucceeded_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundTargets_MetaData[] = {
		{ "Category", "AI Movement" },
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolLocationTag_MetaData[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy_TESTGuard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target2;
	static void NewProp_bIsSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSucceeded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundTargets;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PatrolLocationTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_TESTGuard_FindTargetPoints, "FindTargetPoints" }, // 2886732212
		{ &Z_Construct_UFunction_AEnemy_TESTGuard_MoveToTarget, "MoveToTarget" }, // 2358765307
		{ &Z_Construct_UFunction_AEnemy_TESTGuard_OnMoveCompleted, "OnMoveCompleted" }, // 806887708
		{ &Z_Construct_UFunction_AEnemy_TESTGuard_StartMoving, "StartMoving" }, // 4068339286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_TESTGuard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_TESTGuard, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_Target2 = { "Target2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_TESTGuard, Target2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target2_MetaData), NewProp_Target2_MetaData) };
void Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsSucceeded_SetBit(void* Obj)
{
	((AEnemy_TESTGuard*)Obj)->bIsSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsSucceeded = { "bIsSucceeded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemy_TESTGuard), &Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsSucceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSucceeded_MetaData), NewProp_bIsSucceeded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_TESTGuard, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_FoundTargets_Inner = { "FoundTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_FoundTargets = { "FoundTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_TESTGuard, FoundTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundTargets_MetaData), NewProp_FoundTargets_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_PatrolLocationTag = { "PatrolLocationTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_TESTGuard, PatrolLocationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolLocationTag_MetaData), NewProp_PatrolLocationTag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_TESTGuard, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
void Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((AEnemy_TESTGuard*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemy_TESTGuard), &Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_TESTGuard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_Target2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_FoundTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_FoundTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_PatrolLocationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_TESTGuard_Statics::NewProp_bIsMoving,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_TESTGuard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_TESTGuard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy_BaseGuard,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_TESTGuard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_TESTGuard_Statics::ClassParams = {
	&AEnemy_TESTGuard::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemy_TESTGuard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_TESTGuard_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_TESTGuard_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_TESTGuard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_TESTGuard()
{
	if (!Z_Registration_Info_UClass_AEnemy_TESTGuard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_TESTGuard.OuterSingleton, Z_Construct_UClass_AEnemy_TESTGuard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_TESTGuard.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AEnemy_TESTGuard>()
{
	return AEnemy_TESTGuard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_TESTGuard);
AEnemy_TESTGuard::~AEnemy_TESTGuard() {}
// End Class AEnemy_TESTGuard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_TESTGuard, AEnemy_TESTGuard::StaticClass, TEXT("AEnemy_TESTGuard"), &Z_Registration_Info_UClass_AEnemy_TESTGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_TESTGuard), 50874464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_3362644899(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_TESTGuard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
