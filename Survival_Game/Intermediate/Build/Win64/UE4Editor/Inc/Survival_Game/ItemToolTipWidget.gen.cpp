// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Widgets/ItemToolTipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemToolTipWidget() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemToolTipWidget_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemToolTipWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryItemWidget_NoRegister();
// End Cross Module References
	void UItemToolTipWidget::StaticRegisterNativesUItemToolTipWidget()
	{
	}
	UClass* Z_Construct_UClass_UItemToolTipWidget_NoRegister()
	{
		return UItemToolTipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemToolTipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryItemWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventoryItemWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemToolTipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemToolTipWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/ItemToolTipWidget.h" },
		{ "ModuleRelativePath", "Widgets/ItemToolTipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemToolTipWidget_Statics::NewProp_inventoryItemWidget_MetaData[] = {
		{ "Category", "ItemToolTip" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Widgets/ItemToolTipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemToolTipWidget_Statics::NewProp_inventoryItemWidget = { "inventoryItemWidget", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemToolTipWidget, inventoryItemWidget), Z_Construct_UClass_UInventoryItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemToolTipWidget_Statics::NewProp_inventoryItemWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemToolTipWidget_Statics::NewProp_inventoryItemWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemToolTipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemToolTipWidget_Statics::NewProp_inventoryItemWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemToolTipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemToolTipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemToolTipWidget_Statics::ClassParams = {
		&UItemToolTipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemToolTipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemToolTipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemToolTipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemToolTipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemToolTipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemToolTipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemToolTipWidget, 3978247622);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UItemToolTipWidget>()
	{
		return UItemToolTipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemToolTipWidget(Z_Construct_UClass_UItemToolTipWidget, &UItemToolTipWidget::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UItemToolTipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemToolTipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
