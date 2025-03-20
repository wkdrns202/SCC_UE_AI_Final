// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/Enemy_AIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_AIController();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AEnemy_AIController Function OnTargetPerceptionUpdated
struct Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics
{
	struct Enemy_AIController_eventOnTargetPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_AIController_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_AIController_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_AIController, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::Enemy_AIController_eventOnTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::Enemy_AIController_eventOnTargetPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy_AIController::execOnTargetPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AEnemy_AIController Function OnTargetPerceptionUpdated

// Begin Class AEnemy_AIController
void AEnemy_AIController::StaticRegisterNativesAEnemy_AIController()
{
	UClass* Class = AEnemy_AIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetPerceptionUpdated", &AEnemy_AIController::execOnTargetPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_AIController);
UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister()
{
	return AEnemy_AIController::StaticClass();
}
struct Z_Construct_UClass_AEnemy_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy_AIController.h" },
		{ "ModuleRelativePath", "Public/Enemy_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HearingConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_AIController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 2054056549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_AIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_AIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_AIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_HearingConfig = { "HearingConfig", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_AIController, HearingConfig), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingConfig_MetaData), NewProp_HearingConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_HearingConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_AIController_Statics::ClassParams = {
	&AEnemy_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_AIController()
{
	if (!Z_Registration_Info_UClass_AEnemy_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_AIController.OuterSingleton, Z_Construct_UClass_AEnemy_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_AIController.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AEnemy_AIController>()
{
	return AEnemy_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_AIController);
AEnemy_AIController::~AEnemy_AIController() {}
// End Class AEnemy_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_AIController, AEnemy_AIController::StaticClass, TEXT("AEnemy_AIController"), &Z_Registration_Info_UClass_AEnemy_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_AIController), 4277507369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_1993815302(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_Enemy_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
