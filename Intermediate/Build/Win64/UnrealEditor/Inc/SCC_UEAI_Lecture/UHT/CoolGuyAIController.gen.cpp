// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/CoolGuyAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoolGuyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ACoolGuyAIController();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ACoolGuyAIController_NoRegister();
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum ESearchStateInternal
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESearchStateInternal;
static UEnum* ESearchStateInternal_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESearchStateInternal.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESearchStateInternal.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("ESearchStateInternal"));
	}
	return Z_Registration_Info_UEnum_ESearchStateInternal.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<ESearchStateInternal>()
{
	return ESearchStateInternal_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chasing.Name", "ESearchStateInternal::Chasing" },
		{ "Idle.Name", "ESearchStateInternal::Idle" },
		{ "Investigating.Name", "ESearchStateInternal::Investigating" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
		{ "Searching.Name", "ESearchStateInternal::Searching" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESearchStateInternal::Idle", (int64)ESearchStateInternal::Idle },
		{ "ESearchStateInternal::Investigating", (int64)ESearchStateInternal::Investigating },
		{ "ESearchStateInternal::Chasing", (int64)ESearchStateInternal::Chasing },
		{ "ESearchStateInternal::Searching", (int64)ESearchStateInternal::Searching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"ESearchStateInternal",
	"ESearchStateInternal",
	Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal()
{
	if (!Z_Registration_Info_UEnum_ESearchStateInternal.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESearchStateInternal.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESearchStateInternal.InnerSingleton;
}
// End Enum ESearchStateInternal

// Begin Class ACoolGuyAIController Function OnHearNoise
struct Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics
{
	struct CoolGuyAIController_eventOnHearNoise_Parms
	{
		APawn* PawnInstigator;
		FVector Location;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnInstigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::NewProp_PawnInstigator = { "PawnInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoolGuyAIController_eventOnHearNoise_Parms, PawnInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoolGuyAIController_eventOnHearNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoolGuyAIController_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::NewProp_PawnInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoolGuyAIController, nullptr, "OnHearNoise", nullptr, nullptr, Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::CoolGuyAIController_eventOnHearNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::CoolGuyAIController_eventOnHearNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoolGuyAIController::execOnHearNoise)
{
	P_GET_OBJECT(APawn,Z_Param_PawnInstigator);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHearNoise(Z_Param_PawnInstigator,Z_Param_Out_Location,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class ACoolGuyAIController Function OnHearNoise

// Begin Class ACoolGuyAIController Function OnTargetPerceptionUpdated
struct Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics
{
	struct CoolGuyAIController_eventOnTargetPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xda\xb5\xe9\xb7\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb5\xe9\xb7\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoolGuyAIController_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoolGuyAIController_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoolGuyAIController, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::CoolGuyAIController_eventOnTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::CoolGuyAIController_eventOnTargetPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoolGuyAIController::execOnTargetPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class ACoolGuyAIController Function OnTargetPerceptionUpdated

// Begin Class ACoolGuyAIController Function StartChasingPlayer
struct Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics
{
	struct CoolGuyAIController_eventStartChasingPlayer_Parms
	{
		AActor* PlayerActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xce\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdd\xb9\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdd\xb9\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoolGuyAIController_eventStartChasingPlayer_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::NewProp_PlayerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoolGuyAIController, nullptr, "StartChasingPlayer", nullptr, nullptr, Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::CoolGuyAIController_eventStartChasingPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::CoolGuyAIController_eventStartChasingPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoolGuyAIController::execStartChasingPlayer)
{
	P_GET_OBJECT(AActor,Z_Param_PlayerActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChasingPlayer(Z_Param_PlayerActor);
	P_NATIVE_END;
}
// End Class ACoolGuyAIController Function StartChasingPlayer

// Begin Class ACoolGuyAIController Function StartSearchingLastLocation
struct Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoolGuyAIController, nullptr, "StartSearchingLastLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoolGuyAIController::execStartSearchingLastLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSearchingLastLocation();
	P_NATIVE_END;
}
// End Class ACoolGuyAIController Function StartSearchingLastLocation

// Begin Class ACoolGuyAIController Function StopChasingPlayer
struct Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoolGuyAIController, nullptr, "StopChasingPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoolGuyAIController::execStopChasingPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopChasingPlayer();
	P_NATIVE_END;
}
// End Class ACoolGuyAIController Function StopChasingPlayer

// Begin Class ACoolGuyAIController
void ACoolGuyAIController::StaticRegisterNativesACoolGuyAIController()
{
	UClass* Class = ACoolGuyAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHearNoise", &ACoolGuyAIController::execOnHearNoise },
		{ "OnTargetPerceptionUpdated", &ACoolGuyAIController::execOnTargetPerceptionUpdated },
		{ "StartChasingPlayer", &ACoolGuyAIController::execStartChasingPlayer },
		{ "StartSearchingLastLocation", &ACoolGuyAIController::execStartSearchingLastLocation },
		{ "StopChasingPlayer", &ACoolGuyAIController::execStopChasingPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoolGuyAIController);
UClass* Z_Construct_UClass_ACoolGuyAIController_NoRegister()
{
	return ACoolGuyAIController::StaticClass();
}
struct Z_Construct_UClass_ACoolGuyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CoolGuyAIController.h" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolGuyPerceptionComponent_MetaData[] = {
		{ "Category", "AI|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xef\xbf\xbd\xce\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xce\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xbe\xdf\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xbe\xdf\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "AI|Sensing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoolGuyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoolGuyPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoolGuyAIController_OnHearNoise, "OnHearNoise" }, // 1506658808
		{ &Z_Construct_UFunction_ACoolGuyAIController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 1631510856
		{ &Z_Construct_UFunction_ACoolGuyAIController_StartChasingPlayer, "StartChasingPlayer" }, // 2617533188
		{ &Z_Construct_UFunction_ACoolGuyAIController_StartSearchingLastLocation, "StartSearchingLastLocation" }, // 4184357344
		{ &Z_Construct_UFunction_ACoolGuyAIController_StopChasingPlayer, "StopChasingPlayer" }, // 2910546788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoolGuyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoolGuyAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComponent_MetaData), NewProp_BehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoolGuyAIController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComponent_MetaData), NewProp_BlackboardComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoolGuyAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_CoolGuyPerceptionComponent = { "CoolGuyPerceptionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoolGuyAIController, CoolGuyPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolGuyPerceptionComponent_MetaData), NewProp_CoolGuyPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoolGuyAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoolGuyAIController, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoolGuyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_BehaviorTreeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_BlackboardComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_CoolGuyPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoolGuyAIController_Statics::NewProp_PawnSensingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoolGuyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoolGuyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoolGuyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoolGuyAIController_Statics::ClassParams = {
	&ACoolGuyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACoolGuyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoolGuyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoolGuyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoolGuyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoolGuyAIController()
{
	if (!Z_Registration_Info_UClass_ACoolGuyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoolGuyAIController.OuterSingleton, Z_Construct_UClass_ACoolGuyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoolGuyAIController.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ACoolGuyAIController>()
{
	return ACoolGuyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoolGuyAIController);
ACoolGuyAIController::~ACoolGuyAIController() {}
// End Class ACoolGuyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESearchStateInternal_StaticEnum, TEXT("ESearchStateInternal"), &Z_Registration_Info_UEnum_ESearchStateInternal, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 551807236U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoolGuyAIController, ACoolGuyAIController::StaticClass, TEXT("ACoolGuyAIController"), &Z_Registration_Info_UClass_ACoolGuyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoolGuyAIController), 1454751638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_184441415(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_CoolGuyAIController_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
