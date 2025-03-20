// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Enemy_BaseGuard.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_BaseGuard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_BaseGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_BaseGuard_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UGuardInterface_NoRegister();
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum EAlertLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlertLevel;
static UEnum* EAlertLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlertLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlertLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("EAlertLevel"));
	}
	return Z_Registration_Info_UEnum_EAlertLevel.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EAlertLevel>()
{
	return EAlertLevel_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alert.Comment", "// \xef\xbf\xbd\xc7\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Alert.DisplayName", "Alert" },
		{ "Alert.Name", "EAlertLevel::Alert" },
		{ "Alert.ToolTip", "\xef\xbf\xbd\xc7\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EAlertLevel::Normal" },
		{ "Pursuit.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Pursuit.DisplayName", "Pursuit" },
		{ "Pursuit.Name", "EAlertLevel::Pursuit" },
		{ "Pursuit.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Suspicious.Comment", "// \xef\xbf\xbd\xcf\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Suspicious.DisplayName", "Suspicious" },
		{ "Suspicious.Name", "EAlertLevel::Suspicious" },
		{ "Suspicious.ToolTip", "\xef\xbf\xbd\xcf\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlertLevel::Normal", (int64)EAlertLevel::Normal },
		{ "EAlertLevel::Suspicious", (int64)EAlertLevel::Suspicious },
		{ "EAlertLevel::Alert", (int64)EAlertLevel::Alert },
		{ "EAlertLevel::Pursuit", (int64)EAlertLevel::Pursuit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"EAlertLevel",
	"EAlertLevel",
	Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel()
{
	if (!Z_Registration_Info_UEnum_EAlertLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlertLevel.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlertLevel.InnerSingleton;
}
// End Enum EAlertLevel

// Begin Class AEnemy_BaseGuard Function AlertOtherGuards
struct Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics
{
	struct Enemy_BaseGuard_eventAlertOtherGuards_Parms
	{
		FVector LocationToInvestigate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Communication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationToInvestigate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationToInvestigate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::NewProp_LocationToInvestigate = { "LocationToInvestigate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventAlertOtherGuards_Parms, LocationToInvestigate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationToInvestigate_MetaData), NewProp_LocationToInvestigate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::NewProp_LocationToInvestigate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "AlertOtherGuards", nullptr, nullptr, Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::Enemy_BaseGuard_eventAlertOtherGuards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::Enemy_BaseGuard_eventAlertOtherGuards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execAlertOtherGuards)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationToInvestigate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlertOtherGuards(Z_Param_Out_LocationToInvestigate);
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function AlertOtherGuards

// Begin Class AEnemy_BaseGuard Function CapturePlayer
struct Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xb9 \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xb9 \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "CapturePlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execCapturePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CapturePlayer();
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function CapturePlayer

// Begin Class AEnemy_BaseGuard Function InvestigateLastKnownLocation
struct Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "InvestigateLastKnownLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execInvestigateLastKnownLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvestigateLastKnownLocation();
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function InvestigateLastKnownLocation

// Begin Class AEnemy_BaseGuard Function OnHearNoise
struct Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics
{
	struct Enemy_BaseGuard_eventOnHearNoise_Parms
	{
		APawn* NoiseMaker;
		FVector Location;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::NewProp_NoiseMaker = { "NoiseMaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnHearNoise_Parms, NoiseMaker), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnHearNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::NewProp_NoiseMaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "OnHearNoise", nullptr, nullptr, Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::Enemy_BaseGuard_eventOnHearNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::Enemy_BaseGuard_eventOnHearNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execOnHearNoise)
{
	P_GET_OBJECT(APawn,Z_Param_NoiseMaker);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHearNoise(Z_Param_NoiseMaker,Z_Param_Out_Location,Z_Param_Volume);
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function OnHearNoise

// Begin Class AEnemy_BaseGuard Function OnPlayerDetected
struct Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics
{
	struct Enemy_BaseGuard_eventOnPlayerDetected_Parms
	{
		APawn* DetectedPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::NewProp_DetectedPawn = { "DetectedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnPlayerDetected_Parms, DetectedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::NewProp_DetectedPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "OnPlayerDetected", nullptr, nullptr, Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::Enemy_BaseGuard_eventOnPlayerDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::Enemy_BaseGuard_eventOnPlayerDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execOnPlayerDetected)
{
	P_GET_OBJECT(APawn,Z_Param_DetectedPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDetected(Z_Param_DetectedPawn);
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function OnPlayerDetected

// Begin Class AEnemy_BaseGuard Function OnSeePlayer
struct Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics
{
	struct Enemy_BaseGuard_eventOnSeePlayer_Parms
	{
		APawn* SeenPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnSeePlayer_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::NewProp_SeenPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "OnSeePlayer", nullptr, nullptr, Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::Enemy_BaseGuard_eventOnSeePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::Enemy_BaseGuard_eventOnSeePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execOnSeePlayer)
{
	P_GET_OBJECT(APawn,Z_Param_SeenPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePlayer(Z_Param_SeenPawn);
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function OnSeePlayer

// Begin Class AEnemy_BaseGuard Function OnTargetPerceptionUpdated
struct Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics
{
	struct Enemy_BaseGuard_eventOnTargetPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xda\xb5\xe9\xb7\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xda\xb5\xe9\xb7\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::Enemy_BaseGuard_eventOnTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::Enemy_BaseGuard_eventOnTargetPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execOnTargetPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function OnTargetPerceptionUpdated

// Begin Class AEnemy_BaseGuard Function Patrol
struct Z_Construct_UFunction_AEnemy_BaseGuard_Patrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_Patrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "Patrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_Patrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_Patrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_Patrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_Patrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Patrol();
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function Patrol

// Begin Class AEnemy_BaseGuard Function PursuePlayer
struct Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "PursuePlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execPursuePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PursuePlayer();
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function PursuePlayer

// Begin Class AEnemy_BaseGuard Function SetAlertLevel
struct Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics
{
	struct Enemy_BaseGuard_eventSetAlertLevel_Parms
	{
		EAlertLevel NewAlertLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAlertLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAlertLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::NewProp_NewAlertLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::NewProp_NewAlertLevel = { "NewAlertLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_BaseGuard_eventSetAlertLevel_Parms, NewAlertLevel), Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel, METADATA_PARAMS(0, nullptr) }; // 1839061676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::NewProp_NewAlertLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::NewProp_NewAlertLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_BaseGuard, nullptr, "SetAlertLevel", nullptr, nullptr, Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::Enemy_BaseGuard_eventSetAlertLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::Enemy_BaseGuard_eventSetAlertLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_BaseGuard::execSetAlertLevel)
{
	P_GET_ENUM(EAlertLevel,Z_Param_NewAlertLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlertLevel(EAlertLevel(Z_Param_NewAlertLevel));
	P_NATIVE_END;
}
// End Class AEnemy_BaseGuard Function SetAlertLevel

// Begin Class AEnemy_BaseGuard
void AEnemy_BaseGuard::StaticRegisterNativesAEnemy_BaseGuard()
{
	UClass* Class = AEnemy_BaseGuard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlertOtherGuards", &AEnemy_BaseGuard::execAlertOtherGuards },
		{ "CapturePlayer", &AEnemy_BaseGuard::execCapturePlayer },
		{ "InvestigateLastKnownLocation", &AEnemy_BaseGuard::execInvestigateLastKnownLocation },
		{ "OnHearNoise", &AEnemy_BaseGuard::execOnHearNoise },
		{ "OnPlayerDetected", &AEnemy_BaseGuard::execOnPlayerDetected },
		{ "OnSeePlayer", &AEnemy_BaseGuard::execOnSeePlayer },
		{ "OnTargetPerceptionUpdated", &AEnemy_BaseGuard::execOnTargetPerceptionUpdated },
		{ "Patrol", &AEnemy_BaseGuard::execPatrol },
		{ "PursuePlayer", &AEnemy_BaseGuard::execPursuePlayer },
		{ "SetAlertLevel", &AEnemy_BaseGuard::execSetAlertLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_BaseGuard);
UClass* Z_Construct_UClass_AEnemy_BaseGuard_NoRegister()
{
	return AEnemy_BaseGuard::StaticClass();
}
struct Z_Construct_UClass_AEnemy_BaseGuard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xef\xbf\xbd. \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd GuardInterface \xef\xbf\xbd\xef\xbf\xbd\xc9\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xb0\xd4\xb5\xef\xbf\xbd. AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GuardInterface\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 Detectable \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd), GameMode\xef\xbf\xbd\xef\xbf\xbd GameRulesInterface \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_BaseGuard.h" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xef\xbf\xbd. \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd GuardInterface \xef\xbf\xbd\xef\xbf\xbd\xc9\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xb0\xd4\xb5\xef\xbf\xbd. AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GuardInterface\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 Detectable \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd), GameMode\xef\xbf\xbd\xef\xbf\xbd GameRulesInterface \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "AI|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "AI|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewAngle_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PursuitSpeed_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAlertLevel_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertTimeout_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureRange_MetaData[] = {
		{ "Category", "AI|Properties" },
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownPlayerLocation_MetaData[] = {
		{ "Category", "AI|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeInCurrentAlertLevel_MetaData[] = {
		{ "Category", "AI|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationRange_MetaData[] = {
		{ "Category", "AI|Communication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "AI|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "Category", "AI|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIClass_MetaData[] = {
		{ "Category", "AI|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_BaseGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PursuitSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAlertLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAlertLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlertTimeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownPlayerLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInCurrentAlertLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CommunicationRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_AlertOtherGuards, "AlertOtherGuards" }, // 696303550
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_CapturePlayer, "CapturePlayer" }, // 927598300
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_InvestigateLastKnownLocation, "InvestigateLastKnownLocation" }, // 4102835393
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_OnHearNoise, "OnHearNoise" }, // 294067325
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_OnPlayerDetected, "OnPlayerDetected" }, // 2380962624
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_OnSeePlayer, "OnSeePlayer" }, // 3911960910
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 1428297068
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_Patrol, "Patrol" }, // 3402252044
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_PursuePlayer, "PursuePlayer" }, // 1191469854
		{ &Z_Construct_UFunction_AEnemy_BaseGuard_SetAlertLevel, "SetAlertLevel" }, // 1607916640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_BaseGuard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, DetectionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRange_MetaData), NewProp_DetectionRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_ViewAngle = { "ViewAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, ViewAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewAngle_MetaData), NewProp_ViewAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, HearingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRange_MetaData), NewProp_HearingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, SightRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRange_MetaData), NewProp_SightRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_PursuitSpeed = { "PursuitSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, PursuitSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PursuitSpeed_MetaData), NewProp_PursuitSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CurrentAlertLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CurrentAlertLevel = { "CurrentAlertLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, CurrentAlertLevel), Z_Construct_UEnum_SCC_UEAI_Lecture_EAlertLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAlertLevel_MetaData), NewProp_CurrentAlertLevel_MetaData) }; // 1839061676
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_AlertTimeout = { "AlertTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, AlertTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertTimeout_MetaData), NewProp_AlertTimeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CaptureRange = { "CaptureRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, CaptureRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureRange_MetaData), NewProp_CaptureRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_LastKnownPlayerLocation = { "LastKnownPlayerLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, LastKnownPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownPlayerLocation_MetaData), NewProp_LastKnownPlayerLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_TimeInCurrentAlertLevel = { "TimeInCurrentAlertLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, TimeInCurrentAlertLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeInCurrentAlertLevel_MetaData), NewProp_TimeInCurrentAlertLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CommunicationRange = { "CommunicationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, CommunicationRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationRange_MetaData), NewProp_CommunicationRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, TargetPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayer_MetaData), NewProp_TargetPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_AIClass = { "AIClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, AIClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIClass_MetaData), NewProp_AIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_GuardController = { "GuardController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_BaseGuard, GuardController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardController_MetaData), NewProp_GuardController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_BaseGuard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_PawnSensingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_DetectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_ViewAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_HearingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_SightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_PursuitSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CurrentAlertLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CurrentAlertLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_AlertTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CaptureRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_LastKnownPlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_TimeInCurrentAlertLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_CommunicationRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_TargetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_AIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_BaseGuard_Statics::NewProp_GuardController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseGuard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_BaseGuard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseGuard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGuardInterface_NoRegister, (int32)VTABLE_OFFSET(AEnemy_BaseGuard, IGuardInterface), false },  // 2687803091
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_BaseGuard_Statics::ClassParams = {
	&AEnemy_BaseGuard::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemy_BaseGuard_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseGuard_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_BaseGuard_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_BaseGuard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_BaseGuard()
{
	if (!Z_Registration_Info_UClass_AEnemy_BaseGuard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_BaseGuard.OuterSingleton, Z_Construct_UClass_AEnemy_BaseGuard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_BaseGuard.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AEnemy_BaseGuard>()
{
	return AEnemy_BaseGuard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_BaseGuard);
AEnemy_BaseGuard::~AEnemy_BaseGuard() {}
// End Class AEnemy_BaseGuard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAlertLevel_StaticEnum, TEXT("EAlertLevel"), &Z_Registration_Info_UEnum_EAlertLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1839061676U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_BaseGuard, AEnemy_BaseGuard::StaticClass, TEXT("AEnemy_BaseGuard"), &Z_Registration_Info_UClass_AEnemy_BaseGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_BaseGuard), 3634557644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_2930420802(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_BaseGuard_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
