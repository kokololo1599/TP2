// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTAISpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTAISpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTAISpawner();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTAISpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTAISpawner ************************************************************
void ASDTAISpawner::StaticRegisterNativesASDTAISpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTAISpawner;
UClass* ASDTAISpawner::GetPrivateStaticClass()
{
	using TClass = ASDTAISpawner;
	if (!Z_Registration_Info_UClass_ASDTAISpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTAISpawner"),
			Z_Registration_Info_UClass_ASDTAISpawner.InnerSingleton,
			StaticRegisterNativesASDTAISpawner,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASDTAISpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTAISpawner_NoRegister()
{
	return ASDTAISpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTAISpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SDTAISpawner.h" },
		{ "ModuleRelativePath", "SDTAISpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CooldownToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "SDTAISpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CurrentCooldown_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "SDTAISpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_AIClassToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "SDTAISpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_TagToLookFor_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "SDTAISpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_CooldownToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_CurrentCooldown;
	static const UECodeGen_Private::FClassPropertyParams NewProp_m_AIClassToSpawn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_TagToLookFor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTAISpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_CooldownToSpawn = { "m_CooldownToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTAISpawner, m_CooldownToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CooldownToSpawn_MetaData), NewProp_m_CooldownToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_CurrentCooldown = { "m_CurrentCooldown", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTAISpawner, m_CurrentCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CurrentCooldown_MetaData), NewProp_m_CurrentCooldown_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_AIClassToSpawn = { "m_AIClassToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTAISpawner, m_AIClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_AIClassToSpawn_MetaData), NewProp_m_AIClassToSpawn_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_TagToLookFor = { "m_TagToLookFor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTAISpawner, m_TagToLookFor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_TagToLookFor_MetaData), NewProp_m_TagToLookFor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDTAISpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_CooldownToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_CurrentCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_AIClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTAISpawner_Statics::NewProp_m_TagToLookFor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAISpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASDTAISpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAISpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTAISpawner_Statics::ClassParams = {
	&ASDTAISpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASDTAISpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAISpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAISpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTAISpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTAISpawner()
{
	if (!Z_Registration_Info_UClass_ASDTAISpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTAISpawner.OuterSingleton, Z_Construct_UClass_ASDTAISpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTAISpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTAISpawner);
ASDTAISpawner::~ASDTAISpawner() {}
// ********** End Class ASDTAISpawner **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAISpawner_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTAISpawner, ASDTAISpawner::StaticClass, TEXT("ASDTAISpawner"), &Z_Registration_Info_UClass_ASDTAISpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTAISpawner), 1638075812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAISpawner_h__Script_SoftDesignTraining_1176244807(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAISpawner_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAISpawner_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
