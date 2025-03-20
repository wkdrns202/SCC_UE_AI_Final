// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/DetectableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectableInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UDetectableInterface();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UDetectableInterface_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UGameRulesInterface();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UGameRulesInterface_NoRegister();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UGuardInterface();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_UGuardInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Interface UDetectableInterface Function CanBeDetected
struct DetectableInterface_eventCanBeDetected_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DetectableInterface_eventCanBeDetected_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDetectableInterface::CanBeDetected() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeDetected instead.");
	DetectableInterface_eventCanBeDetected_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDetectableInterface_CanBeDetected = FName(TEXT("CanBeDetected"));
bool IDetectableInterface::Execute_CanBeDetected(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()));
	DetectableInterface_eventCanBeDetected_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDetectableInterface_CanBeDetected);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDetectableInterface*)(O->GetNativeInterfaceAddress(UDetectableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanBeDetected_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BlueprintNativeEvent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(PlayerCharacer)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BlueprintNativeEvent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(PlayerCharacer)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DetectableInterface_eventCanBeDetected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DetectableInterface_eventCanBeDetected_Parms), &Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetectableInterface, nullptr, "CanBeDetected", nullptr, nullptr, Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::PropPointers), sizeof(DetectableInterface_eventCanBeDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(DetectableInterface_eventCanBeDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDetectableInterface_CanBeDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDetectableInterface_CanBeDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDetectableInterface::execCanBeDetected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeDetected_Implementation();
	P_NATIVE_END;
}
// End Interface UDetectableInterface Function CanBeDetected

// Begin Interface UDetectableInterface Function CanMakeNoise
struct DetectableInterface_eventCanMakeNoise_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DetectableInterface_eventCanMakeNoise_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDetectableInterface::CanMakeNoise() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanMakeNoise instead.");
	DetectableInterface_eventCanMakeNoise_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDetectableInterface_CanMakeNoise = FName(TEXT("CanMakeNoise"));
bool IDetectableInterface::Execute_CanMakeNoise(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()));
	DetectableInterface_eventCanMakeNoise_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDetectableInterface_CanMakeNoise);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDetectableInterface*)(O->GetNativeInterfaceAddress(UDetectableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanMakeNoise_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DetectableInterface_eventCanMakeNoise_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DetectableInterface_eventCanMakeNoise_Parms), &Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetectableInterface, nullptr, "CanMakeNoise", nullptr, nullptr, Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::PropPointers), sizeof(DetectableInterface_eventCanMakeNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(DetectableInterface_eventCanMakeNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDetectableInterface_CanMakeNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDetectableInterface_CanMakeNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDetectableInterface::execCanMakeNoise)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMakeNoise_Implementation();
	P_NATIVE_END;
}
// End Interface UDetectableInterface Function CanMakeNoise

// Begin Interface UDetectableInterface Function CapturedByAI
void IDetectableInterface::CapturedByAI()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CapturedByAI instead.");
}
static FName NAME_UDetectableInterface_CapturedByAI = FName(TEXT("CapturedByAI"));
void IDetectableInterface::Execute_CapturedByAI(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDetectableInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDetectableInterface_CapturedByAI);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDetectableInterface*)(O->GetNativeInterfaceAddress(UDetectableInterface::StaticClass())))
	{
		I->CapturedByAI_Implementation();
	}
}
struct Z_Construct_UFunction_UDetectableInterface_CapturedByAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xb8\xc3\xb3\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb8\xc3\xb3\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetectableInterface_CapturedByAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetectableInterface, nullptr, "CapturedByAI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectableInterface_CapturedByAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDetectableInterface_CapturedByAI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDetectableInterface_CapturedByAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDetectableInterface_CapturedByAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDetectableInterface::execCapturedByAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CapturedByAI_Implementation();
	P_NATIVE_END;
}
// End Interface UDetectableInterface Function CapturedByAI

