// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeTestProject/CodeTestProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeTestProjectGameMode() {}
// Cross Module References
	CODETESTPROJECT_API UClass* Z_Construct_UClass_ACodeTestProjectGameMode_NoRegister();
	CODETESTPROJECT_API UClass* Z_Construct_UClass_ACodeTestProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CodeTestProject();
// End Cross Module References
	void ACodeTestProjectGameMode::StaticRegisterNativesACodeTestProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACodeTestProjectGameMode_NoRegister()
	{
		return ACodeTestProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACodeTestProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodeTestProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeTestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodeTestProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CodeTestProjectGameMode.h" },
		{ "ModuleRelativePath", "CodeTestProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodeTestProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodeTestProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodeTestProjectGameMode_Statics::ClassParams = {
		&ACodeTestProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACodeTestProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodeTestProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodeTestProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodeTestProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodeTestProjectGameMode, 1199672326);
	template<> CODETESTPROJECT_API UClass* StaticClass<ACodeTestProjectGameMode>()
	{
		return ACodeTestProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodeTestProjectGameMode(Z_Construct_UClass_ACodeTestProjectGameMode, &ACodeTestProjectGameMode::StaticClass, TEXT("/Script/CodeTestProject"), TEXT("ACodeTestProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodeTestProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
