// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCC_UEAI_Lecture/Public/MyHomeworkFriendCharacter.h"
#include "Runtime/AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHomeworkFriendCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AMyHomeworkFriendCharacter();
SCC_UEAI_LECTURE_API UClass* Z_Construct_UClass_AMyHomeworkFriendCharacter_NoRegister();
SCC_UEAI_LECTURE_API UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState();
UPackage* Z_Construct_UPackage__Script_SCC_UEAI_Lecture();
// End Cross Module References

// Begin Enum EMoodState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoodState;
static UEnum* EMoodState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoodState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoodState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState, (UObject*)Z_Construct_UPackage__Script_SCC_UEAI_Lecture(), TEXT("EMoodState"));
	}
	return Z_Registration_Info_UEnum_EMoodState.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UEnum* StaticEnum<EMoodState>()
{
	return EMoodState_StaticEnum();
}
struct Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Angry.DisplayName", "Angry" },
		{ "Angry.Name", "EMoodState::Angry" },
		{ "BlueprintType", "true" },
		{ "Curious.DisplayName", "Curious" },
		{ "Curious.Name", "EMoodState::Curious" },
		{ "Happy.DisplayName", "Happy" },
		{ "Happy.Name", "EMoodState::Happy" },
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
		{ "Neutral.DisplayName", "Neutral" },
		{ "Neutral.Name", "EMoodState::Neutral" },
		{ "Sad.DisplayName", "Sad" },
		{ "Sad.Name", "EMoodState::Sad" },
		{ "Scared.DisplayName", "Scared" },
		{ "Scared.Name", "EMoodState::Scared" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoodState::Neutral", (int64)EMoodState::Neutral },
		{ "EMoodState::Happy", (int64)EMoodState::Happy },
		{ "EMoodState::Curious", (int64)EMoodState::Curious },
		{ "EMoodState::Sad", (int64)EMoodState::Sad },
		{ "EMoodState::Scared", (int64)EMoodState::Scared },
		{ "EMoodState::Angry", (int64)EMoodState::Angry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
	nullptr,
	"EMoodState",
	"EMoodState",
	Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState()
{
	if (!Z_Registration_Info_UEnum_EMoodState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoodState.InnerSingleton, Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoodState.InnerSingleton;
}
// End Enum EMoodState

// Begin Class AMyHomeworkFriendCharacter Function OnMoveCompleted
struct Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics
{
	struct MyHomeworkFriendCharacter_eventOnMoveCompleted_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function called when movement completes\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when movement completes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHomeworkFriendCharacter_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(0, nullptr) }; // 2000238872
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHomeworkFriendCharacter_eventOnMoveCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHomeworkFriendCharacter, nullptr, "OnMoveCompleted", nullptr, nullptr, Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::MyHomeworkFriendCharacter_eventOnMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::MyHomeworkFriendCharacter_eventOnMoveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyHomeworkFriendCharacter::execOnMoveCompleted)
{
	P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
	P_GET_PROPERTY(FByteProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
	P_NATIVE_END;
}
// End Class AMyHomeworkFriendCharacter Function OnMoveCompleted

// Begin Class AMyHomeworkFriendCharacter Function OnSeeOtherNPC
struct Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics
{
	struct MyHomeworkFriendCharacter_eventOnSeeOtherNPC_Parms
	{
		AMyHomeworkFriendCharacter* OtherNPC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function called when this NPC sees another NPC\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when this NPC sees another NPC" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherNPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::NewProp_OtherNPC = { "OtherNPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHomeworkFriendCharacter_eventOnSeeOtherNPC_Parms, OtherNPC), Z_Construct_UClass_AMyHomeworkFriendCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::NewProp_OtherNPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHomeworkFriendCharacter, nullptr, "OnSeeOtherNPC", nullptr, nullptr, Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::MyHomeworkFriendCharacter_eventOnSeeOtherNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::MyHomeworkFriendCharacter_eventOnSeeOtherNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyHomeworkFriendCharacter::execOnSeeOtherNPC)
{
	P_GET_OBJECT(AMyHomeworkFriendCharacter,Z_Param_OtherNPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeeOtherNPC(Z_Param_OtherNPC);
	P_NATIVE_END;
}
// End Class AMyHomeworkFriendCharacter Function OnSeeOtherNPC

// Begin Class AMyHomeworkFriendCharacter Function SetMood
struct Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics
{
	struct MyHomeworkFriendCharacter_eventSetMood_Parms
	{
		EMoodState NewMood;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to set a new mood\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to set a new mood" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMood_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMood;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::NewProp_NewMood_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::NewProp_NewMood = { "NewMood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHomeworkFriendCharacter_eventSetMood_Parms, NewMood), Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState, METADATA_PARAMS(0, nullptr) }; // 205479854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::NewProp_NewMood_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::NewProp_NewMood,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHomeworkFriendCharacter, nullptr, "SetMood", nullptr, nullptr, Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::MyHomeworkFriendCharacter_eventSetMood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::MyHomeworkFriendCharacter_eventSetMood_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyHomeworkFriendCharacter::execSetMood)
{
	P_GET_ENUM(EMoodState,Z_Param_NewMood);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMood(EMoodState(Z_Param_NewMood));
	P_NATIVE_END;
}
// End Class AMyHomeworkFriendCharacter Function SetMood

// Begin Class AMyHomeworkFriendCharacter Function ShouldPlayCombatAnimation
struct Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics
{
	struct MyHomeworkFriendCharacter_eventShouldPlayCombatAnimation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to check if current mood requires combat animation\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to check if current mood requires combat animation" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyHomeworkFriendCharacter_eventShouldPlayCombatAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyHomeworkFriendCharacter_eventShouldPlayCombatAnimation_Parms), &Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHomeworkFriendCharacter, nullptr, "ShouldPlayCombatAnimation", nullptr, nullptr, Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::MyHomeworkFriendCharacter_eventShouldPlayCombatAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::MyHomeworkFriendCharacter_eventShouldPlayCombatAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyHomeworkFriendCharacter::execShouldPlayCombatAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldPlayCombatAnimation();
	P_NATIVE_END;
}
// End Class AMyHomeworkFriendCharacter Function ShouldPlayCombatAnimation

// Begin Class AMyHomeworkFriendCharacter
void AMyHomeworkFriendCharacter::StaticRegisterNativesAMyHomeworkFriendCharacter()
{
	UClass* Class = AMyHomeworkFriendCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMoveCompleted", &AMyHomeworkFriendCharacter::execOnMoveCompleted },
		{ "OnSeeOtherNPC", &AMyHomeworkFriendCharacter::execOnSeeOtherNPC },
		{ "SetMood", &AMyHomeworkFriendCharacter::execSetMood },
		{ "ShouldPlayCombatAnimation", &AMyHomeworkFriendCharacter::execShouldPlayCombatAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHomeworkFriendCharacter);
UClass* Z_Construct_UClass_AMyHomeworkFriendCharacter_NoRegister()
{
	return AMyHomeworkFriendCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyHomeworkFriendCharacter.h" },
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[] = {
		{ "Category", "AI|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target points for random navigation\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target points for random navigation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMood_MetaData[] = {
		{ "Category", "AI|Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current mood of the NPC\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current mood of the NPC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetPoint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current target point\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current target point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI Controller\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the NPC currently moving\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the NPC currently moving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveToNextTargetTime_MetaData[] = {
		{ "Category", "AI|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time to move to next target\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to move to next target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[] = {
		{ "Category", "AI|Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Detection range for other NPCs\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detection range for other NPCs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFacing_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoodChangeInterval_MetaData[] = {
		{ "Category", "AI|Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x90\xec\xa0\x95 \xeb\x9e\x9c\xeb\x8d\xa4 \xeb\xb3\x80\xed\x99\x94 \xea\xb0\x84\xea\xb2\xa9 (\xec\xb4\x88)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x90\xec\xa0\x95 \xeb\x9e\x9c\xeb\x8d\xa4 \xeb\xb3\x80\xed\x99\x94 \xea\xb0\x84\xea\xb2\xa9 (\xec\xb4\x88)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoodChangeChance_MetaData[] = {
		{ "Category", "AI|Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x9e\x9c\xeb\x8d\xa4 \xea\xb0\x90\xec\xa0\x95 \xeb\xb3\x80\xed\x99\x94 \xed\x99\x95\xeb\xa5\xa0 (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyHomeworkFriendCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x9e\x9c\xeb\x8d\xa4 \xea\xb0\x90\xec\xa0\x95 \xeb\xb3\x80\xed\x99\x94 \xed\x99\x95\xeb\xa5\xa0 (0-1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMood_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMood;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveToNextTargetTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
	static void NewProp_bIsFacing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoodChangeInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoodChangeChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnMoveCompleted, "OnMoveCompleted" }, // 3714825719
		{ &Z_Construct_UFunction_AMyHomeworkFriendCharacter_OnSeeOtherNPC, "OnSeeOtherNPC" }, // 3154451669
		{ &Z_Construct_UFunction_AMyHomeworkFriendCharacter_SetMood, "SetMood" }, // 22716345
		{ &Z_Construct_UFunction_AMyHomeworkFriendCharacter_ShouldPlayCombatAnimation, "ShouldPlayCombatAnimation" }, // 2456544465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHomeworkFriendCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoints_MetaData), NewProp_TargetPoints_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_CurrentMood_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_CurrentMood = { "CurrentMood", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, CurrentMood), Z_Construct_UEnum_SCC_UEAI_Lecture_EMoodState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMood_MetaData), NewProp_CurrentMood_MetaData) }; // 205479854
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_CurrentTargetPoint = { "CurrentTargetPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, CurrentTargetPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetPoint_MetaData), NewProp_CurrentTargetPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
void Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((AMyHomeworkFriendCharacter*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyHomeworkFriendCharacter), &Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_MoveToNextTargetTime = { "MoveToNextTargetTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, MoveToNextTargetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveToNextTargetTime_MetaData), NewProp_MoveToNextTargetTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, DetectionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRange_MetaData), NewProp_DetectionRange_MetaData) };
void Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsFacing_SetBit(void* Obj)
{
	((AMyHomeworkFriendCharacter*)Obj)->bIsFacing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsFacing = { "bIsFacing", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyHomeworkFriendCharacter), &Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsFacing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFacing_MetaData), NewProp_bIsFacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_MoodChangeInterval = { "MoodChangeInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, MoodChangeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoodChangeInterval_MetaData), NewProp_MoodChangeInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_MoodChangeChance = { "MoodChangeChance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHomeworkFriendCharacter, MoodChangeChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoodChangeChance_MetaData), NewProp_MoodChangeChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_TargetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_TargetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_CurrentMood_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_CurrentMood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_CurrentTargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_MoveToNextTargetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_DetectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_bIsFacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_MoodChangeInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::NewProp_MoodChangeChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SCC_UEAI_Lecture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::ClassParams = {
	&AMyHomeworkFriendCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyHomeworkFriendCharacter()
{
	if (!Z_Registration_Info_UClass_AMyHomeworkFriendCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHomeworkFriendCharacter.OuterSingleton, Z_Construct_UClass_AMyHomeworkFriendCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyHomeworkFriendCharacter.OuterSingleton;
}
template<> SCC_UEAI_LECTURE_API UClass* StaticClass<AMyHomeworkFriendCharacter>()
{
	return AMyHomeworkFriendCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHomeworkFriendCharacter);
AMyHomeworkFriendCharacter::~AMyHomeworkFriendCharacter() {}
// End Class AMyHomeworkFriendCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoodState_StaticEnum, TEXT("EMoodState"), &Z_Registration_Info_UEnum_EMoodState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 205479854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyHomeworkFriendCharacter, AMyHomeworkFriendCharacter::StaticClass, TEXT("AMyHomeworkFriendCharacter"), &Z_Registration_Info_UClass_AMyHomeworkFriendCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHomeworkFriendCharacter), 2594268522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_2441031085(TEXT("/Script/SCC_UEAI_Lecture"),
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_SCC_UE_AI_Final_SCC_UE_AI_Final_Source_SCC_UEAI_Lecture_Public_MyHomeworkFriendCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
