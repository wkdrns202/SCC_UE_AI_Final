// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Item_Coin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_Coin() {}

// Begin Cross Module References
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ABaseItem();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AItem_Coin();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AItem_Coin_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AItem_Coin
void AItem_Coin::StaticRegisterNativesAItem_Coin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem_Coin);
UClass* Z_Construct_UClass_AItem_Coin_NoRegister()
{
	return AItem_Coin::StaticClass();
}
struct Z_Construct_UClass_AItem_Coin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item_Coin.h" },
		{ "ModuleRelativePath", "Public/Item_Coin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOn2F_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "Public/Item_Coin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondFloor_MetaData[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/Item_Coin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsOn2F_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOn2F;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondFloor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_Coin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AItem_Coin_Statics::NewProp_bIsOn2F_SetBit(void* Obj)
{
	((AItem_Coin*)Obj)->bIsOn2F = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Coin_Statics::NewProp_bIsOn2F = { "bIsOn2F", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AItem_Coin), &Z_Construct_UClass_AItem_Coin_Statics::NewProp_bIsOn2F_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOn2F_MetaData), NewProp_bIsOn2F_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Coin_Statics::NewProp_SecondFloor = { "SecondFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem_Coin, SecondFloor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondFloor_MetaData), NewProp_SecondFloor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Coin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Coin_Statics::NewProp_bIsOn2F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Coin_Statics::NewProp_SecondFloor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Coin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItem_Coin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Coin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Coin_Statics::ClassParams = {
	&AItem_Coin::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItem_Coin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Coin_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Coin_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Coin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem_Coin()
{
	if (!Z_Registration_Info_UClass_AItem_Coin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem_Coin.OuterSingleton, Z_Construct_UClass_AItem_Coin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem_Coin.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AItem_Coin>()
{
	return AItem_Coin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_Coin);
AItem_Coin::~AItem_Coin() {}
// End Class AItem_Coin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Item_Coin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem_Coin, AItem_Coin::StaticClass, TEXT("AItem_Coin"), &Z_Registration_Info_UClass_AItem_Coin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem_Coin), 4177833055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Item_Coin_h_4051487168(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Item_Coin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_Item_Coin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
