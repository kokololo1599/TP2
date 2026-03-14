// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SoftDesignTrainingPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoftDesignTrainingPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASoftDesignTrainingPlayerController();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASoftDesignTrainingPlayerController_NoRegister();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTPathFollowingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASoftDesignTrainingPlayerController **************************************
void ASoftDesignTrainingPlayerController::StaticRegisterNativesASoftDesignTrainingPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController;
UClass* ASoftDesignTrainingPlayerController::GetPrivateStaticClass()
{
	using TClass = ASoftDesignTrainingPlayerController;
	if (!Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoftDesignTrainingPlayerController"),
			Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController.InnerSingleton,
			StaticRegisterNativesASoftDesignTrainingPlayerController,
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
	return Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASoftDesignTrainingPlayerController_NoRegister()
{
	return ASoftDesignTrainingPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SoftDesignTrainingPlayerController.h" },
		{ "ModuleRelativePath", "SoftDesignTrainingPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_PathFollowingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoftDesignTrainingPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_PathFollowingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoftDesignTrainingPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::NewProp_m_PathFollowingComponent = { "m_PathFollowingComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoftDesignTrainingPlayerController, m_PathFollowingComponent), Z_Construct_UClass_USDTPathFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_PathFollowingComponent_MetaData), NewProp_m_PathFollowingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::NewProp_m_PathFollowingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::ClassParams = {
	&ASoftDesignTrainingPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::PropPointers),
	0,
	0x008003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoftDesignTrainingPlayerController()
{
	if (!Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController.OuterSingleton, Z_Construct_UClass_ASoftDesignTrainingPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoftDesignTrainingPlayerController);
ASoftDesignTrainingPlayerController::~ASoftDesignTrainingPlayerController() {}
// ********** End Class ASoftDesignTrainingPlayerController ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingPlayerController_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoftDesignTrainingPlayerController, ASoftDesignTrainingPlayerController::StaticClass, TEXT("ASoftDesignTrainingPlayerController"), &Z_Registration_Info_UClass_ASoftDesignTrainingPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoftDesignTrainingPlayerController), 1891525455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingPlayerController_h__Script_SoftDesignTraining_1886526775(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingPlayerController_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SoftDesignTrainingPlayerController_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
