// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTAnimNotify_JumpStart.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTAnimNotify_JumpStart() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTAnimNotify_JumpStart();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTAnimNotify_JumpStart_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USDTAnimNotify_JumpStart *************************************************
void USDTAnimNotify_JumpStart::StaticRegisterNativesUSDTAnimNotify_JumpStart()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDTAnimNotify_JumpStart;
UClass* USDTAnimNotify_JumpStart::GetPrivateStaticClass()
{
	using TClass = USDTAnimNotify_JumpStart;
	if (!Z_Registration_Info_UClass_USDTAnimNotify_JumpStart.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTAnimNotify_JumpStart"),
			Z_Registration_Info_UClass_USDTAnimNotify_JumpStart.InnerSingleton,
			StaticRegisterNativesUSDTAnimNotify_JumpStart,
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
	return Z_Registration_Info_UClass_USDTAnimNotify_JumpStart.InnerSingleton;
}
UClass* Z_Construct_UClass_USDTAnimNotify_JumpStart_NoRegister()
{
	return USDTAnimNotify_JumpStart::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SDTAnimNotify_JumpStart.h" },
		{ "ModuleRelativePath", "SDTAnimNotify_JumpStart.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDTAnimNotify_JumpStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics::ClassParams = {
	&USDTAnimNotify_JumpStart::StaticClass,
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
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics::Class_MetaDataParams), Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDTAnimNotify_JumpStart()
{
	if (!Z_Registration_Info_UClass_USDTAnimNotify_JumpStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDTAnimNotify_JumpStart.OuterSingleton, Z_Construct_UClass_USDTAnimNotify_JumpStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDTAnimNotify_JumpStart.OuterSingleton;
}
USDTAnimNotify_JumpStart::USDTAnimNotify_JumpStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDTAnimNotify_JumpStart);
USDTAnimNotify_JumpStart::~USDTAnimNotify_JumpStart() {}
// ********** End Class USDTAnimNotify_JumpStart ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpStart_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDTAnimNotify_JumpStart, USDTAnimNotify_JumpStart::StaticClass, TEXT("USDTAnimNotify_JumpStart"), &Z_Registration_Info_UClass_USDTAnimNotify_JumpStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDTAnimNotify_JumpStart), 1019201062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpStart_h__Script_SoftDesignTraining_2460670807(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpStart_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpStart_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
