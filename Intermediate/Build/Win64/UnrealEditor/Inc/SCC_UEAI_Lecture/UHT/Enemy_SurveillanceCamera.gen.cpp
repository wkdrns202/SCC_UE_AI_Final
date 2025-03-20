// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Enemy_SurveillanceCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_SurveillanceCamera() {}

// Begin Cross Module References
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_BaseGuard();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_SurveillanceCamera();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_SurveillanceCamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AEnemy_SurveillanceCamera
void AEnemy_SurveillanceCamera::StaticRegisterNativesAEnemy_SurveillanceCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_SurveillanceCamera);
UClass* Z_Construct_UClass_AEnemy_SurveillanceCamera_NoRegister()
{
	return AEnemy_SurveillanceCamera::StaticClass();
}
struct Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_SurveillanceCamera.h" },
		{ "ModuleRelativePath", "Public/Enemy_SurveillanceCamera.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_SurveillanceCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy_BaseGuard,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics::ClassParams = {
	&AEnemy_SurveillanceCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_SurveillanceCamera()
{
	if (!Z_Registration_Info_UClass_AEnemy_SurveillanceCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_SurveillanceCamera.OuterSingleton, Z_Construct_UClass_AEnemy_SurveillanceCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_SurveillanceCamera.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AEnemy_SurveillanceCamera>()
{
	return AEnemy_SurveillanceCamera::StaticClass();
}
AEnemy_SurveillanceCamera::AEnemy_SurveillanceCamera() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_SurveillanceCamera);
AEnemy_SurveillanceCamera::~AEnemy_SurveillanceCamera() {}
// End Class AEnemy_SurveillanceCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_SurveillanceCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_SurveillanceCamera, AEnemy_SurveillanceCamera::StaticClass, TEXT("AEnemy_SurveillanceCamera"), &Z_Registration_Info_UClass_AEnemy_SurveillanceCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_SurveillanceCamera), 2028555944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_SurveillanceCamera_h_856168059(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_SurveillanceCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_SurveillanceCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
