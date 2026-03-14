// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTBoatOperator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTBoatOperator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBoatOperator();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBoatOperator_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTBoatOperator *********************************************************
void ASDTBoatOperator::StaticRegisterNativesASDTBoatOperator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTBoatOperator;
UClass* ASDTBoatOperator::GetPrivateStaticClass()
{
	using TClass = ASDTBoatOperator;
	if (!Z_Registration_Info_UClass_ASDTBoatOperator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTBoatOperator"),
			Z_Registration_Info_UClass_ASDTBoatOperator.InnerSingleton,
			StaticRegisterNativesASDTBoatOperator,
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
	return Z_Registration_Info_UClass_ASDTBoatOperator.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTBoatOperator_NoRegister()
{
	return ASDTBoatOperator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTBoatOperator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SDTBoatOperator.h" },
		{ "ModuleRelativePath", "SDTBoatOperator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_RootComponent_MetaData[] = {
		{ "Category", "SDTBoatOperator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SDTBoatOperator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_BoatDropPoint_MetaData[] = {
		{ "Category", "SDTBoatOperator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SDTBoatOperator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_TimeToEmptyContainer_MetaData[] = {
		{ "Category", "Boat" },
		{ "ModuleRelativePath", "SDTBoatOperator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_RootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_BoatDropPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_TimeToEmptyContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTBoatOperator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDTBoatOperator_Statics::NewProp_m_RootComponent = { "m_RootComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTBoatOperator, m_RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_RootComponent_MetaData), NewProp_m_RootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDTBoatOperator_Statics::NewProp_m_BoatDropPoint = { "m_BoatDropPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTBoatOperator, m_BoatDropPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_BoatDropPoint_MetaData), NewProp_m_BoatDropPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDTBoatOperator_Statics::NewProp_m_TimeToEmptyContainer = { "m_TimeToEmptyContainer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTBoatOperator, m_TimeToEmptyContainer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_TimeToEmptyContainer_MetaData), NewProp_m_TimeToEmptyContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDTBoatOperator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTBoatOperator_Statics::NewProp_m_RootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTBoatOperator_Statics::NewProp_m_BoatDropPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTBoatOperator_Statics::NewProp_m_TimeToEmptyContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoatOperator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASDTBoatOperator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoatOperator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTBoatOperator_Statics::ClassParams = {
	&ASDTBoatOperator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASDTBoatOperator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoatOperator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoatOperator_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTBoatOperator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTBoatOperator()
{
	if (!Z_Registration_Info_UClass_ASDTBoatOperator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTBoatOperator.OuterSingleton, Z_Construct_UClass_ASDTBoatOperator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTBoatOperator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTBoatOperator);
ASDTBoatOperator::~ASDTBoatOperator() {}
// ********** End Class ASDTBoatOperator ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatOperator_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTBoatOperator, ASDTBoatOperator::StaticClass, TEXT("ASDTBoatOperator"), &Z_Registration_Info_UClass_ASDTBoatOperator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTBoatOperator), 1785725049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatOperator_h__Script_SoftDesignTraining_429458455(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatOperator_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatOperator_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
