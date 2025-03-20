// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/NPCAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ANPCAIController();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ANPCAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class ANPCAIController
void ANPCAIController::StaticRegisterNativesANPCAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCAIController);
UClass* Z_Construct_UClass_ANPCAIController_NoRegister()
{
	return ANPCAIController::StaticClass();
}
struct Z_Construct_UClass_ANPCAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPCAIController.h" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPCAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCAIController_Statics::ClassParams = {
	&ANPCAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCAIController()
{
	if (!Z_Registration_Info_UClass_ANPCAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCAIController.OuterSingleton, Z_Construct_UClass_ANPCAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCAIController.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ANPCAIController>()
{
	return ANPCAIController::StaticClass();
}
ANPCAIController::ANPCAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCAIController);
ANPCAIController::~ANPCAIController() {}
// End Class ANPCAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_NPCAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCAIController, ANPCAIController::StaticClass, TEXT("ANPCAIController"), &Z_Registration_Info_UClass_ANPCAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCAIController), 4272181207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_NPCAIController_h_3011508899(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_NPCAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_NPCAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