// Begin Interface UDetectableInterface
void UDetectableInterface::StaticRegisterNativesUDetectableInterface()
{
	UClass* Class = UDetectableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeDetected", &IDetectableInterface::execCanBeDetected },
		{ "CanMakeNoise", &IDetectableInterface::execCanMakeNoise },
		{ "CapturedByAI", &IDetectableInterface::execCapturedByAI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetectableInterface);
UClass* Z_Construct_UClass_UDetectableInterface_NoRegister()
{
	return UDetectableInterface::StaticClass();
}
struct Z_Construct_UClass_UDetectableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDetectableInterface_CanBeDetected, "CanBeDetected" }, // 1810664861
		{ &Z_Construct_UFunction_UDetectableInterface_CanMakeNoise, "CanMakeNoise" }, // 1795596096
		{ &Z_Construct_UFunction_UDetectableInterface_CapturedByAI, "CapturedByAI" }, // 1688464245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDetectableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDetectableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetectableInterface_Statics::ClassParams = {
	&UDetectableInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetectableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetectableInterface()
{
	if (!Z_Registration_Info_UClass_UDetectableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetectableInterface.OuterSingleton, Z_Construct_UClass_UDetectableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetectableInterface.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UDetectableInterface>()
{
	return UDetectableInterface::StaticClass();
}
UDetectableInterface::UDetectableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectableInterface);
UDetectableInterface::~UDetectableInterface() {}
// End Interface UDetectableInterface

// Begin Interface UGameRulesInterface Function ReportAlertLevelChange
struct GameRulesInterface_eventReportAlertLevelChange_Parms
{
	AActor* Guard;
	uint8 NewAlertLevel;
};
void IGameRulesInterface::ReportAlertLevelChange(AActor* Guard, uint8 NewAlertLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReportAlertLevelChange instead.");
}
static FName NAME_UGameRulesInterface_ReportAlertLevelChange = FName(TEXT("ReportAlertLevelChange"));
void IGameRulesInterface::Execute_ReportAlertLevelChange(UObject* O, AActor* Guard, uint8 NewAlertLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()));
	GameRulesInterface_eventReportAlertLevelChange_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameRulesInterface_ReportAlertLevelChange);
	if (Func)
	{
		Parms.Guard=Guard;
		Parms.NewAlertLevel=NewAlertLevel;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGameRulesInterface*)(O->GetNativeInterfaceAddress(UGameRulesInterface::StaticClass())))
	{
		I->ReportAlertLevelChange_Implementation(Guard,NewAlertLevel);
	}
}
struct Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Guard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAlertLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::NewProp_Guard = { "Guard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportAlertLevelChange_Parms, Guard), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::NewProp_NewAlertLevel = { "NewAlertLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportAlertLevelChange_Parms, NewAlertLevel), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::NewProp_Guard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::NewProp_NewAlertLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRulesInterface, nullptr, "ReportAlertLevelChange", nullptr, nullptr, Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::PropPointers), sizeof(GameRulesInterface_eventReportAlertLevelChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameRulesInterface_eventReportAlertLevelChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameRulesInterface::execReportAlertLevelChange)
{
	P_GET_OBJECT(AActor,Z_Param_Guard);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewAlertLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportAlertLevelChange_Implementation(Z_Param_Guard,Z_Param_NewAlertLevel);
	P_NATIVE_END;
}
// End Interface UGameRulesInterface Function ReportAlertLevelChange

// Begin Interface UGameRulesInterface Function ReportCurrentLives
struct GameRulesInterface_eventReportCurrentLives_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	GameRulesInterface_eventReportCurrentLives_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IGameRulesInterface::ReportCurrentLives()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReportCurrentLives instead.");
	GameRulesInterface_eventReportCurrentLives_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UGameRulesInterface_ReportCurrentLives = FName(TEXT("ReportCurrentLives"));
int32 IGameRulesInterface::Execute_ReportCurrentLives(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()));
	GameRulesInterface_eventReportCurrentLives_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameRulesInterface_ReportCurrentLives);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGameRulesInterface*)(O->GetNativeInterfaceAddress(UGameRulesInterface::StaticClass())))
	{
		Parms.ReturnValue = I->ReportCurrentLives_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb5 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb5 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportCurrentLives_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRulesInterface, nullptr, "ReportCurrentLives", nullptr, nullptr, Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::PropPointers), sizeof(GameRulesInterface_eventReportCurrentLives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameRulesInterface_eventReportCurrentLives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameRulesInterface::execReportCurrentLives)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ReportCurrentLives_Implementation();
	P_NATIVE_END;
}
// End Interface UGameRulesInterface Function ReportCurrentLives

