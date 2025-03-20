// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/SCC_UEAI_LectureGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCC_UEAI_LectureGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ASCC_UEAI_LectureGameMode();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ASCC_UEAI_LectureGameMode_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UGameRulesInterface_NoRegister();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature();
SCC_UEAI_LECTURE_API UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Delegate FOnPlayerCapturedSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics
{
	struct _Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms
	{
		APawn* CapturedPlayer;
		AActor* Captor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd->\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xce\xb8\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xc2\xb0\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n// \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd->\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xce\xb8\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xc2\xb0\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturedPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Captor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::NewProp_CapturedPlayer = { "CapturedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms, CapturedPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::NewProp_Captor = { "Captor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms, Captor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::NewProp_CapturedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::NewProp_Captor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnPlayerCapturedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerCapturedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerCapturedSignature, APawn* CapturedPlayer, AActor* Captor)
{
	struct _Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms
	{
		APawn* CapturedPlayer;
		AActor* Captor;
	};
	_Script_SCC_UEAI_Lecture_eventOnPlayerCapturedSignature_Parms Parms;
	Parms.CapturedPlayer=CapturedPlayer;
	Parms.Captor=Captor;
	OnPlayerCapturedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerCapturedSignature

// Begin Delegate FOnPlayerDetectedSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics
{
	struct _Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms
	{
		APawn* DetectedPlayer;
		AActor* Detector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Detector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::NewProp_DetectedPlayer = { "DetectedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms, DetectedPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::NewProp_Detector = { "Detector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms, Detector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::NewProp_DetectedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::NewProp_Detector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnPlayerDetectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDetectedSignature, APawn* DetectedPlayer, AActor* Detector)
{
	struct _Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms
	{
		APawn* DetectedPlayer;
		AActor* Detector;
	};
	_Script_SCC_UEAI_Lecture_eventOnPlayerDetectedSignature_Parms Parms;
	Parms.DetectedPlayer=DetectedPlayer;
	Parms.Detector=Detector;
	OnPlayerDetectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerDetectedSignature

// Begin Delegate FOnAlertLevelChangedSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics
{
	struct _Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms
	{
		AActor* Guard;
		uint8 NewAlertLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Guard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAlertLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::NewProp_Guard = { "Guard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms, Guard), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::NewProp_NewAlertLevel = { "NewAlertLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms, NewAlertLevel), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::NewProp_Guard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::NewProp_NewAlertLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnAlertLevelChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAlertLevelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAlertLevelChangedSignature, AActor* Guard, uint8 NewAlertLevel)
{
	struct _Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms
	{
		AActor* Guard;
		uint8 NewAlertLevel;
	};
	_Script_SCC_UEAI_Lecture_eventOnAlertLevelChangedSignature_Parms Parms;
	Parms.Guard=Guard;
	Parms.NewAlertLevel=NewAlertLevel;
	OnAlertLevelChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAlertLevelChangedSignature

// Begin Delegate FOnCoinCollectedSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics
{
	struct _Script_SCC_UEAI_Lecture_eventOnCoinCollectedSignature_Parms
	{
		int32 FloorNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::NewProp_FloorNumber = { "FloorNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnCoinCollectedSignature_Parms, FloorNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::NewProp_FloorNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnCoinCollectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnCoinCollectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnCoinCollectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCoinCollectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCoinCollectedSignature, int32 FloorNumber)
{
	struct _Script_SCC_UEAI_Lecture_eventOnCoinCollectedSignature_Parms
	{
		int32 FloorNumber;
	};
	_Script_SCC_UEAI_Lecture_eventOnCoinCollectedSignature_Parms Parms;
	Parms.FloorNumber=FloorNumber;
	OnCoinCollectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCoinCollectedSignature

// Begin Delegate FOnFloorCoinCollectedSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics
{
	struct _Script_SCC_UEAI_Lecture_eventOnFloorCoinCollectedSignature_Parms
	{
		int32 FloorNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::NewProp_FloorNumber = { "FloorNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnFloorCoinCollectedSignature_Parms, FloorNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::NewProp_FloorNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnFloorCoinCollectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnFloorCoinCollectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnFloorCoinCollectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFloorCoinCollectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnFloorCoinCollectedSignature, int32 FloorNumber)
{
	struct _Script_SCC_UEAI_Lecture_eventOnFloorCoinCollectedSignature_Parms
	{
		int32 FloorNumber;
	};
	_Script_SCC_UEAI_Lecture_eventOnFloorCoinCollectedSignature_Parms Parms;
	Parms.FloorNumber=FloorNumber;
	OnFloorCoinCollectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFloorCoinCollectedSignature

// Begin Delegate FOnTimeUpdatedSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_SCC_UEAI_Lecture_eventOnTimeUpdatedSignature_Parms
	{
		float RemainingTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SCC_UEAI_Lecture_eventOnTimeUpdatedSignature_Parms, RemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnTimeUpdatedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnTimeUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::_Script_SCC_UEAI_Lecture_eventOnTimeUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimeUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTimeUpdatedSignature, float RemainingTime)
{
	struct _Script_SCC_UEAI_Lecture_eventOnTimeUpdatedSignature_Parms
	{
		float RemainingTime;
	};
	_Script_SCC_UEAI_Lecture_eventOnTimeUpdatedSignature_Parms Parms;
	Parms.RemainingTime=RemainingTime;
	OnTimeUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTimeUpdatedSignature

// Begin Delegate FOnGameOverSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnGameOverSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameOverSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverSignature)
{
	OnGameOverSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameOverSignature

// Begin Delegate FOnGameWinSignature
struct Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture, nullptr, "OnGameWinSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameWinSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGameWinSignature)
{
	OnGameWinSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameWinSignature

// Begin Class ASCC_UEAI_LectureGameMode Function CheckGameOverCondition
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics
{
	struct SCC_UEAI_LectureGameMode_eventCheckGameOverCondition_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SCC_UEAI_LectureGameMode_eventCheckGameOverCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SCC_UEAI_LectureGameMode_eventCheckGameOverCondition_Parms), &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "CheckGameOverCondition", nullptr, nullptr, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::SCC_UEAI_LectureGameMode_eventCheckGameOverCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::SCC_UEAI_LectureGameMode_eventCheckGameOverCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execCheckGameOverCondition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckGameOverCondition();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function CheckGameOverCondition

// Begin Class ASCC_UEAI_LectureGameMode Function CheckWinCondition
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics
{
	struct SCC_UEAI_LectureGameMode_eventCheckWinCondition_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SCC_UEAI_LectureGameMode_eventCheckWinCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SCC_UEAI_LectureGameMode_eventCheckWinCondition_Parms), &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "CheckWinCondition", nullptr, nullptr, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::SCC_UEAI_LectureGameMode_eventCheckWinCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::SCC_UEAI_LectureGameMode_eventCheckWinCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execCheckWinCondition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckWinCondition();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function CheckWinCondition

// Begin Class ASCC_UEAI_LectureGameMode Function CollectCoin
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics
{
	struct SCC_UEAI_LectureGameMode_eventCollectCoin_Parms
	{
		int32 FloorNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::NewProp_FloorNumber = { "FloorNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCC_UEAI_LectureGameMode_eventCollectCoin_Parms, FloorNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::NewProp_FloorNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "CollectCoin", nullptr, nullptr, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::SCC_UEAI_LectureGameMode_eventCollectCoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::SCC_UEAI_LectureGameMode_eventCollectCoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execCollectCoin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FloorNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectCoin(Z_Param_FloorNumber);
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function CollectCoin

// Begin Class ASCC_UEAI_LectureGameMode Function NotifyFloorChange
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics
{
	struct SCC_UEAI_LectureGameMode_eventNotifyFloorChange_Parms
	{
		int32 NewFloor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd(\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd(\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewFloor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::NewProp_NewFloor = { "NewFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCC_UEAI_LectureGameMode_eventNotifyFloorChange_Parms, NewFloor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::NewProp_NewFloor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "NotifyFloorChange", nullptr, nullptr, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::SCC_UEAI_LectureGameMode_eventNotifyFloorChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::SCC_UEAI_LectureGameMode_eventNotifyFloorChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execNotifyFloorChange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewFloor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyFloorChange(Z_Param_NewFloor);
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function NotifyFloorChange

// Begin Class ASCC_UEAI_LectureGameMode Function QuitGame
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function QuitGame

// Begin Class ASCC_UEAI_LectureGameMode Function RemoveCurrentWidget
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "RemoveCurrentWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execRemoveCurrentWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCurrentWidget();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function RemoveCurrentWidget

// Begin Class ASCC_UEAI_LectureGameMode Function ShowGameOverWidget
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "ShowGameOverWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execShowGameOverWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameOverWidget();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function ShowGameOverWidget

// Begin Class ASCC_UEAI_LectureGameMode Function ShowGameStartWidget
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI \xc7\xa5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xc7\xa5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "ShowGameStartWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execShowGameStartWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameStartWidget();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function ShowGameStartWidget

// Begin Class ASCC_UEAI_LectureGameMode Function TriggerGameOver
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "TriggerGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execTriggerGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerGameOver();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function TriggerGameOver

// Begin Class ASCC_UEAI_LectureGameMode Function TriggerGameWin
struct Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCC_UEAI_LectureGameMode, nullptr, "TriggerGameWin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASCC_UEAI_LectureGameMode::execTriggerGameWin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerGameWin();
	P_NATIVE_END;
}
// End Class ASCC_UEAI_LectureGameMode Function TriggerGameWin

// Begin Class ASCC_UEAI_LectureGameMode
void ASCC_UEAI_LectureGameMode::StaticRegisterNativesASCC_UEAI_LectureGameMode()
{
	UClass* Class = ASCC_UEAI_LectureGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckGameOverCondition", &ASCC_UEAI_LectureGameMode::execCheckGameOverCondition },
		{ "CheckWinCondition", &ASCC_UEAI_LectureGameMode::execCheckWinCondition },
		{ "CollectCoin", &ASCC_UEAI_LectureGameMode::execCollectCoin },
		{ "NotifyFloorChange", &ASCC_UEAI_LectureGameMode::execNotifyFloorChange },
		{ "QuitGame", &ASCC_UEAI_LectureGameMode::execQuitGame },
		{ "RemoveCurrentWidget", &ASCC_UEAI_LectureGameMode::execRemoveCurrentWidget },
		{ "ShowGameOverWidget", &ASCC_UEAI_LectureGameMode::execShowGameOverWidget },
		{ "ShowGameStartWidget", &ASCC_UEAI_LectureGameMode::execShowGameStartWidget },
		{ "TriggerGameOver", &ASCC_UEAI_LectureGameMode::execTriggerGameOver },
		{ "TriggerGameWin", &ASCC_UEAI_LectureGameMode::execTriggerGameWin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCC_UEAI_LectureGameMode);
UClass* Z_Construct_UClass_ASCC_UEAI_LectureGameMode_NoRegister()
{
	return ASCC_UEAI_LectureGameMode::StaticClass();
}
struct Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SCC_UEAI_LectureGameMode.h" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGameTime_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCaptureCount_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCaptureCount_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xc8\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xc8\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalFloors_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCoins_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGoldBarCollected_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b2FCoinCollected_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GoldBar \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GoldBar \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAllCoinsCollected_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoins_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerCaptured_MetaData[] = {
		{ "Category", "Game Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDetected_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAlertLevelChanged_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCoinCollected_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFloorCoinCollected_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeUpdated_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameOver_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameWin_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameStartWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI \n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameStartWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI\n" },
#endif
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerWin_MetaData[] = {
		{ "Category", "SCC_UEAI_LectureGameMode" },
		{ "ModuleRelativePath", "SCC_UEAI_LectureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGameTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCaptureCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCaptureCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFloors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCoins;
	static void NewProp_bIsGoldBarCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGoldBarCollected;
	static void NewProp_b2FCoinCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_b2FCoinCollected;
	static void NewProp_bIsAllCoinsCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAllCoinsCollected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoins;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerCaptured;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDetected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAlertLevelChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCoinCollected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFloorCoinCollected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameOver;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameWin;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameStartWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameStartWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static void NewProp_bIsPlayerWin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerWin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckGameOverCondition, "CheckGameOverCondition" }, // 53615132
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CheckWinCondition, "CheckWinCondition" }, // 2983232957
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_CollectCoin, "CollectCoin" }, // 2505042783
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_NotifyFloorChange, "NotifyFloorChange" }, // 3189789922
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_QuitGame, "QuitGame" }, // 2782850866
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_RemoveCurrentWidget, "RemoveCurrentWidget" }, // 1526458552
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameOverWidget, "ShowGameOverWidget" }, // 2508767059
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_ShowGameStartWidget, "ShowGameStartWidget" }, // 3207333740
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameOver, "TriggerGameOver" }, // 1375961382
		{ &Z_Construct_UFunction_ASCC_UEAI_LectureGameMode_TriggerGameWin, "TriggerGameWin" }, // 2700580452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCC_UEAI_LectureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_MaxGameTime = { "MaxGameTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, MaxGameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGameTime_MetaData), NewProp_MaxGameTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_MaxCaptureCount = { "MaxCaptureCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, MaxCaptureCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCaptureCount_MetaData), NewProp_MaxCaptureCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_CurrentCaptureCount = { "CurrentCaptureCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, CurrentCaptureCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCaptureCount_MetaData), NewProp_CurrentCaptureCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_TotalFloors = { "TotalFloors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, TotalFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalFloors_MetaData), NewProp_TotalFloors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_TotalCoins = { "TotalCoins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, TotalCoins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCoins_MetaData), NewProp_TotalCoins_MetaData) };
void Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsGoldBarCollected_SetBit(void* Obj)
{
	((ASCC_UEAI_LectureGameMode*)Obj)->bIsGoldBarCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsGoldBarCollected = { "bIsGoldBarCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAI_LectureGameMode), &Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsGoldBarCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGoldBarCollected_MetaData), NewProp_bIsGoldBarCollected_MetaData) };
void Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_b2FCoinCollected_SetBit(void* Obj)
{
	((ASCC_UEAI_LectureGameMode*)Obj)->b2FCoinCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_b2FCoinCollected = { "b2FCoinCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAI_LectureGameMode), &Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_b2FCoinCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b2FCoinCollected_MetaData), NewProp_b2FCoinCollected_MetaData) };
void Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsAllCoinsCollected_SetBit(void* Obj)
{
	((ASCC_UEAI_LectureGameMode*)Obj)->bIsAllCoinsCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsAllCoinsCollected = { "bIsAllCoinsCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAI_LectureGameMode), &Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsAllCoinsCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAllCoinsCollected_MetaData), NewProp_bIsAllCoinsCollected_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_CollectedCoins = { "CollectedCoins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, CollectedCoins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoins_MetaData), NewProp_CollectedCoins_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnPlayerCaptured = { "OnPlayerCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnPlayerCaptured), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerCapturedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerCaptured_MetaData), NewProp_OnPlayerCaptured_MetaData) }; // 1751255028
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnPlayerDetected = { "OnPlayerDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnPlayerDetected), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnPlayerDetectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDetected_MetaData), NewProp_OnPlayerDetected_MetaData) }; // 3647544392
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnAlertLevelChanged = { "OnAlertLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnAlertLevelChanged), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnAlertLevelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAlertLevelChanged_MetaData), NewProp_OnAlertLevelChanged_MetaData) }; // 2374647278
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnCoinCollected = { "OnCoinCollected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnCoinCollected), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnCoinCollectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCoinCollected_MetaData), NewProp_OnCoinCollected_MetaData) }; // 1193014192
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnFloorCoinCollected = { "OnFloorCoinCollected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnFloorCoinCollected), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnFloorCoinCollectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFloorCoinCollected_MetaData), NewProp_OnFloorCoinCollected_MetaData) }; // 3331299409
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnTimeUpdated = { "OnTimeUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnTimeUpdated), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnTimeUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeUpdated_MetaData), NewProp_OnTimeUpdated_MetaData) }; // 2491605950
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnGameOver = { "OnGameOver", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnGameOver), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameOverSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameOver_MetaData), NewProp_OnGameOver_MetaData) }; // 3940280993
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnGameWin = { "OnGameWin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, OnGameWin), Z_Construct_UDelegateFunction_SCC_UEAI_Lecture_OnGameWinSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameWin_MetaData), NewProp_OnGameWin_MetaData) }; // 3334077520
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameStartWidgetClass = { "GameStartWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, GameStartWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameStartWidgetClass_MetaData), NewProp_GameStartWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameStartWidget = { "GameStartWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, GameStartWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameStartWidget_MetaData), NewProp_GameStartWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidgetClass_MetaData), NewProp_GameOverWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameOverWidget = { "GameOverWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, GameOverWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidget_MetaData), NewProp_GameOverWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCC_UEAI_LectureGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
void Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsPlayerWin_SetBit(void* Obj)
{
	((ASCC_UEAI_LectureGameMode*)Obj)->bIsPlayerWin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsPlayerWin = { "bIsPlayerWin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCC_UEAI_LectureGameMode), &Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsPlayerWin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerWin_MetaData), NewProp_bIsPlayerWin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_MaxGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_MaxCaptureCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_CurrentCaptureCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_TotalFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_TotalCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsGoldBarCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_b2FCoinCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsAllCoinsCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_CollectedCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnPlayerCaptured,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnPlayerDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnAlertLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnCoinCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnFloorCoinCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnTimeUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnGameOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_OnGameWin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameStartWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameStartWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameOverWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_GameOverWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::NewProp_bIsPlayerWin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameRulesInterface_NoRegister, (int32)VTABLE_OFFSET(ASCC_UEAI_LectureGameMode, IGameRulesInterface), false },  // 348219436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::ClassParams = {
	&ASCC_UEAI_LectureGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASCC_UEAI_LectureGameMode()
{
	if (!Z_Registration_Info_UClass_ASCC_UEAI_LectureGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCC_UEAI_LectureGameMode.OuterSingleton, Z_Construct_UClass_ASCC_UEAI_LectureGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASCC_UEAI_LectureGameMode.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ASCC_UEAI_LectureGameMode>()
{
	return ASCC_UEAI_LectureGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASCC_UEAI_LectureGameMode);
ASCC_UEAI_LectureGameMode::~ASCC_UEAI_LectureGameMode() {}
// End Class ASCC_UEAI_LectureGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASCC_UEAI_LectureGameMode, ASCC_UEAI_LectureGameMode::StaticClass, TEXT("ASCC_UEAI_LectureGameMode"), &Z_Registration_Info_UClass_ASCC_UEAI_LectureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCC_UEAI_LectureGameMode), 2345565798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_453800503(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_SCC_UEAI_LectureGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
