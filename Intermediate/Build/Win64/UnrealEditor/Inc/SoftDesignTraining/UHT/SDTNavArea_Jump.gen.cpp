// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTNavArea_Jump.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTNavArea_Jump() {}

// ********** Begin Cross Module References ********************************************************
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTNavArea_Jump();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTNavArea_Jump_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USDTNavArea_Jump *********************************************************
void USDTNavArea_Jump::StaticRegisterNativesUSDTNavArea_Jump()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDTNavArea_Jump;
UClass* USDTNavArea_Jump::GetPrivateStaticClass()
{
	using TClass = USDTNavArea_Jump;
	if (!Z_Registration_Info_UClass_USDTNavArea_Jump.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTNavArea_Jump"),
			Z_Registration_Info_UClass_USDTNavArea_Jump.InnerSingleton,
			StaticRegisterNativesUSDTNavArea_Jump,
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
	return Z_Registration_Info_UClass_USDTNavArea_Jump.InnerSingleton;
}
UClass* Z_Construct_UClass_USDTNavArea_Jump_NoRegister()
{
	return USDTNavArea_Jump::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDTNavArea_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SDTNavArea_Jump.h" },
		{ "ModuleRelativePath", "SDTNavArea_Jump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDTNavArea_Jump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USDTNavArea_Jump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDTNavArea_Jump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDTNavArea_Jump_Statics::ClassParams = {
	&USDTNavArea_Jump::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDTNavArea_Jump_Statics::Class_MetaDataParams), Z_Construct_UClass_USDTNavArea_Jump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDTNavArea_Jump()
{
	if (!Z_Registration_Info_UClass_USDTNavArea_Jump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDTNavArea_Jump.OuterSingleton, Z_Construct_UClass_USDTNavArea_Jump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDTNavArea_Jump.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDTNavArea_Jump);
USDTNavArea_Jump::~USDTNavArea_Jump() {}
// ********** End Class USDTNavArea_Jump ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTNavArea_Jump_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDTNavArea_Jump, USDTNavArea_Jump::StaticClass, TEXT("USDTNavArea_Jump"), &Z_Registration_Info_UClass_USDTNavArea_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDTNavArea_Jump), 4032448378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTNavArea_Jump_h__Script_SoftDesignTraining_1727025346(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTNavArea_Jump_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTNavArea_Jump_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
