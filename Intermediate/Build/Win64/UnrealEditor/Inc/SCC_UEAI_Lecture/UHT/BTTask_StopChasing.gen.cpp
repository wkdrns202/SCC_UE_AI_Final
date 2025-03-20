// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/BTTask_StopChasing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_StopChasing() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UBTTask_StopChasing();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UBTTask_StopChasing_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class UBTTask_StopChasing
void UBTTask_StopChasing::StaticRegisterNativesUBTTask_StopChasing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_StopChasing);
UClass* Z_Construct_UClass_UBTTask_StopChasing_NoRegister()
{
	return UBTTask_StopChasing::StaticClass();
}
struct Z_Construct_UClass_UBTTask_StopChasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb6\x94\xec\xa0\x81\xec\x9d\x84 \xec\xa4\x91\xeb\x8b\xa8\xed\x95\x98\xeb\x8a\x94 \xeb\xb9\x84\xed\x97\xa4\xec\x9d\xb4\xeb\xb9\x84\xec\x96\xb4 \xed\x8a\xb8\xeb\xa6\xac \xed\x83\x9c\xec\x8a\xa4\xed\x81\xac\n */" },
#endif
		{ "IncludePath", "BTTask_StopChasing.h" },
		{ "ModuleRelativePath", "Public/BTTask_StopChasing.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb6\x94\xec\xa0\x81\xec\x9d\x84 \xec\xa4\x91\xeb\x8b\xa8\xed\x95\x98\xeb\x8a\x94 \xeb\xb9\x84\xed\x97\xa4\xec\x9d\xb4\xeb\xb9\x84\xec\x96\xb4 \xed\x8a\xb8\xeb\xa6\xac \xed\x83\x9c\xec\x8a\xa4\xed\x81\xac" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_StopChasing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_StopChasing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopChasing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_StopChasing_Statics::ClassParams = {
	&UBTTask_StopChasing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopChasing_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_StopChasing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_StopChasing()
{
	if (!Z_Registration_Info_UClass_UBTTask_StopChasing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_StopChasing.OuterSingleton, Z_Construct_UClass_UBTTask_StopChasing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_StopChasing.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UBTTask_StopChasing>()
{
	return UBTTask_StopChasing::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_StopChasing);
UBTTask_StopChasing::~UBTTask_StopChasing() {}
// End Class UBTTask_StopChasing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_StopChasing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_StopChasing, UBTTask_StopChasing::StaticClass, TEXT("UBTTask_StopChasing"), &Z_Registration_Info_UClass_UBTTask_StopChasing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_StopChasing), 3906692047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_StopChasing_h_895055542(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_StopChasing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_StopChasing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
