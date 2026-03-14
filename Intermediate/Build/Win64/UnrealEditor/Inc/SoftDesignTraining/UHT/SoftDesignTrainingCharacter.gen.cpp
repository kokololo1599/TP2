// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SoftDesignTrainingCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoftDesignTrainingCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASoftDesignTrainingCharacter();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASoftDesignTrainingCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASoftDesignTrainingCharacter *********************************************
void ASoftDesignTrainingCharacter::StaticRegisterNativesASoftDesignTrainingCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASoftDesignTrainingCharacter;
UClass* ASoftDesignTrainingCharacter::GetPrivateStaticClass()
{
	using TClass = ASoftDesignTrainingCharacter;
	if (!Z_Registration_Info_UClass_ASoftDesignTrainingCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoftDesignTrainingCharacter"),
			Z_Registration_Info_UClass_ASoftDesignTrainingCharacter.InnerSingleton,
			StaticRegisterNativesASoftDesignTrainingCharacter,
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
	return Z_Registration_Info_UClass_ASoftDesignTrainingCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASoftDesignTrainingCharacter_NoRegister()
{
	return ASoftDesignTrainingCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SoftDesignTrainingCharacter.h" },
		{ "ModuleRelativePath", "SoftDesignTrainingCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoftDesignTrainingCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics::ClassParams = {
	&ASoftDesignTrainingCharacter::StaticClass,
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
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoftDesignTrainingCharacter()
{
	if (!Z_Registration_Info_UClass_ASoftDesignTrainingCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoftDesignTrainingCharacter.OuterSingleton, Z_Construct_UClass_ASoftDesignTrainingCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoftDesignTrainingCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoftDesignTrainingCharacter);
ASoftDesignTrainingCharacter::~ASoftDesignTrainingCharacter() {}
// ********** End Class ASoftDesignTrainingCharacter ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingCharacter_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoftDesignTrainingCharacter, ASoftDesignTrainingCharacter::StaticClass, TEXT("ASoftDesignTrainingCharacter"), &Z_Registration_Info_UClass_ASoftDesignTrainingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoftDesignTrainingCharacter), 3024597134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingCharacter_h__Script_SoftDesignTraining_3938331758(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingCharacter_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingCharacter_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
