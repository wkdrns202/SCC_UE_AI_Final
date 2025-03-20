// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/RVO_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVO_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ARVO_Character();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ARVO_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class ARVO_Character Function MoveToTarget
struct Z_Construct_UFunction_ARVO_Character_MoveToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/RVO_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARVO_Character_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARVO_Character, nullptr, "MoveToTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARVO_Character_MoveToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARVO_Character_MoveToTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARVO_Character_MoveToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARVO_Character_MoveToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARVO_Character::execMoveToTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToTarget();
	P_NATIVE_END;
}
// End Class ARVO_Character Function MoveToTarget

// Begin Class ARVO_Character Function SetRVOAvoidanceEnabled
struct Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics
{
	struct RVO_Character_eventSetRVOAvoidanceEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RVO \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad/\xef\xbf\xbd\xef\xbf\xbd\xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/RVO_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RVO \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad/\xef\xbf\xbd\xef\xbf\xbd\xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((RVO_Character_eventSetRVOAvoidanceEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVO_Character_eventSetRVOAvoidanceEnabled_Parms), &Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARVO_Character, nullptr, "SetRVOAvoidanceEnabled", nullptr, nullptr, Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::RVO_Character_eventSetRVOAvoidanceEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::RVO_Character_eventSetRVOAvoidanceEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARVO_Character::execSetRVOAvoidanceEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRVOAvoidanceEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class ARVO_Character Function SetRVOAvoidanceEnabled

// Begin Class ARVO_Character
void ARVO_Character::StaticRegisterNativesARVO_Character()
{
	UClass* Class = ARVO_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveToTarget", &ARVO_Character::execMoveToTarget },
		{ "SetRVOAvoidanceEnabled", &ARVO_Character::execSetRVOAvoidanceEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARVO_Character);
UClass* Z_Construct_UClass_ARVO_Character_NoRegister()
{
	return ARVO_Character::StaticClass();
}
struct Z_Construct_UClass_ARVO_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RVO_Character.h" },
		{ "ModuleRelativePath", "Public/RVO_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "AI Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/RVO_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceRadius_MetaData[] = {
		{ "Category", "RVO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RVO \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/RVO_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RVO \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceWeight_MetaData[] = {
		{ "Category", "RVO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RVO \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/RVO_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RVO \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARVO_Character_MoveToTarget, "MoveToTarget" }, // 894868129
		{ &Z_Construct_UFunction_ARVO_Character_SetRVOAvoidanceEnabled, "SetRVOAvoidanceEnabled" }, // 1381028770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARVO_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARVO_Character_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARVO_Character, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARVO_Character_Statics::NewProp_AvoidanceRadius = { "AvoidanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARVO_Character, AvoidanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceRadius_MetaData), NewProp_AvoidanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARVO_Character_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARVO_Character, AvoidanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceWeight_MetaData), NewProp_AvoidanceWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARVO_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARVO_Character_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARVO_Character_Statics::NewProp_AvoidanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARVO_Character_Statics::NewProp_AvoidanceWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARVO_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARVO_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARVO_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARVO_Character_Statics::ClassParams = {
	&ARVO_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARVO_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARVO_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARVO_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ARVO_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARVO_Character()
{
	if (!Z_Registration_Info_UClass_ARVO_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARVO_Character.OuterSingleton, Z_Construct_UClass_ARVO_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARVO_Character.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ARVO_Character>()
{
	return ARVO_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARVO_Character);
ARVO_Character::~ARVO_Character() {}
// End Class ARVO_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARVO_Character, ARVO_Character::StaticClass, TEXT("ARVO_Character"), &Z_Registration_Info_UClass_ARVO_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARVO_Character), 2641165105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_128318073(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_RVO_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
