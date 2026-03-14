// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTBoat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTBoat() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBoat();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBoat_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTBoat *****************************************************************
void ASDTBoat::StaticRegisterNativesASDTBoat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTBoat;
UClass* ASDTBoat::GetPrivateStaticClass()
{
	using TClass = ASDTBoat;
	if (!Z_Registration_Info_UClass_ASDTBoat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTBoat"),
			Z_Registration_Info_UClass_ASDTBoat.InnerSingleton,
			StaticRegisterNativesASDTBoat,
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
	return Z_Registration_Info_UClass_ASDTBoat.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTBoat_NoRegister()
{
	return ASDTBoat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTBoat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SDTBoat.h" },
		{ "ModuleRelativePath", "SDTBoat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_Container_MetaData[] = {
		{ "Category", "Boat" },
		{ "ModuleRelativePath", "SDTBoat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTBoat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDTBoat_Statics::NewProp_m_Container = { "m_Container", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASDTBoat, m_Container), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_Container_MetaData), NewProp_m_Container_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDTBoat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDTBoat_Statics::NewProp_m_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASDTBoat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTBoat_Statics::ClassParams = {
	&ASDTBoat::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASDTBoat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoat_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoat_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTBoat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTBoat()
{
	if (!Z_Registration_Info_UClass_ASDTBoat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTBoat.OuterSingleton, Z_Construct_UClass_ASDTBoat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTBoat.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTBoat);
ASDTBoat::~ASDTBoat() {}
// ********** End Class ASDTBoat *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoat_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTBoat, ASDTBoat::StaticClass, TEXT("ASDTBoat"), &Z_Registration_Info_UClass_ASDTBoat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTBoat), 1233674151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoat_h__Script_SoftDesignTraining_3598163396(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoat_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoat_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
