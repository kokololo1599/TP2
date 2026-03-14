// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTBoatAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTBoatAIController() {}

// ********** Begin Cross Module References ********************************************************
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBaseAIController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBoatAIController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTBoatAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASDTBoatAIController *****************************************************
void ASDTBoatAIController::StaticRegisterNativesASDTBoatAIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASDTBoatAIController;
UClass* ASDTBoatAIController::GetPrivateStaticClass()
{
	using TClass = ASDTBoatAIController;
	if (!Z_Registration_Info_UClass_ASDTBoatAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTBoatAIController"),
			Z_Registration_Info_UClass_ASDTBoatAIController.InnerSingleton,
			StaticRegisterNativesASDTBoatAIController,
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
	return Z_Registration_Info_UClass_ASDTBoatAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASDTBoatAIController_NoRegister()
{
	return ASDTBoatAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASDTBoatAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SDTBoatAIController.h" },
		{ "ModuleRelativePath", "SDTBoatAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTBoatAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASDTBoatAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASDTBaseAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoatAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTBoatAIController_Statics::ClassParams = {
	&ASDTBoatAIController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDTBoatAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDTBoatAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDTBoatAIController()
{
	if (!Z_Registration_Info_UClass_ASDTBoatAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTBoatAIController.OuterSingleton, Z_Construct_UClass_ASDTBoatAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDTBoatAIController.OuterSingleton;
}
ASDTBoatAIController::ASDTBoatAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTBoatAIController);
ASDTBoatAIController::~ASDTBoatAIController() {}
// ********** End Class ASDTBoatAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatAIController_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDTBoatAIController, ASDTBoatAIController::StaticClass, TEXT("ASDTBoatAIController"), &Z_Registration_Info_UClass_ASDTBoatAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTBoatAIController), 1210780770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatAIController_h__Script_SoftDesignTraining_2117471838(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatAIController_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTBoatAIController_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
