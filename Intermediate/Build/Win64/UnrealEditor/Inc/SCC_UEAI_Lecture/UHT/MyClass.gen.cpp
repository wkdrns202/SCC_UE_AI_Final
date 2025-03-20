// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/MyClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyClass() {}

// Begin Cross Module References
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum ESearchStateInternal_Test
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESearchStateInternal_Test;
static UEnum* ESearchStateInternal_Test_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESearchStateInternal_Test.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESearchStateInternal_Test.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("ESearchStateInternal_Test"));
	}
	return Z_Registration_Info_UEnum_ESearchStateInternal_Test.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<ESearchStateInternal_Test>()
{
	return ESearchStateInternal_Test_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chasing.Name", "ESearchStateInternal_Test::Chasing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, UCLASS()\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdc\xba\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xdb\xbc\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "Idle.Name", "ESearchStateInternal_Test::Idle" },
		{ "Investigating.Name", "ESearchStateInternal_Test::Investigating" },
		{ "ModuleRelativePath", "Public/MyClass.h" },
		{ "Searching.Name", "ESearchStateInternal_Test::Searching" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, UCLASS()\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdc\xba\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xdb\xbc\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESearchStateInternal_Test::Idle", (int64)ESearchStateInternal_Test::Idle },
		{ "ESearchStateInternal_Test::Investigating", (int64)ESearchStateInternal_Test::Investigating },
		{ "ESearchStateInternal_Test::Chasing", (int64)ESearchStateInternal_Test::Chasing },
		{ "ESearchStateInternal_Test::Searching", (int64)ESearchStateInternal_Test::Searching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"ESearchStateInternal_Test",
	"ESearchStateInternal_Test",
	Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test()
{
	if (!Z_Registration_Info_UEnum_ESearchStateInternal_Test.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESearchStateInternal_Test.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_ESearchStateInternal_Test_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESearchStateInternal_Test.InnerSingleton;
}
// End Enum ESearchStateInternal_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyClass_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESearchStateInternal_Test_StaticEnum, TEXT("ESearchStateInternal_Test"), &Z_Registration_Info_UEnum_ESearchStateInternal_Test, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2942409169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyClass_h_194811677(TEXT("/Script/SCC_UEAI_Lecture"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyClass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyClass_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