// Begin Interface UGameRulesInterface Function ReportGetCoin
struct GameRulesInterface_eventReportGetCoin_Parms
{
	int32 type;
};
void IGameRulesInterface::ReportGetCoin(int32 type)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReportGetCoin instead.");
}
static FName NAME_UGameRulesInterface_ReportGetCoin = FName(TEXT("ReportGetCoin"));
void IGameRulesInterface::Execute_ReportGetCoin(UObject* O, int32 type)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()));
	GameRulesInterface_eventReportGetCoin_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameRulesInterface_ReportGetCoin);
	if (Func)
	{
		Parms.type=type;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGameRulesInterface*)(O->GetNativeInterfaceAddress(UGameRulesInterface::StaticClass())))
	{
		I->ReportGetCoin_Implementation(type);
	}
}
struct Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportGetCoin_Parms, type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::NewProp_type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRulesInterface, nullptr, "ReportGetCoin", nullptr, nullptr, Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::PropPointers), sizeof(GameRulesInterface_eventReportGetCoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameRulesInterface_eventReportGetCoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameRulesInterface::execReportGetCoin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportGetCoin_Implementation(Z_Param_type);
	P_NATIVE_END;
}
// End Interface UGameRulesInterface Function ReportGetCoin

// Begin Interface UGameRulesInterface Function ReportPlayerCapture
struct GameRulesInterface_eventReportPlayerCapture_Parms
{
	APawn* CapturedPlayer;
	AActor* Captor;
};
void IGameRulesInterface::ReportPlayerCapture(APawn* CapturedPlayer, AActor* Captor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReportPlayerCapture instead.");
}
static FName NAME_UGameRulesInterface_ReportPlayerCapture = FName(TEXT("ReportPlayerCapture"));
void IGameRulesInterface::Execute_ReportPlayerCapture(UObject* O, APawn* CapturedPlayer, AActor* Captor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()));
	GameRulesInterface_eventReportPlayerCapture_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameRulesInterface_ReportPlayerCapture);
	if (Func)
	{
		Parms.CapturedPlayer=CapturedPlayer;
		Parms.Captor=Captor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGameRulesInterface*)(O->GetNativeInterfaceAddress(UGameRulesInterface::StaticClass())))
	{
		I->ReportPlayerCapture_Implementation(CapturedPlayer,Captor);
	}
}
struct Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc4\xb8\xc3\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc4\xb8\xc3\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturedPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Captor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::NewProp_CapturedPlayer = { "CapturedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportPlayerCapture_Parms, CapturedPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::NewProp_Captor = { "Captor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportPlayerCapture_Parms, Captor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::NewProp_CapturedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::NewProp_Captor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRulesInterface, nullptr, "ReportPlayerCapture", nullptr, nullptr, Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::PropPointers), sizeof(GameRulesInterface_eventReportPlayerCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameRulesInterface_eventReportPlayerCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameRulesInterface::execReportPlayerCapture)
{
	P_GET_OBJECT(APawn,Z_Param_CapturedPlayer);
	P_GET_OBJECT(AActor,Z_Param_Captor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportPlayerCapture_Implementation(Z_Param_CapturedPlayer,Z_Param_Captor);
	P_NATIVE_END;
}
// End Interface UGameRulesInterface Function ReportPlayerCapture

// Begin Interface UGameRulesInterface Function ReportPlayerDetection
struct GameRulesInterface_eventReportPlayerDetection_Parms
{
	APawn* DetectedPlayer;
	AActor* Detector;
};
void IGameRulesInterface::ReportPlayerDetection(APawn* DetectedPlayer, AActor* Detector)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReportPlayerDetection instead.");
}
static FName NAME_UGameRulesInterface_ReportPlayerDetection = FName(TEXT("ReportPlayerDetection"));
void IGameRulesInterface::Execute_ReportPlayerDetection(UObject* O, APawn* DetectedPlayer, AActor* Detector)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameRulesInterface::StaticClass()));
	GameRulesInterface_eventReportPlayerDetection_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameRulesInterface_ReportPlayerDetection);
	if (Func)
	{
		Parms.DetectedPlayer=DetectedPlayer;
		Parms.Detector=Detector;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGameRulesInterface*)(O->GetNativeInterfaceAddress(UGameRulesInterface::StaticClass())))
	{
		I->ReportPlayerDetection_Implementation(DetectedPlayer,Detector);
	}
}
struct Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Detector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::NewProp_DetectedPlayer = { "DetectedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportPlayerDetection_Parms, DetectedPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::NewProp_Detector = { "Detector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRulesInterface_eventReportPlayerDetection_Parms, Detector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::NewProp_DetectedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::NewProp_Detector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRulesInterface, nullptr, "ReportPlayerDetection", nullptr, nullptr, Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::PropPointers), sizeof(GameRulesInterface_eventReportPlayerDetection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameRulesInterface_eventReportPlayerDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameRulesInterface::execReportPlayerDetection)
{
	P_GET_OBJECT(APawn,Z_Param_DetectedPlayer);
	P_GET_OBJECT(AActor,Z_Param_Detector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportPlayerDetection_Implementation(Z_Param_DetectedPlayer,Z_Param_Detector);
	P_NATIVE_END;
}
// End Interface UGameRulesInterface Function ReportPlayerDetection

// Begin Interface UGameRulesInterface
void UGameRulesInterface::StaticRegisterNativesUGameRulesInterface()
{
	UClass* Class = UGameRulesInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReportAlertLevelChange", &IGameRulesInterface::execReportAlertLevelChange },
		{ "ReportCurrentLives", &IGameRulesInterface::execReportCurrentLives },
		{ "ReportGetCoin", &IGameRulesInterface::execReportGetCoin },
		{ "ReportPlayerCapture", &IGameRulesInterface::execReportPlayerCapture },
		{ "ReportPlayerDetection", &IGameRulesInterface::execReportPlayerDetection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameRulesInterface);
UClass* Z_Construct_UClass_UGameRulesInterface_NoRegister()
{
	return UGameRulesInterface::StaticClass();
}
struct Z_Construct_UClass_UGameRulesInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameRulesInterface_ReportAlertLevelChange, "ReportAlertLevelChange" }, // 1672728475
		{ &Z_Construct_UFunction_UGameRulesInterface_ReportCurrentLives, "ReportCurrentLives" }, // 1247436474
		{ &Z_Construct_UFunction_UGameRulesInterface_ReportGetCoin, "ReportGetCoin" }, // 1420146859
		{ &Z_Construct_UFunction_UGameRulesInterface_ReportPlayerCapture, "ReportPlayerCapture" }, // 2339037891
		{ &Z_Construct_UFunction_UGameRulesInterface_ReportPlayerDetection, "ReportPlayerDetection" }, // 1111109759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameRulesInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameRulesInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameRulesInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameRulesInterface_Statics::ClassParams = {
	&UGameRulesInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameRulesInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameRulesInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameRulesInterface()
{
	if (!Z_Registration_Info_UClass_UGameRulesInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameRulesInterface.OuterSingleton, Z_Construct_UClass_UGameRulesInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameRulesInterface.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UGameRulesInterface>()
{
	return UGameRulesInterface::StaticClass();
}
UGameRulesInterface::UGameRulesInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameRulesInterface);
UGameRulesInterface::~UGameRulesInterface() {}
// End Interface UGameRulesInterface

// Begin Interface UGuardInterface Function GetAlertLevel
struct GuardInterface_eventGetAlertLevel_Parms
{
	uint8 ReturnValue;

	/** Constructor, initializes return property only **/
	GuardInterface_eventGetAlertLevel_Parms()
		: ReturnValue(0)
	{
	}
};
uint8 IGuardInterface::GetAlertLevel() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAlertLevel instead.");
	GuardInterface_eventGetAlertLevel_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UGuardInterface_GetAlertLevel = FName(TEXT("GetAlertLevel"));
uint8 IGuardInterface::Execute_GetAlertLevel(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()));
	GuardInterface_eventGetAlertLevel_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGuardInterface_GetAlertLevel);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IGuardInterface*)(O->GetNativeInterfaceAddress(UGuardInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAlertLevel_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Guard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardInterface_eventGetAlertLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardInterface, nullptr, "GetAlertLevel", nullptr, nullptr, Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::PropPointers), sizeof(GuardInterface_eventGetAlertLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(GuardInterface_eventGetAlertLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGuardInterface_GetAlertLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuardInterface_GetAlertLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGuardInterface::execGetAlertLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetAlertLevel_Implementation();
	P_NATIVE_END;
}
// End Interface UGuardInterface Function GetAlertLevel

// Begin Interface UGuardInterface Function GetLastKnownPlayerLocation
struct GuardInterface_eventGetLastKnownPlayerLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	GuardInterface_eventGetLastKnownPlayerLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IGuardInterface::GetLastKnownPlayerLocation() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLastKnownPlayerLocation instead.");
	GuardInterface_eventGetLastKnownPlayerLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UGuardInterface_GetLastKnownPlayerLocation = FName(TEXT("GetLastKnownPlayerLocation"));
FVector IGuardInterface::Execute_GetLastKnownPlayerLocation(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()));
	GuardInterface_eventGetLastKnownPlayerLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGuardInterface_GetLastKnownPlayerLocation);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IGuardInterface*)(O->GetNativeInterfaceAddress(UGuardInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLastKnownPlayerLocation_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Guard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardInterface_eventGetLastKnownPlayerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardInterface, nullptr, "GetLastKnownPlayerLocation", nullptr, nullptr, Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::PropPointers), sizeof(GuardInterface_eventGetLastKnownPlayerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(GuardInterface_eventGetLastKnownPlayerLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGuardInterface::execGetLastKnownPlayerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastKnownPlayerLocation_Implementation();
	P_NATIVE_END;
}
// End Interface UGuardInterface Function GetLastKnownPlayerLocation

// Begin Interface UGuardInterface Function GetTargetPlayer
struct GuardInterface_eventGetTargetPlayer_Parms
{
	APawn* ReturnValue;

	/** Constructor, initializes return property only **/
	GuardInterface_eventGetTargetPlayer_Parms()
		: ReturnValue(NULL)
	{
	}
};
APawn* IGuardInterface::GetTargetPlayer() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetPlayer instead.");
	GuardInterface_eventGetTargetPlayer_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UGuardInterface_GetTargetPlayer = FName(TEXT("GetTargetPlayer"));
APawn* IGuardInterface::Execute_GetTargetPlayer(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()));
	GuardInterface_eventGetTargetPlayer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGuardInterface_GetTargetPlayer);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IGuardInterface*)(O->GetNativeInterfaceAddress(UGuardInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetPlayer_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Guard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardInterface_eventGetTargetPlayer_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardInterface, nullptr, "GetTargetPlayer", nullptr, nullptr, Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::PropPointers), sizeof(GuardInterface_eventGetTargetPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(GuardInterface_eventGetTargetPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGuardInterface_GetTargetPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuardInterface_GetTargetPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGuardInterface::execGetTargetPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetTargetPlayer_Implementation();
	P_NATIVE_END;
}
// End Interface UGuardInterface Function GetTargetPlayer

// Begin Interface UGuardInterface Function Persuaded
void IGuardInterface::Persuaded()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Persuaded instead.");
}
static FName NAME_UGuardInterface_Persuaded = FName(TEXT("Persuaded"));
void IGuardInterface::Execute_Persuaded(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UGuardInterface_Persuaded);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IGuardInterface*)(O->GetNativeInterfaceAddress(UGuardInterface::StaticClass())))
	{
		I->Persuaded_Implementation();
	}
}
struct Z_Construct_UFunction_UGuardInterface_Persuaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Guard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuardInterface_Persuaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardInterface, nullptr, "Persuaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_Persuaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuardInterface_Persuaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGuardInterface_Persuaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuardInterface_Persuaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGuardInterface::execPersuaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Persuaded_Implementation();
	P_NATIVE_END;
}
// End Interface UGuardInterface Function Persuaded

