// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/AI_DetectionGuard.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_DetectionGuard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AAI_DetectionGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AAI_DetectionGuard_NoRegister();
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum EGuardAlertLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGuardAlertLevel;
static UEnum* EGuardAlertLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGuardAlertLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGuardAlertLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("EGuardAlertLevel"));
	}
	return Z_Registration_Info_UEnum_EGuardAlertLevel.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EGuardAlertLevel>()
{
	return EGuardAlertLevel_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chasing.DisplayName", "Chasing" },
		{ "Chasing.Name", "EGuardAlertLevel::Chasing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xec\xa0\x95\xec\x9d\x98\n" },
#endif
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EGuardAlertLevel::Idle" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
		{ "Suspicious.DisplayName", "Suspicious" },
		{ "Suspicious.Name", "EGuardAlertLevel::Suspicious" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xec\xa0\x95\xec\x9d\x98" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGuardAlertLevel::Idle", (int64)EGuardAlertLevel::Idle },
		{ "EGuardAlertLevel::Suspicious", (int64)EGuardAlertLevel::Suspicious },
		{ "EGuardAlertLevel::Chasing", (int64)EGuardAlertLevel::Chasing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"EGuardAlertLevel",
	"EGuardAlertLevel",
	Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel()
{
	if (!Z_Registration_Info_UEnum_EGuardAlertLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGuardAlertLevel.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGuardAlertLevel.InnerSingleton;
}
// End Enum EGuardAlertLevel

// Begin Class AAI_DetectionGuard Function DecrementDetectionCount
struct Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb0\x90\xec\xa7\x80 \xec\xb9\xb4\xec\x9a\xb4\xed\x8a\xb8 \xea\xb0\x90\xec\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb0\x90\xec\xa7\x80 \xec\xb9\xb4\xec\x9a\xb4\xed\x8a\xb8 \xea\xb0\x90\xec\x86\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "DecrementDetectionCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execDecrementDetectionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecrementDetectionCount();
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function DecrementDetectionCount

// Begin Class AAI_DetectionGuard Function IncrementDetectionCount
struct Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb0\x90\xec\xa7\x80 \xec\xb9\xb4\xec\x9a\xb4\xed\x8a\xb8 \xec\xa6\x9d\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb0\x90\xec\xa7\x80 \xec\xb9\xb4\xec\x9a\xb4\xed\x8a\xb8 \xec\xa6\x9d\xea\xb0\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "IncrementDetectionCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execIncrementDetectionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementDetectionCount();
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function IncrementDetectionCount

// Begin Class AAI_DetectionGuard Function OnHearNoise
struct Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics
{
	struct AI_DetectionGuard_eventOnHearNoise_Parms
	{
		APawn* NoiseMaker;
		FVector Location;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x86\x8c\xeb\xa6\xac \xea\xb0\x90\xec\xa7\x80 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xeb\xa6\xac \xea\xb0\x90\xec\xa7\x80 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::NewProp_NoiseMaker = { "NoiseMaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_DetectionGuard_eventOnHearNoise_Parms, NoiseMaker), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_DetectionGuard_eventOnHearNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_DetectionGuard_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::NewProp_NoiseMaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "OnHearNoise", nullptr, nullptr, Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::AI_DetectionGuard_eventOnHearNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::AI_DetectionGuard_eventOnHearNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execOnHearNoise)
{
	P_GET_OBJECT(APawn,Z_Param_NoiseMaker);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHearNoise(Z_Param_NoiseMaker,Z_Param_Out_Location,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function OnHearNoise

// Begin Class AAI_DetectionGuard Function OnPerceptionUpdated
struct Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics
{
	struct AI_DetectionGuard_eventOnPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xec\xa7\x80\xea\xb0\x81 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xec\xa7\x80\xea\xb0\x81 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_DetectionGuard_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_DetectionGuard_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "OnPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::AI_DetectionGuard_eventOnPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::AI_DetectionGuard_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execOnPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function OnPerceptionUpdated

// Begin Class AAI_DetectionGuard Function OnSeePlayer
struct Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics
{
	struct AI_DetectionGuard_eventOnSeePlayer_Parms
	{
		APawn* SeenPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\x9c\xec\x95\xbc \xea\xb0\x90\xec\xa7\x80 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\x9c\xec\x95\xbc \xea\xb0\x90\xec\xa7\x80 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_DetectionGuard_eventOnSeePlayer_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::NewProp_SeenPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "OnSeePlayer", nullptr, nullptr, Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::AI_DetectionGuard_eventOnSeePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::AI_DetectionGuard_eventOnSeePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execOnSeePlayer)
{
	P_GET_OBJECT(APawn,Z_Param_SeenPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePlayer(Z_Param_SeenPawn);
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function OnSeePlayer

// Begin Class AAI_DetectionGuard Function SetSpeedByAlertLevel
struct Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x86\x8d\xeb\x8f\x84 \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8d\xeb\x8f\x84 \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "SetSpeedByAlertLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execSetSpeedByAlertLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpeedByAlertLevel();
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function SetSpeedByAlertLevel

// Begin Class AAI_DetectionGuard Function StopChasing
struct Z_Construct_UFunction_AAI_DetectionGuard_StopChasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\x94\xec\xa0\x81 \xec\xa4\x91\xeb\x8b\xa8 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\x94\xec\xa0\x81 \xec\xa4\x91\xeb\x8b\xa8 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_StopChasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "StopChasing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_StopChasing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_StopChasing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_StopChasing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_StopChasing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execStopChasing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopChasing();
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function StopChasing

// Begin Class AAI_DetectionGuard Function UpdateAlertLevel
struct Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "UpdateAlertLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execUpdateAlertLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAlertLevel();
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function UpdateAlertLevel

// Begin Class AAI_DetectionGuard Function UpdateBlackboard
struct Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\x9e\x99\xeb\xb3\xb4\xeb\x93\x9c \xea\xb0\x92 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\x9e\x99\xeb\xb3\xb4\xeb\x93\x9c \xea\xb0\x92 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_DetectionGuard, nullptr, "UpdateBlackboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAI_DetectionGuard::execUpdateBlackboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBlackboard();
	P_NATIVE_END;
}
// End Class AAI_DetectionGuard Function UpdateBlackboard

// Begin Class AAI_DetectionGuard
void AAI_DetectionGuard::StaticRegisterNativesAAI_DetectionGuard()
{
	UClass* Class = AAI_DetectionGuard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecrementDetectionCount", &AAI_DetectionGuard::execDecrementDetectionCount },
		{ "IncrementDetectionCount", &AAI_DetectionGuard::execIncrementDetectionCount },
		{ "OnHearNoise", &AAI_DetectionGuard::execOnHearNoise },
		{ "OnPerceptionUpdated", &AAI_DetectionGuard::execOnPerceptionUpdated },
		{ "OnSeePlayer", &AAI_DetectionGuard::execOnSeePlayer },
		{ "SetSpeedByAlertLevel", &AAI_DetectionGuard::execSetSpeedByAlertLevel },
		{ "StopChasing", &AAI_DetectionGuard::execStopChasing },
		{ "UpdateAlertLevel", &AAI_DetectionGuard::execUpdateAlertLevel },
		{ "UpdateBlackboard", &AAI_DetectionGuard::execUpdateBlackboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_DetectionGuard);
UClass* Z_Construct_UClass_AAI_DetectionGuard_NoRegister()
{
	return AAI_DetectionGuard::StaticClass();
}
struct Z_Construct_UClass_AAI_DetectionGuard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_DetectionGuard.h" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb9\x84\xed\x97\xa4\xec\x9d\xb4\xeb\xb9\x84\xec\x96\xb4 \xed\x8a\xb8\xeb\xa6\xac \xec\x95\xa0\xec\x85\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb9\x84\xed\x97\xa4\xec\x9d\xb4\xeb\xb9\x84\xec\x96\xb4 \xed\x8a\xb8\xeb\xa6\xac \xec\x95\xa0\xec\x85\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardAlertLevel_MetaData[] = {
		{ "Category", "AI|Alert" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80\xec\x97\x90 \xeb\x94\xb0\xeb\xa5\xb8 \xed\x96\x89\xeb\x8f\x99 \xeb\xb3\x80\xed\x99\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80\xec\x97\x90 \xeb\x94\xb0\xeb\xa5\xb8 \xed\x96\x89\xeb\x8f\x99 \xeb\xb3\x80\xed\x99\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionCount_MetaData[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x90\xec\xa7\x80 \xed\x9a\x9f\xec\x88\x98 \xec\xb9\xb4\xec\x9a\xb4\xed\x84\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x90\xec\xa7\x80 \xed\x9a\x9f\xec\x88\x98 \xec\xb9\xb4\xec\x9a\xb4\xed\x84\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDetectionCount_MetaData[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xec\x84\xa4\xec\xa0\x95 \xec\xb5\x9c\xeb\x8c\x80 \xea\xb0\x92\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xec\x84\xa4\xec\xa0\x95 \xec\xb5\x9c\xeb\x8c\x80 \xea\xb0\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionDecayTime_MetaData[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xea\xb0\x90\xec\x86\x8c \xed\x83\x80\xec\x9d\xb4\xeb\xa8\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xea\xb3\x84 \xec\x88\x98\xec\xa4\x80 \xea\xb0\x90\xec\x86\x8c \xed\x83\x80\xec\x9d\xb4\xeb\xa8\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleSpeed_MetaData[] = {
		{ "Category", "AI|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xea\xb8\xb0\xeb\xb3\xb8 \xec\x86\x8d\xec\x84\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xea\xb8\xb0\xeb\xb3\xb8 \xec\x86\x8d\xec\x84\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspiciousSpeed_MetaData[] = {
		{ "Category", "AI|Movement" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChasingSpeed_MetaData[] = {
		{ "Category", "AI|Movement" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "AI|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\x9c\xec\x95\xbc \xea\xb0\x90\xec\xa7\x80 \xeb\xb2\x94\xec\x9c\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\x9c\xec\x95\xbc \xea\xb0\x90\xec\xa7\x80 \xeb\xb2\x94\xec\x9c\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngle_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "Category", "AI|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "AI|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "AI|Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb4\x80\xeb\xa0\xa8 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb4\x80\xeb\xa0\xa8 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownPlayerLocation_MetaData[] = {
		{ "Category", "AI|Target" },
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/AI_DetectionGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xec\xbb\xa8\xed\x8a\xb8\xeb\xa1\xa4\xeb\x9f\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GuardAlertLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GuardAlertLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetectionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDetectionCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionDecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspiciousSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChasingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownPlayerLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_DetectionGuard_DecrementDetectionCount, "DecrementDetectionCount" }, // 1843756715
		{ &Z_Construct_UFunction_AAI_DetectionGuard_IncrementDetectionCount, "IncrementDetectionCount" }, // 1058208918
		{ &Z_Construct_UFunction_AAI_DetectionGuard_OnHearNoise, "OnHearNoise" }, // 4106654753
		{ &Z_Construct_UFunction_AAI_DetectionGuard_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2334939529
		{ &Z_Construct_UFunction_AAI_DetectionGuard_OnSeePlayer, "OnSeePlayer" }, // 1892504578
		{ &Z_Construct_UFunction_AAI_DetectionGuard_SetSpeedByAlertLevel, "SetSpeedByAlertLevel" }, // 3613537877
		{ &Z_Construct_UFunction_AAI_DetectionGuard_StopChasing, "StopChasing" }, // 93701754
		{ &Z_Construct_UFunction_AAI_DetectionGuard_UpdateAlertLevel, "UpdateAlertLevel" }, // 2364869634
		{ &Z_Construct_UFunction_AAI_DetectionGuard_UpdateBlackboard, "UpdateBlackboard" }, // 3773273166
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_DetectionGuard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_GuardAlertLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_GuardAlertLevel = { "GuardAlertLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, GuardAlertLevel), Z_Construct_UEnum_SCC_UEAI_Lecture_EGuardAlertLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardAlertLevel_MetaData), NewProp_GuardAlertLevel_MetaData) }; // 78272117
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_DetectionCount = { "DetectionCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, DetectionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionCount_MetaData), NewProp_DetectionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_MaxDetectionCount = { "MaxDetectionCount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, MaxDetectionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDetectionCount_MetaData), NewProp_MaxDetectionCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_DetectionDecayTime = { "DetectionDecayTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, DetectionDecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionDecayTime_MetaData), NewProp_DetectionDecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_IdleSpeed = { "IdleSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, IdleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleSpeed_MetaData), NewProp_IdleSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_SuspiciousSpeed = { "SuspiciousSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, SuspiciousSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspiciousSpeed_MetaData), NewProp_SuspiciousSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_ChasingSpeed = { "ChasingSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, ChasingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChasingSpeed_MetaData), NewProp_ChasingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_PeripheralVisionAngle = { "PeripheralVisionAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, PeripheralVisionAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionAngle_MetaData), NewProp_PeripheralVisionAngle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, TargetPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayer_MetaData), NewProp_TargetPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_LastKnownPlayerLocation = { "LastKnownPlayerLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, LastKnownPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownPlayerLocation_MetaData), NewProp_LastKnownPlayerLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_DetectionGuard, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_DetectionGuard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_GuardAlertLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_GuardAlertLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_DetectionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_MaxDetectionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_DetectionDecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_IdleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_SuspiciousSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_ChasingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_PeripheralVisionAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_PerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_PawnSensingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_TargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_LastKnownPlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_DetectionGuard_Statics::NewProp_AIController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_DetectionGuard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAI_DetectionGuard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_DetectionGuard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_DetectionGuard_Statics::ClassParams = {
	&AAI_DetectionGuard::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAI_DetectionGuard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAI_DetectionGuard_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_DetectionGuard_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_DetectionGuard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAI_DetectionGuard()
{
	if (!Z_Registration_Info_UClass_AAI_DetectionGuard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_DetectionGuard.OuterSingleton, Z_Construct_UClass_AAI_DetectionGuard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAI_DetectionGuard.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AAI_DetectionGuard>()
{
	return AAI_DetectionGuard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_DetectionGuard);
AAI_DetectionGuard::~AAI_DetectionGuard() {}
// End Class AAI_DetectionGuard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGuardAlertLevel_StaticEnum, TEXT("EGuardAlertLevel"), &Z_Registration_Info_UEnum_EGuardAlertLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 78272117U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAI_DetectionGuard, AAI_DetectionGuard::StaticClass, TEXT("AAI_DetectionGuard"), &Z_Registration_Info_UClass_AAI_DetectionGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_DetectionGuard), 2689019500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_170745394(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_AI_DetectionGuard_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
