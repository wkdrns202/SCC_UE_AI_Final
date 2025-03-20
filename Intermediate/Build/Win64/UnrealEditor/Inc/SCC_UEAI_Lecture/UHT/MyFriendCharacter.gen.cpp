// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/MyFriendCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFriendCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AMyFriendCharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AMyFriendCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AMyFriendCharacter
void AMyFriendCharacter::StaticRegisterNativesAMyFriendCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyFriendCharacter);
UClass* Z_Construct_UClass_AMyFriendCharacter_NoRegister()
{
	return AMyFriendCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyFriendCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyFriendCharacter.h" },
		{ "ModuleRelativePath", "Public/MyFriendCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFriendCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyFriendCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFriendCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyFriendCharacter_Statics::ClassParams = {
	&AMyFriendCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFriendCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyFriendCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyFriendCharacter()
{
	if (!Z_Registration_Info_UClass_AMyFriendCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyFriendCharacter.OuterSingleton, Z_Construct_UClass_AMyFriendCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyFriendCharacter.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AMyFriendCharacter>()
{
	return AMyFriendCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFriendCharacter);
AMyFriendCharacter::~AMyFriendCharacter() {}
// End Class AMyFriendCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyFriendCharacter, AMyFriendCharacter::StaticClass, TEXT("AMyFriendCharacter"), &Z_Registration_Info_UClass_AMyFriendCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyFriendCharacter), 408257065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_2281138700(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_MyFriendCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