// Begin Interface UGuardInterface Function ReceiveAlert
struct GuardInterface_eventReceiveAlert_Parms
{
	FVector Location;
	uint8 AlertLevel;
	AActor* AlertSource;
};
void IGuardInterface::ReceiveAlert(FVector const& Location, uint8 AlertLevel, AActor* AlertSource)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveAlert instead.");
}
static FName NAME_UGuardInterface_ReceiveAlert = FName(TEXT("ReceiveAlert"));
void IGuardInterface::Execute_ReceiveAlert(UObject* O, FVector const& Location, uint8 AlertLevel, AActor* AlertSource)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGuardInterface::StaticClass()));
	GuardInterface_eventReceiveAlert_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGuardInterface_ReceiveAlert);
	if (Func)
	{
		Parms.Location=Location;
		Parms.AlertLevel=AlertLevel;
		Parms.AlertSource=AlertSource;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGuardInterface*)(O->GetNativeInterfaceAddress(UGuardInterface::StaticClass())))
	{
		I->ReceiveAlert_Implementation(Location,AlertLevel,AlertSource);
	}
}
struct Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Guard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlertSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardInterface_eventReceiveAlert_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::NewProp_AlertLevel = { "AlertLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardInterface_eventReceiveAlert_Parms, AlertLevel), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::NewProp_AlertSource = { "AlertSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GuardInterface_eventReceiveAlert_Parms, AlertSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::NewProp_AlertLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::NewProp_AlertSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGuardInterface, nullptr, "ReceiveAlert", nullptr, nullptr, Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::PropPointers), sizeof(GuardInterface_eventReceiveAlert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::Function_MetaDataParams) };
static_assert(sizeof(GuardInterface_eventReceiveAlert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGuardInterface_ReceiveAlert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGuardInterface_ReceiveAlert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGuardInterface::execReceiveAlert)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FByteProperty,Z_Param_AlertLevel);
	P_GET_OBJECT(AActor,Z_Param_AlertSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveAlert_Implementation(Z_Param_Out_Location,Z_Param_AlertLevel,Z_Param_AlertSource);
	P_NATIVE_END;
}
// End Interface UGuardInterface Function ReceiveAlert

