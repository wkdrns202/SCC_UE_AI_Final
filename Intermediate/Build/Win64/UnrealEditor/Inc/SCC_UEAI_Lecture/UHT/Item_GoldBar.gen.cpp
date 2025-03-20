// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Item_GoldBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_GoldBar() {}

// Begin Cross Module References
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ABaseItem();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AItem_GoldBar();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AItem_GoldBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AItem_GoldBar
void AItem_GoldBar::StaticRegisterNativesAItem_GoldBar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem_GoldBar);
UClass* Z_Construct_UClass_AItem_GoldBar_NoRegister()
{
	return AItem_GoldBar::StaticClass();
}
struct Z_Construct_UClass_AItem_GoldBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item_GoldBar.h" },
		{ "ModuleRelativePath", "Public/Item_GoldBar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_GoldBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItem_GoldBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_GoldBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_GoldBar_Statics::ClassParams = {
	&AItem_GoldBar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_GoldBar_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_GoldBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem_GoldBar()
{
	if (!Z_Registration_Info_UClass_AItem_GoldBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem_GoldBar.OuterSingleton, Z_Construct_UClass_AItem_GoldBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem_GoldBar.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AItem_GoldBar>()
{
	return AItem_GoldBar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_GoldBar);
AItem_GoldBar::~AItem_GoldBar() {}
// End Class AItem_GoldBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Item_GoldBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem_GoldBar, AItem_GoldBar::StaticClass, TEXT("AItem_GoldBar"), &Z_Registration_Info_UClass_AItem_GoldBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem_GoldBar), 3325922281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Item_GoldBar_h_2742499772(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Item_GoldBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Item_GoldBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
