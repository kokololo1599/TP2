// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTAnimNotify_JumpEnd.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTAnimNotify_JumpEnd() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTAnimNotify_JumpEnd();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTAnimNotify_JumpEnd_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USDTAnimNotify_JumpEnd ***************************************************
void USDTAnimNotify_JumpEnd::StaticRegisterNativesUSDTAnimNotify_JumpEnd()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd;
UClass* USDTAnimNotify_JumpEnd::GetPrivateStaticClass()
{
	using TClass = USDTAnimNotify_JumpEnd;
	if (!Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTAnimNotify_JumpEnd"),
			Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd.InnerSingleton,
			StaticRegisterNativesUSDTAnimNotify_JumpEnd,
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
	return Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd.InnerSingleton;
}
UClass* Z_Construct_UClass_USDTAnimNotify_JumpEnd_NoRegister()
{
	return USDTAnimNotify_JumpEnd::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SDTAnimNotify_JumpEnd.h" },
		{ "ModuleRelativePath", "SDTAnimNotify_JumpEnd.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDTAnimNotify_JumpEnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics::ClassParams = {
	&USDTAnimNotify_JumpEnd::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics::Class_MetaDataParams), Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDTAnimNotify_JumpEnd()
{
	if (!Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd.OuterSingleton, Z_Construct_UClass_USDTAnimNotify_JumpEnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd.OuterSingleton;
}
USDTAnimNotify_JumpEnd::USDTAnimNotify_JumpEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDTAnimNotify_JumpEnd);
USDTAnimNotify_JumpEnd::~USDTAnimNotify_JumpEnd() {}
// ********** End Class USDTAnimNotify_JumpEnd *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpEnd_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDTAnimNotify_JumpEnd, USDTAnimNotify_JumpEnd::StaticClass, TEXT("USDTAnimNotify_JumpEnd"), &Z_Registration_Info_UClass_USDTAnimNotify_JumpEnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDTAnimNotify_JumpEnd), 3658626033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpEnd_h__Script_SoftDesignTraining_1129089566(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpEnd_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAnimNotify_JumpEnd_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
