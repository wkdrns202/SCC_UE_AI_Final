// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/BaseItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ABaseItem();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_ABaseItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Class ABaseItem Function GetItemType
struct Z_Construct_UFunction_ABaseItem_GetItemType_Statics
{
	struct BaseItem_eventGetItemType_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseItem_GetItemType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventGetItemType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseItem_GetItemType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_GetItemType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_GetItemType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_GetItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "GetItemType", nullptr, nullptr, Z_Construct_UFunction_ABaseItem_GetItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_GetItemType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseItem_GetItemType_Statics::BaseItem_eventGetItemType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_GetItemType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseItem_GetItemType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseItem_GetItemType_Statics::BaseItem_eventGetItemType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseItem_GetItemType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_GetItemType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseItem::execGetItemType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemType();
	P_NATIVE_END;
}
// End Class ABaseItem Function GetItemType

// Begin Class ABaseItem Function OnOverlapBegin
struct Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics
{
	struct BaseItem_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BaseItem_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseItem_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::BaseItem_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::BaseItem_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseItem_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseItem::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABaseItem Function OnOverlapBegin

// Begin Class ABaseItem
void ABaseItem::StaticRegisterNativesABaseItem()
{
	UClass* Class = ABaseItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemType", &ABaseItem::execGetItemType },
		{ "OnOverlapBegin", &ABaseItem::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseItem);
UClass* Z_Construct_UClass_ABaseItem_NoRegister()
{
	return ABaseItem::StaticClass();
}
struct Z_Construct_UClass_ABaseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseItem.h" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseItem_GetItemType, "GetItemType" }, // 2780564252
		{ &Z_Construct_UFunction_ABaseItem_OnOverlapBegin, "OnOverlapBegin" }, // 3769645913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseItem, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseItem, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseItem_Statics::ClassParams = {
	&ABaseItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseItem()
{
	if (!Z_Registration_Info_UClass_ABaseItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseItem.OuterSingleton, Z_Construct_UClass_ABaseItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseItem.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<ABaseItem>()
{
	return ABaseItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseItem);
ABaseItem::~ABaseItem() {}
// End Class ABaseItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BaseItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseItem, ABaseItem::StaticClass, TEXT("ABaseItem"), &Z_Registration_Info_UClass_ABaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseItem), 660540063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BaseItem_h_2537342240(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_BaseItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
