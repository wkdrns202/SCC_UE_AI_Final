// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/InteractiveBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AInteractiveBox();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AInteractiveBox_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UInteractiveObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class AInteractiveBox Function Interact
struct InteractiveBox_eventInteract_Parms
{
	AActor* Interactor;
};
static const FName NAME_AInteractiveBox_Interact = FName(TEXT("Interact"));
void AInteractiveBox::Interact(AActor* Interactor)
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractiveBox_Interact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractiveBox_eventInteract_Parms Parms;
		Parms.Interactor=Interactor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Interact_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_AInteractiveBox_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae)\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveBox_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveBox_eventInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveBox_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveBox_Interact_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveBox_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveBox_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveBox, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_AInteractiveBox_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveBox_Interact_Statics::PropPointers), sizeof(InteractiveBox_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveBox_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractiveBox_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveBox_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractiveBox_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveBox_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractiveBox::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// End Class AInteractiveBox Function Interact

// Begin Class AInteractiveBox
void AInteractiveBox::StaticRegisterNativesAInteractiveBox()
{
	UClass* Class = AInteractiveBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &AInteractiveBox::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractiveBox);
UClass* Z_Construct_UClass_AInteractiveBox_NoRegister()
{
	return AInteractiveBox::StaticClass();
}
struct Z_Construct_UClass_AInteractiveBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractiveBox.h" },
		{ "ModuleRelativePath", "Public/InteractiveBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbd\xef\xbf\xbd\xc6\xae.\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbd\xef\xbf\xbd\xc6\xae." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/InteractiveBox.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractiveBox_Interact, "Interact" }, // 1389857576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AInteractiveBox_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((AInteractiveBox*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractiveBox_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractiveBox), &Z_Construct_UClass_AInteractiveBox_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveBox_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveBox, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveBox_Statics::NewProp_ActiveMaterial = { "ActiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveBox, ActiveMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMaterial_MetaData), NewProp_ActiveMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveBox_Statics::NewProp_InactiveMaterial = { "InactiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveBox, InactiveMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveMaterial_MetaData), NewProp_InactiveMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveBox_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveBox_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveBox_Statics::NewProp_ActiveMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveBox_Statics::NewProp_InactiveMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractiveBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractiveBox_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveObject_NoRegister, (int32)VTABLE_OFFSET(AInteractiveBox, IInteractiveObject), false },  // 1689164658
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveBox_Statics::ClassParams = {
	&AInteractiveBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractiveBox_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveBox_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractiveBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractiveBox()
{
	if (!Z_Registration_Info_UClass_AInteractiveBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractiveBox.OuterSingleton, Z_Construct_UClass_AInteractiveBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractiveBox.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AInteractiveBox>()
{
	return AInteractiveBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveBox);
AInteractiveBox::~AInteractiveBox() {}
// End Class AInteractiveBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractiveBox, AInteractiveBox::StaticClass, TEXT("AInteractiveBox"), &Z_Registration_Info_UClass_AInteractiveBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractiveBox), 1058326069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_3639288679(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_InteractiveBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
