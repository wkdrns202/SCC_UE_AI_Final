// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/EEmotionalState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEmotionalState() {}

// Begin Cross Module References
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum EEmotionalState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmotionalState;
static UEnum* EEmotionalState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEmotionalState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEmotionalState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("EEmotionalState"));
	}
	return Z_Registration_Info_UEnum_EEmotionalState.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EEmotionalState>()
{
	return EEmotionalState_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Angry.DisplayName", "Angry" },
		{ "Angry.Name", "EEmotionalState::Angry" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Curious.DisplayName", "Curious" },
		{ "Curious.Name", "EEmotionalState::Curious" },
		{ "Happy.DisplayName", "Happy" },
		{ "Happy.Name", "EEmotionalState::Happy" },
		{ "ModuleRelativePath", "Public/EEmotionalState.h" },
		{ "Neutral.DisplayName", "Neutral" },
		{ "Neutral.Name", "EEmotionalState::Neutral" },
		{ "Sad.DisplayName", "Sad" },
		{ "Sad.Name", "EEmotionalState::Sad" },
		{ "Scared.DisplayName", "Scared" },
		{ "Scared.Name", "EEmotionalState::Scared" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEmotionalState::Sad", (int64)EEmotionalState::Sad },
		{ "EEmotionalState::Happy", (int64)EEmotionalState::Happy },
		{ "EEmotionalState::Curious", (int64)EEmotionalState::Curious },
		{ "EEmotionalState::Neutral", (int64)EEmotionalState::Neutral },
		{ "EEmotionalState::Scared", (int64)EEmotionalState::Scared },
		{ "EEmotionalState::Angry", (int64)EEmotionalState::Angry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"EEmotionalState",
	"EEmotionalState",
	Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState()
{
	if (!Z_Registration_Info_UEnum_EEmotionalState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmotionalState.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_EEmotionalState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEmotionalState.InnerSingleton;
}
// End Enum EEmotionalState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEmotionalState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEmotionalState_StaticEnum, TEXT("EEmotionalState"), &Z_Registration_Info_UEnum_EEmotionalState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3706305144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEmotionalState_h_1483141684(TEXT("/Script/SCC_UEAI_Lecture"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEmotionalState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEmotionalState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
