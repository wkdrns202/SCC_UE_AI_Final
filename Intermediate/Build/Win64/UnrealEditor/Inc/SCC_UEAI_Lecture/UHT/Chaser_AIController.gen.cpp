// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Chaser_AIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaser_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AChaser_AIController();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AChaser_AIController_NoRegister();
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum EAIState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIState;
static UEnum* EAIState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAIState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("EAIState"));
	}
	return Z_Registration_Info_UEnum_EAIState.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EAIState>()
{
	return EAIState_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chasing.Name", "EAIState::Chasing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Idle.Name", "EAIState::Idle" },
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
		{ "Suspicious.Name", "EAIState::Suspicious" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAIState::Idle", (int64)EAIState::Idle },
		{ "EAIState::Suspicious", (int64)EAIState::Suspicious },
		{ "EAIState::Chasing", (int64)EAIState::Chasing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"EAIState",
	"EAIState",
	Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState()
{
	if (!Z_Registration_Info_UEnum_EAIState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIState.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAIState.InnerSingleton;
}
// End Enum EAIState

// Begin Class AChaser_AIController Function GetCurrentState
struct Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics
{
	struct Chaser_AIController_eventGetCurrentState_Parms
	{
		EAIState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chaser_AIController_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_SCC_UEAI_Lecture_EAIState, METADATA_PARAMS(0, nullptr) }; // 1588436956
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaser_AIController, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::Chaser_AIController_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::Chaser_AIController_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaser_AIController_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaser_AIController_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaser_AIController::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAIState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// End Class AChaser_AIController Function GetCurrentState

// Begin Class AChaser_AIController Function OnPerceptionUpdated
struct Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics
{
	struct Chaser_AIController_eventOnPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chaser_AIController_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chaser_AIController_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaser_AIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::Chaser_AIController_eventOnPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::Chaser_AIController_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaser_AIController::execOnPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AChaser_AIController Function OnPerceptionUpdated

// Begin Class AChaser_AIController Function StartChasing
struct Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics
{
	struct Chaser_AIController_eventStartChasing_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Chaser_AIController_eventStartChasing_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaser_AIController, nullptr, "StartChasing", nullptr, nullptr, Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::Chaser_AIController_eventStartChasing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::Chaser_AIController_eventStartChasing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaser_AIController_StartChasing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaser_AIController_StartChasing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaser_AIController::execStartChasing)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChasing(Z_Param_Target);
	P_NATIVE_END;
}
// End Class AChaser_AIController Function StartChasing

// Begin Class AChaser_AIController Function StopChasing
struct Z_Construct_UFunction_AChaser_AIController_StopChasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaser_AIController_StopChasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaser_AIController, nullptr, "StopChasing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_StopChasing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaser_AIController_StopChasing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChaser_AIController_StopChasing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaser_AIController_StopChasing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaser_AIController::execStopChasing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopChasing();
	P_NATIVE_END;
}
// End Class AChaser_AIController Function StopChasing

// Begin Class AChaser_AIController Function UpdateAIState
struct Z_Construct_UFunction_AChaser_AIController_UpdateAIState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaser_AIController_UpdateAIState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaser_AIController, nullptr, "UpdateAIState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaser_AIController_UpdateAIState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaser_AIController_UpdateAIState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChaser_AIController_UpdateAIState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaser_AIController_UpdateAIState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaser_AIController::execUpdateAIState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAIState();
	P_NATIVE_END;
}
// End Class AChaser_AIController Function UpdateAIState

// Begin Class AChaser_AIController
void AChaser_AIController::StaticRegisterNativesAChaser_AIController()
{
	UClass* Class = AChaser_AIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &AChaser_AIController::execGetCurrentState },
		{ "OnPerceptionUpdated", &AChaser_AIController::execOnPerceptionUpdated },
		{ "StartChasing", &AChaser_AIController::execStartChasing },
		{ "StopChasing", &AChaser_AIController::execStopChasing },
		{ "UpdateAIState", &AChaser_AIController::execUpdateAIState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaser_AIController);
UClass* Z_Construct_UClass_AChaser_AIController_NoRegister()
{
	return AChaser_AIController::StaticClass();
}
struct Z_Construct_UClass_AChaser_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AI \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Chaser_AIController.h" },
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AI \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseInterestRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Chaser_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseInterestRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChaser_AIController_GetCurrentState, "GetCurrentState" }, // 2108116652
		{ &Z_Construct_UFunction_AChaser_AIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2161057799
		{ &Z_Construct_UFunction_AChaser_AIController_StartChasing, "StartChasing" }, // 1149001750
		{ &Z_Construct_UFunction_AChaser_AIController_StopChasing, "StopChasing" }, // 2014046323
		{ &Z_Construct_UFunction_AChaser_AIController_UpdateAIState, "UpdateAIState" }, // 3753356316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaser_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaser_AIController_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaser_AIController, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaser_AIController_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaser_AIController, DetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRadius_MetaData), NewProp_DetectionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaser_AIController_Statics::NewProp_ChaseRadius = { "ChaseRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaser_AIController, ChaseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseRadius_MetaData), NewProp_ChaseRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaser_AIController_Statics::NewProp_LoseInterestRadius = { "LoseInterestRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaser_AIController, LoseInterestRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseInterestRadius_MetaData), NewProp_LoseInterestRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaser_AIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaser_AIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaser_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaser_AIController_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaser_AIController_Statics::NewProp_DetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaser_AIController_Statics::NewProp_ChaseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaser_AIController_Statics::NewProp_LoseInterestRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaser_AIController_Statics::NewProp_SightConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaser_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChaser_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaser_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaser_AIController_Statics::ClassParams = {
	&AChaser_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChaser_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChaser_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaser_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AChaser_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChaser_AIController()
{
	if (!Z_Registration_Info_UClass_AChaser_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaser_AIController.OuterSingleton, Z_Construct_UClass_AChaser_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChaser_AIController.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AChaser_AIController>()
{
	return AChaser_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChaser_AIController);
AChaser_AIController::~AChaser_AIController() {}
// End Class AChaser_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAIState_StaticEnum, TEXT("EAIState"), &Z_Registration_Info_UEnum_EAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588436956U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChaser_AIController, AChaser_AIController::StaticClass, TEXT("AChaser_AIController"), &Z_Registration_Info_UClass_AChaser_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaser_AIController), 550477346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_950361497(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Chaser_AIController_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
