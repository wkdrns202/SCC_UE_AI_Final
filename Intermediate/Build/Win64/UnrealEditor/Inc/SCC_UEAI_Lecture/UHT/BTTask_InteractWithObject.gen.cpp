// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/BTTask_InteractWithObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_InteractWithObject() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UBTTask_InteractWithObject();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UBTTask_InteractWithObject_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UInteractiveObject();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UInteractiveObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Interface UInteractiveObject Function Interact
struct InteractiveObject_eventInteract_Parms
{
	AActor* Interactor;
};
void IInteractiveObject::Interact(AActor* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractiveObject_Interact = FName(TEXT("Interact"));
void IInteractiveObject::Execute_Interact(UObject* O, AActor* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveObject::StaticClass()));
	InteractiveObject_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractiveObject_Interact);
	if (Func)
	{
		Parms.Interactor=Interactor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractiveObject*)(O->GetNativeInterfaceAddress(UInteractiveObject::StaticClass())))
	{
		I->Interact_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_UInteractiveObject_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xde\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xbe\xee\xb3\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/BTTask_InteractWithObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xde\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xbe\xee\xb3\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveObject_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveObject_eventInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveObject_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveObject_Interact_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveObject_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveObject_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveObject, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UInteractiveObject_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveObject_Interact_Statics::PropPointers), sizeof(InteractiveObject_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveObject_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveObject_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractiveObject_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveObject_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveObject_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveObject::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// End Interface UInteractiveObject Function Interact

// Begin Interface UInteractiveObject
void UInteractiveObject::StaticRegisterNativesUInteractiveObject()
{
	UClass* Class = UInteractiveObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &IInteractiveObject::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveObject);
UClass* Z_Construct_UClass_UInteractiveObject_NoRegister()
{
	return UInteractiveObject::StaticClass();
}
struct Z_Construct_UClass_UInteractiveObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_InteractWithObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveObject_Interact, "Interact" }, // 1534717848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveObject_Statics::ClassParams = {
	&UInteractiveObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveObject()
{
	if (!Z_Registration_Info_UClass_UInteractiveObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveObject.OuterSingleton, Z_Construct_UClass_UInteractiveObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveObject.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UInteractiveObject>()
{
	return UInteractiveObject::StaticClass();
}
UInteractiveObject::UInteractiveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveObject);
UInteractiveObject::~UInteractiveObject() {}
// End Interface UInteractiveObject

// Begin Class UBTTask_InteractWithObject
void UBTTask_InteractWithObject::StaticRegisterNativesUBTTask_InteractWithObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_InteractWithObject);
UClass* Z_Construct_UClass_UBTTask_InteractWithObject_NoRegister()
{
	return UBTTask_InteractWithObject::StaticClass();
}
struct Z_Construct_UClass_UBTTask_InteractWithObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_InteractWithObject.h" },
		{ "ModuleRelativePath", "Public/BTTask_InteractWithObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Interaction Montage" },
		{ "ModuleRelativePath", "Public/BTTask_InteractWithObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BTTask_InteractWithObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BTTask_InteractWithObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_InteractWithObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_InteractWithObject_Statics::NewProp_InteractionMontage = { "InteractionMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_InteractWithObject, InteractionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionMontage_MetaData), NewProp_InteractionMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_InteractWithObject_Statics::NewProp_InteractionDuration = { "InteractionDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_InteractWithObject, InteractionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDuration_MetaData), NewProp_InteractionDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_InteractWithObject_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_InteractWithObject, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_InteractWithObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InteractWithObject_Statics::NewProp_InteractionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InteractWithObject_Statics::NewProp_InteractionDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InteractWithObject_Statics::NewProp_InteractionDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InteractWithObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_InteractWithObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InteractWithObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_InteractWithObject_Statics::ClassParams = {
	&UBTTask_InteractWithObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_InteractWithObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InteractWithObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InteractWithObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_InteractWithObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_InteractWithObject()
{
	if (!Z_Registration_Info_UClass_UBTTask_InteractWithObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_InteractWithObject.OuterSingleton, Z_Construct_UClass_UBTTask_InteractWithObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_InteractWithObject.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UBTTask_InteractWithObject>()
{
	return UBTTask_InteractWithObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_InteractWithObject);
UBTTask_InteractWithObject::~UBTTask_InteractWithObject() {}
// End Class UBTTask_InteractWithObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveObject, UInteractiveObject::StaticClass, TEXT("UInteractiveObject"), &Z_Registration_Info_UClass_UInteractiveObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveObject), 1689164658U) },
		{ Z_Construct_UClass_UBTTask_InteractWithObject, UBTTask_InteractWithObject::StaticClass, TEXT("UBTTask_InteractWithObject"), &Z_Registration_Info_UClass_UBTTask_InteractWithObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_InteractWithObject), 2301684045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_2896919648(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BTTask_InteractWithObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
