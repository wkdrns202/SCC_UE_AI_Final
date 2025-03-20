// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Enemy_PoliceGuard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_PoliceGuard() {}

// Begin Cross Module References
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_BaseGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_PoliceGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_PoliceGuard_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AEnemy_PoliceGuard
void AEnemy_PoliceGuard::StaticRegisterNativesAEnemy_PoliceGuard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_PoliceGuard);
UClass* Z_Construct_UClass_AEnemy_PoliceGuard_NoRegister()
{
	return AEnemy_PoliceGuard::StaticClass();
}
struct Z_Construct_UClass_AEnemy_PoliceGuard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_PoliceGuard.h" },
		{ "ModuleRelativePath", "Public/Enemy_PoliceGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Police Feature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI PoliceGuard\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb0\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_PoliceGuard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI PoliceGuard\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb0\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRecoveryRate_MetaData[] = {
		{ "Category", "Police Feature" },
		{ "ModuleRelativePath", "Public/Enemy_PoliceGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "Police Feature" },
		{ "ModuleRelativePath", "Public/Enemy_PoliceGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Police Feature" },
		{ "ModuleRelativePath", "Public/Enemy_PoliceGuard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_age_MetaData[] = {
		{ "Category", "Police Feature" },
		{ "ModuleRelativePath", "Public/Enemy_PoliceGuard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRecoveryRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_age;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_PoliceGuard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_PoliceGuard, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_StaminaRecoveryRate = { "StaminaRecoveryRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_PoliceGuard, StaminaRecoveryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRecoveryRate_MetaData), NewProp_StaminaRecoveryRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_PoliceGuard, StaminaDrainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDrainRate_MetaData), NewProp_StaminaDrainRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_PoliceGuard, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_age = { "age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_PoliceGuard, age), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_age_MetaData), NewProp_age_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_PoliceGuard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_StaminaRecoveryRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_StaminaDrainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_PoliceGuard_Statics::NewProp_age,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_PoliceGuard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_PoliceGuard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy_BaseGuard,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_PoliceGuard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_PoliceGuard_Statics::ClassParams = {
	&AEnemy_PoliceGuard::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemy_PoliceGuard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_PoliceGuard_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_PoliceGuard_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_PoliceGuard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_PoliceGuard()
{
	if (!Z_Registration_Info_UClass_AEnemy_PoliceGuard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_PoliceGuard.OuterSingleton, Z_Construct_UClass_AEnemy_PoliceGuard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_PoliceGuard.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AEnemy_PoliceGuard>()
{
	return AEnemy_PoliceGuard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_PoliceGuard);
AEnemy_PoliceGuard::~AEnemy_PoliceGuard() {}
// End Class AEnemy_PoliceGuard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PoliceGuard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_PoliceGuard, AEnemy_PoliceGuard::StaticClass, TEXT("AEnemy_PoliceGuard"), &Z_Registration_Info_UClass_AEnemy_PoliceGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_PoliceGuard), 1944978961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PoliceGuard_h_4078972991(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PoliceGuard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Enemy_PoliceGuard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
