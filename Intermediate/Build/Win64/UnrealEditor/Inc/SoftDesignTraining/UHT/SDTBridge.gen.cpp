// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTBridge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTBridge() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBridge();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBridge_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTBridge ***************************************************************
void ASDTBridge::StaticRegisterNativesASDTBridge()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTBridge;
UClass* ASDTBridge::GetPrivateStaticClass()
{
	using TClass = ASDTBridge;
	if (!Z_Registration_Info_UClass_ASDTBridge.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTBridge"),
			Z_Registration_Info_UClass_ASDTBridge.InnerSingleton,
			StaticRegisterNativesASDTBridge,
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
	return Z_Registration_Info_UClass_ASDTBridge.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTBridge_NoRegister()
{
	return ASDTBridge::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SDTBridge.h" },
		{ "ModuleRelativePath", "SDTBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_BridgeOpeningAlpha_MetaData[] = {
		{ "Category", "Bridge" },
		{ "ModuleRelativePath", "SDTBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_BridgeOpenningSpeed_MetaData[] = {
		{ "Category", "Bridge" },
		{ "ModuleRelativePath", "SDTBridge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_BridgeOpeningAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_BridgeOpenningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDTBridge_Statics::NewProp_m_BridgeOpeningAlpha = { "m_BridgeOpeningAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTBridge, m_BridgeOpeningAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_BridgeOpeningAlpha_MetaData), NewProp_m_BridgeOpeningAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDTBridge_Statics::NewProp_m_BridgeOpenningSpeed = { "m_BridgeOpenningSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTBridge, m_BridgeOpenningSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_BridgeOpenningSpeed_MetaData), NewProp_m_BridgeOpenningSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDTBridge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTBridge_Statics::NewProp_m_BridgeOpeningAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTBridge_Statics::NewProp_m_BridgeOpenningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBridge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASDTBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTBridge_Statics::ClassParams = {
	&ASDTBridge::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASDTBridge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBridge_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTBridge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTBridge()
{
	if (!Z_Registration_Info_UClass_ASDTBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTBridge.OuterSingleton, Z_Construct_UClass_ASDTBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTBridge.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTBridge);
ASDTBridge::~ASDTBridge() {}
// ********** End Class ASDTBridge *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBridge_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTBridge, ASDTBridge::StaticClass, TEXT("ASDTBridge"), &Z_Registration_Info_UClass_ASDTBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTBridge), 897952562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBridge_h__Script_SoftDesignTraining_296881091(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBridge_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBridge_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
