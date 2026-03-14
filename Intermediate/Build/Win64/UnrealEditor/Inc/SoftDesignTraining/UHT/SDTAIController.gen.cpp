// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTAIController() {}

// ********** Begin Cross Module References ********************************************************
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTAIController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTAIController_NoRegister();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBaseAIController();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTAIController *********************************************************
void ASDTAIController::StaticRegisterNativesASDTAIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTAIController;
UClass* ASDTAIController::GetPrivateStaticClass()
{
	using TClass = ASDTAIController;
	if (!Z_Registration_Info_UClass_ASDTAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTAIController"),
			Z_Registration_Info_UClass_ASDTAIController.InnerSingleton,
			StaticRegisterNativesASDTAIController,
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
	return Z_Registration_Info_UClass_ASDTAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTAIController_NoRegister()
{
	return ASDTAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SDTAIController.h" },
		{ "ModuleRelativePath", "SDTAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASDTAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASDTBaseAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTAIController_Statics::ClassParams = {
	&ASDTAIController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTAIController()
{
	if (!Z_Registration_Info_UClass_ASDTAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTAIController.OuterSingleton, Z_Construct_UClass_ASDTAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTAIController);
ASDTAIController::~ASDTAIController() {}
// ********** End Class ASDTAIController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAIController_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTAIController, ASDTAIController::StaticClass, TEXT("ASDTAIController"), &Z_Registration_Info_UClass_ASDTAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTAIController), 2262170136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAIController_h__Script_SoftDesignTraining_1167985298(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAIController_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTAIController_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
