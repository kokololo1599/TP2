// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTBaseAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTBaseAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBaseAIController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBaseAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTBaseAIController *****************************************************
void ASDTBaseAIController::StaticRegisterNativesASDTBaseAIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTBaseAIController;
UClass* ASDTBaseAIController::GetPrivateStaticClass()
{
	using TClass = ASDTBaseAIController;
	if (!Z_Registration_Info_UClass_ASDTBaseAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTBaseAIController"),
			Z_Registration_Info_UClass_ASDTBaseAIController.InnerSingleton,
			StaticRegisterNativesASDTBaseAIController,
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
	return Z_Registration_Info_UClass_ASDTBaseAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTBaseAIController_NoRegister()
{
	return ASDTBaseAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTBaseAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SDTBaseAIController.h" },
		{ "ModuleRelativePath", "SDTBaseAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTBaseAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASDTBaseAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBaseAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTBaseAIController_Statics::ClassParams = {
	&ASDTBaseAIController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBaseAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTBaseAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTBaseAIController()
{
	if (!Z_Registration_Info_UClass_ASDTBaseAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTBaseAIController.OuterSingleton, Z_Construct_UClass_ASDTBaseAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTBaseAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTBaseAIController);
ASDTBaseAIController::~ASDTBaseAIController() {}
// ********** End Class ASDTBaseAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBaseAIController_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTBaseAIController, ASDTBaseAIController::StaticClass, TEXT("ASDTBaseAIController"), &Z_Registration_Info_UClass_ASDTBaseAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTBaseAIController), 3569826980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBaseAIController_h__Script_SoftDesignTraining_3123648181(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBaseAIController_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBaseAIController_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
