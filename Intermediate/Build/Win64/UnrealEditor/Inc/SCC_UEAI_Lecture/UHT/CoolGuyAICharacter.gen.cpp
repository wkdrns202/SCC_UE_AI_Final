// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/CoolGuyAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoolGuyAICharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ACoolGuyAICharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ACoolGuyAICharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class ACoolGuyAICharacter
void ACoolGuyAICharacter::StaticRegisterNativesACoolGuyAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoolGuyAICharacter);
UClass* Z_Construct_UClass_ACoolGuyAICharacter_NoRegister()
{
	return ACoolGuyAICharacter::StaticClass();
}
struct Z_Construct_UClass_ACoolGuyAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CoolGuyAICharacter.h" },
		{ "ModuleRelativePath", "Public/CoolGuyAICharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoolGuyAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoolGuyAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoolGuyAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoolGuyAICharacter_Statics::ClassParams = {
	&ACoolGuyAICharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoolGuyAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoolGuyAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoolGuyAICharacter()
{
	if (!Z_Registration_Info_UClass_ACoolGuyAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoolGuyAICharacter.OuterSingleton, Z_Construct_UClass_ACoolGuyAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoolGuyAICharacter.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ACoolGuyAICharacter>()
{
	return ACoolGuyAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoolGuyAICharacter);
ACoolGuyAICharacter::~ACoolGuyAICharacter() {}
// End Class ACoolGuyAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoolGuyAICharacter, ACoolGuyAICharacter::StaticClass, TEXT("ACoolGuyAICharacter"), &Z_Registration_Info_UClass_ACoolGuyAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoolGuyAICharacter), 2543707336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAICharacter_h_509197793(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_CoolGuyAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
