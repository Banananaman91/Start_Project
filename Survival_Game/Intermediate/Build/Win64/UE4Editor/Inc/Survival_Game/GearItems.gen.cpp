// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/GearItems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGearItems() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UGearItems_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UGearItems();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UEquippableItems();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void UGearItems::StaticRegisterNativesUGearItems()
	{
	}
	UClass* Z_Construct_UClass_UGearItems_NoRegister()
	{
		return UGearItems::StaticClass();
	}
	struct Z_Construct_UClass_UGearItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_materialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageDeduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageDeduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGearItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquippableItems,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearItems_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/GearItems.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Items/GearItems.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearItems_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Items/GearItems.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearItems_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearItems, mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGearItems_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearItems_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearItems_Statics::NewProp_materialInstance_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Items/GearItems.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearItems_Statics::NewProp_materialInstance = { "materialInstance", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearItems, materialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGearItems_Statics::NewProp_materialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearItems_Statics::NewProp_materialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearItems_Statics::NewProp_damageDeduction_MetaData[] = {
		{ "Category", "Gear" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Items/GearItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGearItems_Statics::NewProp_damageDeduction = { "damageDeduction", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearItems, damageDeduction), METADATA_PARAMS(Z_Construct_UClass_UGearItems_Statics::NewProp_damageDeduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearItems_Statics::NewProp_damageDeduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGearItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearItems_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearItems_Statics::NewProp_materialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearItems_Statics::NewProp_damageDeduction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGearItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGearItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGearItems_Statics::ClassParams = {
		&UGearItems::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGearItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGearItems_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGearItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGearItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGearItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGearItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGearItems, 3009540717);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UGearItems>()
	{
		return UGearItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGearItems(Z_Construct_UClass_UGearItems, &UGearItems::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UGearItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGearItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
