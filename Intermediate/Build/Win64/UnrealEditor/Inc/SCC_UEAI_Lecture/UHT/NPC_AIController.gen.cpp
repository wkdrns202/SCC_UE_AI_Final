// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/NPC_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ANPC_AIController();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class ANPC_AIController
void ANPC_AIController::StaticRegisterNativesANPC_AIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC_AIController);
UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
{
	return ANPC_AIController::StaticClass();
}
struct Z_Construct_UClass_ANPC_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPC_AIController.h" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC_AIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC_AIController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComponent_MetaData), NewProp_BlackboardComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
	&ANPC_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANPC_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPC_AIController()
{
	if (!Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ANPC_AIController>()
{
	return ANPC_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
ANPC_AIController::~ANPC_AIController() {}
// End Class ANPC_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_NPC_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPC_AIController, ANPC_AIController::StaticClass, TEXT("ANPC_AIController"), &Z_Registration_Info_UClass_ANPC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC_AIController), 2726218853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_NPC_AIController_h_2090040359(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_NPC_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_NPC_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