// Begin Interface UGuardInterface
void UGuardInterface::StaticRegisterNativesUGuardInterface()
{
	UClass* Class = UGuardInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAlertLevel", &IGuardInterface::execGetAlertLevel },
		{ "GetLastKnownPlayerLocation", &IGuardInterface::execGetLastKnownPlayerLocation },
		{ "GetTargetPlayer", &IGuardInterface::execGetTargetPlayer },
		{ "Persuaded", &IGuardInterface::execPersuaded },
		{ "ReceiveAlert", &IGuardInterface::execReceiveAlert },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGuardInterface);
UClass* Z_Construct_UClass_UGuardInterface_NoRegister()
{
	return UGuardInterface::StaticClass();
}
struct Z_Construct_UClass_UGuardInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetectableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGuardInterface_GetAlertLevel, "GetAlertLevel" }, // 2426390838
		{ &Z_Construct_UFunction_UGuardInterface_GetLastKnownPlayerLocation, "GetLastKnownPlayerLocation" }, // 462577807
		{ &Z_Construct_UFunction_UGuardInterface_GetTargetPlayer, "GetTargetPlayer" }, // 172655818
		{ &Z_Construct_UFunction_UGuardInterface_Persuaded, "Persuaded" }, // 2202891851
		{ &Z_Construct_UFunction_UGuardInterface_ReceiveAlert, "ReceiveAlert" }, // 1141820432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGuardInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGuardInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGuardInterface_Statics::ClassParams = {
	&UGuardInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGuardInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGuardInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGuardInterface()
{
	if (!Z_Registration_Info_UClass_UGuardInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGuardInterface.OuterSingleton, Z_Construct_UClass_UGuardInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGuardInterface.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<UGuardInterface>()
{
	return UGuardInterface::StaticClass();
}
UGuardInterface::UGuardInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGuardInterface);
UGuardInterface::~UGuardInterface() {}
// End Interface UGuardInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetectableInterface, UDetectableInterface::StaticClass, TEXT("UDetectableInterface"), &Z_Registration_Info_UClass_UDetectableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetectableInterface), 3634255630U) },
		{ Z_Construct_UClass_UGameRulesInterface, UGameRulesInterface::StaticClass, TEXT("UGameRulesInterface"), &Z_Registration_Info_UClass_UGameRulesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameRulesInterface), 348219436U) },
		{ Z_Construct_UClass_UGuardInterface, UGuardInterface::StaticClass, TEXT("UGuardInterface"), &Z_Registration_Info_UClass_UGuardInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGuardInterface), 2687803091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_1613150719(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_SCC_UEAI_Lecture_Source_SCC_UEAI_Lecture_Public_DetectableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
