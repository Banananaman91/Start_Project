// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Framework/SurvivalGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameInstance() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_USurvivalGameInstance_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_USurvivalGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void USurvivalGameInstance::StaticRegisterNativesUSurvivalGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USurvivalGameInstance_NoRegister()
	{
		return USurvivalGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USurvivalGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivalGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Framework/SurvivalGameInstance.h" },
		{ "ModuleRelativePath", "Framework/SurvivalGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivalGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivalGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivalGameInstance_Statics::ClassParams = {
		&USurvivalGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivalGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivalGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivalGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivalGameInstance, 1776916256);
	template<> SURVIVAL_GAME_API UClass* StaticClass<USurvivalGameInstance>()
	{
		return USurvivalGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivalGameInstance(Z_Construct_UClass_USurvivalGameInstance, &USurvivalGameInstance::StaticClass, TEXT("/Script/Survival_Game"), TEXT("USurvivalGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivalGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
