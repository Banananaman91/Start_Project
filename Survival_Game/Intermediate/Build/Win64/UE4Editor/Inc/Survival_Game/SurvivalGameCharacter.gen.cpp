// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameCharacter() {}
// Cross Module References
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UEnum* Z_Construct_UEnum_Survival_Game_EEquippableSlot();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UEquippableItems_NoRegister();
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_APickup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics
	{
		struct _Script_Survival_Game_eventOnEquippedItemChanged_Parms
		{
			EEquippableSlot slot;
			const UEquippableItems* item;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Survival_Game_eventOnEquippedItemChanged_Parms, slot), Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Survival_Game_eventOnEquippedItemChanged_Parms, item), Z_Construct_UClass_UEquippableItems_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used for equipping items to the player\n" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
		{ "ToolTip", "Used for equipping items to the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Survival_Game, nullptr, "OnEquippedItemChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_Survival_Game_eventOnEquippedItemChanged_Parms), Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FInteractionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionData, Z_Construct_UPackage__Script_Survival_Game(), TEXT("InteractionData"), sizeof(FInteractionData), Get_Z_Construct_UScriptStruct_FInteractionData_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FInteractionData>()
{
	return FInteractionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionData(FInteractionData::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("InteractionData"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFInteractionData
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFInteractionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionData")),new UScriptStruct::TCppStructOps<FInteractionData>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFInteractionData;
	struct Z_Construct_UScriptStruct_FInteractionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewedInteractionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewedInteractionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastInteractionCheckTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lastInteractionCheckTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteractHeld_MetaData[];
#endif
		static void NewProp_bInteractHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteractHeld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent = { "viewedInteractionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, viewedInteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime = { "lastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, lastInteractionCheckTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_SetBit(void* Obj)
	{
		((FInteractionData*)Obj)->bInteractHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld = { "bInteractHeld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionData), &Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		nullptr,
		&NewStructOps,
		"InteractionData",
		sizeof(FInteractionData),
		alignof(FInteractionData),
		Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionData"), sizeof(FInteractionData), Get_Z_Construct_UScriptStruct_FInteractionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash() { return 2660773933U; }
	DEFINE_FUNCTION(ASurvivalGameCharacter::execGetEquippedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<EEquippableSlot,UEquippableItems*>*)Z_Param__Result=P_THIS->GetEquippedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalGameCharacter::execGetSlotSkeletalMeshComponent)
	{
		P_GET_ENUM(EEquippableSlot,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSlotSkeletalMeshComponent(EEquippableSlot(Z_Param_slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalGameCharacter::execDropItem)
	{
		P_GET_OBJECT(UItem,Z_Param_item);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem(Z_Param_item,Z_Param_quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalGameCharacter::execUseItem)
	{
		P_GET_OBJECT(UItem,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem(Z_Param_item);
		P_NATIVE_END;
	}
	void ASurvivalGameCharacter::StaticRegisterNativesASurvivalGameCharacter()
	{
		UClass* Class = ASurvivalGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &ASurvivalGameCharacter::execDropItem },
			{ "GetEquippedItems", &ASurvivalGameCharacter::execGetEquippedItems },
			{ "GetSlotSkeletalMeshComponent", &ASurvivalGameCharacter::execGetSlotSkeletalMeshComponent },
			{ "UseItem", &ASurvivalGameCharacter::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics
	{
		struct SurvivalGameCharacter_eventDropItem_Parms
		{
			UItem* item;
			int32 quantity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalGameCharacter_eventDropItem_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalGameCharacter_eventDropItem_Parms, quantity), METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::NewProp_quantity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalGameCharacter, nullptr, "DropItem", nullptr, nullptr, sizeof(SurvivalGameCharacter_eventDropItem_Parms), Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalGameCharacter_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalGameCharacter_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics
	{
		struct SurvivalGameCharacter_eventGetEquippedItems_Parms
		{
			TMap<EEquippableSlot,UEquippableItems*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEquippableItems_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalGameCharacter_eventGetEquippedItems_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalGameCharacter, nullptr, "GetEquippedItems", nullptr, nullptr, sizeof(SurvivalGameCharacter_eventGetEquippedItems_Parms), Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics
	{
		struct SurvivalGameCharacter_eventGetSlotSkeletalMeshComponent_Parms
		{
			EEquippableSlot slot;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalGameCharacter_eventGetSlotSkeletalMeshComponent_Parms, slot), Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalGameCharacter_eventGetSlotSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalGameCharacter, nullptr, "GetSlotSkeletalMeshComponent", nullptr, nullptr, sizeof(SurvivalGameCharacter_eventGetSlotSkeletalMeshComponent_Parms), Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics
	{
		struct SurvivalGameCharacter_eventUseItem_Parms
		{
			UItem* item;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalGameCharacter_eventUseItem_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalGameCharacter, nullptr, "UseItem", nullptr, nullptr, sizeof(SurvivalGameCharacter_eventUseItem_Parms), Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalGameCharacter_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalGameCharacter_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister()
	{
		return ASurvivalGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_helmetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_helmetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chestMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chestMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_legsMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_legsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vestMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vestMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_feetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_feetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handsMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backpackMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backpackMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprinting_MetaData[];
#endif
		static void NewProp_bSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionCheckFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionCheckFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionCheckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionCheckDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pickupClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMeshes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerMeshes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_playerMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nakedMeshes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_nakedMeshes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_nakedMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nakedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_nakedMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquippedItemChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedItemChanged;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_equippedItems_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_equippedItems_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_equippedItems_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equippedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_equippedItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivalGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivalGameCharacter_DropItem, "DropItem" }, // 3546745761
		{ &Z_Construct_UFunction_ASurvivalGameCharacter_GetEquippedItems, "GetEquippedItems" }, // 1198769748
		{ &Z_Construct_UFunction_ASurvivalGameCharacter_GetSlotSkeletalMeshComponent, "GetSlotSkeletalMeshComponent" }, // 2382995354
		{ &Z_Construct_UFunction_ASurvivalGameCharacter_UseItem, "UseItem" }, // 2177545672
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SurvivalGameCharacter.h" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh = { "helmetMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, helmetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh = { "chestMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, chestMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh = { "legsMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, legsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh = { "vestMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, vestMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh = { "feetMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, feetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh = { "handsMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, handsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh = { "backpackMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, backpackMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed = { "sprintSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, sprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_SetBit(void* Obj)
	{
		((ASurvivalGameCharacter*)Obj)->bSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASurvivalGameCharacter), &Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequency_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequency = { "interactionCheckFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckFrequency), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance = { "interactionCheckDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckDistance), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData = { "interactionData", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, interactionData), Z_Construct_UScriptStruct_FInteractionData, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerInventory_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerInventory = { "playerInventory", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, playerInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_pickupClass_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_pickupClass = { "pickupClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, pickupClass), Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_pickupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_pickupClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_ValueProp = { "playerMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_Key_KeyProp = { "playerMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "////////////////////////////////////////////////////////////\n////////// Equippable items Vars and Functions /////////////\n////////////////////////////////////////////////////////////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
		{ "ToolTip", "/ Equippable items Vars and Functions /" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes = { "playerMeshes", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, playerMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_ValueProp = { "nakedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_Key_KeyProp = { "nakedMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes = { "nakedMeshes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, nakedMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_OnEquippedItemChanged_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_OnEquippedItemChanged = { "OnEquippedItemChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, OnEquippedItemChanged), Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_OnEquippedItemChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_OnEquippedItemChanged_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_ValueProp = { "equippedItems", nullptr, (EPropertyFlags)0x00000000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEquippableItems_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_Key_KeyProp = { "equippedItems_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_MetaData[] = {
		{ "Category", "Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems = { "equippedItems", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, equippedItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_pickupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_playerMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_nakedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_OnEquippedItemChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_equippedItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::ClassParams = {
		&ASurvivalGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASurvivalGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalGameCharacter, 135848266);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvivalGameCharacter>()
	{
		return ASurvivalGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalGameCharacter(Z_Construct_UClass_ASurvivalGameCharacter, &ASurvivalGameCharacter::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvivalGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
