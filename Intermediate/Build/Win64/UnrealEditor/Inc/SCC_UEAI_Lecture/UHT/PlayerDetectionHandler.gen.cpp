// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/PlayerDetectionHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDetectionHandler() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_APlayerDetectionHandler();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_APlayerDetectionHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class APlayerDetectionHandler
void APlayerDetectionHandler::StaticRegisterNativesAPlayerDetectionHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerDetectionHandler);
UClass* Z_Construct_UClass_APlayerDetectionHandler_NoRegister()
{
	return APlayerDetectionHandler::StaticClass();
}
struct Z_Construct_UClass_APlayerDetectionHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 AI \xed\x83\x90\xec\xa7\x80\xeb\xa5\xbc \xec\xa2\x85\xeb\xa3\x8c\xed\x95\x98\xeb\x8a\x94 \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xec\xb2\x98\xeb\xa6\xac\xed\x95\x98\xeb\x8a\x94 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n */" },
#endif
		{ "IncludePath", "PlayerDetectionHandler.h" },
		{ "ModuleRelativePath", "Public/PlayerDetectionHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 AI \xed\x83\x90\xec\xa7\x80\xeb\xa5\xbc \xec\xa2\x85\xeb\xa3\x8c\xed\x95\x98\xeb\x8a\x94 \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xec\xb2\x98\xeb\xa6\xac\xed\x95\x98\xeb\x8a\x94 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerDetectionHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerDetectionHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerDetectionHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerDetectionHandler_Statics::ClassParams = {
	&APlayerDetectionHandler::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerDetectionHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerDetectionHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerDetectionHandler()
{
	if (!Z_Registration_Info_UClass_APlayerDetectionHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerDetectionHandler.OuterSingleton, Z_Construct_UClass_APlayerDetectionHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerDetectionHandler.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<APlayerDetectionHandler>()
{
	return APlayerDetectionHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerDetectionHandler);
APlayerDetectionHandler::~APlayerDetectionHandler() {}
// End Class APlayerDetectionHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_PlayerDetectionHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerDetectionHandler, APlayerDetectionHandler::StaticClass, TEXT("APlayerDetectionHandler"), &Z_Registration_Info_UClass_APlayerDetectionHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerDetectionHandler), 3737346767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_PlayerDetectionHandler_h_2011598725(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_PlayerDetectionHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_PlayerDetectionHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
