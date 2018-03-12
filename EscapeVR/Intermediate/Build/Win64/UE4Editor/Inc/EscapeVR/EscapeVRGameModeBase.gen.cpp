// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EscapeVRGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeVRGameModeBase() {}
// Cross Module References
	ESCAPEVR_API UClass* Z_Construct_UClass_AEscapeVRGameModeBase_NoRegister();
	ESCAPEVR_API UClass* Z_Construct_UClass_AEscapeVRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscapeVR();
// End Cross Module References
	void AEscapeVRGameModeBase::StaticRegisterNativesAEscapeVRGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEscapeVRGameModeBase_NoRegister()
	{
		return AEscapeVRGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEscapeVRGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_EscapeVR,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "EscapeVRGameModeBase.h" },
				{ "ModuleRelativePath", "EscapeVRGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEscapeVRGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEscapeVRGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeVRGameModeBase, 2393699933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeVRGameModeBase(Z_Construct_UClass_AEscapeVRGameModeBase, &AEscapeVRGameModeBase::StaticClass, TEXT("/Script/EscapeVR"), TEXT("AEscapeVRGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeVRGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
