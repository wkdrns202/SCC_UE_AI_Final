// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/EEnumTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEnumTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UEEnumTest();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UEEnumTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class UEEnumTest
void UEEnumTest::StaticRegisterNativesUEEnumTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEEnumTest);
UClass* Z_Construct_UClass_UEEnumTest_NoRegister()
{
	return UEEnumTest::StaticClass();
}
struct Z_Construct_UClass_UEEnumTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EEnumTest.h" },
		{ "ModuleRelativePath", "Public/EEnumTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEEnumTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEEnumTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEEnumTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEEnumTest_Statics::ClassParams = {
	&UEEnumTest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEEnumTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UEEnumTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEEnumTest()
{
	if (!Z_Registration_Info_UClass_UEEnumTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEEnumTest.OuterSingleton, Z_Construct_UClass_UEEnumTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEEnumTest.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UEEnumTest>()
{
	return UEEnumTest::StaticClass();
}
UEEnumTest::UEEnumTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEEnumTest);
UEEnumTest::~UEEnumTest() {}
// End Class UEEnumTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEnumTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEEnumTest, UEEnumTest::StaticClass, TEXT("UEEnumTest"), &Z_Registration_Info_UClass_UEEnumTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEEnumTest), 1524742885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEnumTest_h_1878041405(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEnumTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_EEnumTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
