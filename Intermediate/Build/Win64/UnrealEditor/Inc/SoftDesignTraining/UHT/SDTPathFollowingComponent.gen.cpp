// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTPathFollowingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSDTPathFollowingComponent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTPathFollowingComponent();
SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_USDTPathFollowingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USDTPathFollowingComponent ***********************************************
void USDTPathFollowingComponent::StaticRegisterNativesUSDTPathFollowingComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USDTPathFollowingComponent;
UClass* USDTPathFollowingComponent::GetPrivateStaticClass()
{
	using TClass = USDTPathFollowingComponent;
	if (!Z_Registration_Info_UClass_USDTPathFollowingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SDTPathFollowingComponent"),
			Z_Registration_Info_UClass_USDTPathFollowingComponent.InnerSingleton,
			StaticRegisterNativesUSDTPathFollowingComponent,
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
	return Z_Registration_Info_UClass_USDTPathFollowingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USDTPathFollowingComponent_NoRegister()
{
	return USDTPathFollowingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USDTPathFollowingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "IncludePath", "SDTPathFollowingComponent.h" },
		{ "ModuleRelativePath", "SDTPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumProgress_MetaData[] = {
		{ "Category", "SDTPathFollowingComponent" },
		{ "ModuleRelativePath", "SDTPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isJumping_MetaData[] = {
		{ "Category", "SDTPathFollowingComponent" },
		{ "ModuleRelativePath", "SDTPathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumProgress;
	static void NewProp_isJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isJumping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDTPathFollowingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USDTPathFollowingComponent_Statics::NewProp_jumProgress = { "jumProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USDTPathFollowingComponent, jumProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumProgress_MetaData), NewProp_jumProgress_MetaData) };
void Z_Construct_UClass_USDTPathFollowingComponent_Statics::NewProp_isJumping_SetBit(void* Obj)
{
	((USDTPathFollowingComponent*)Obj)->isJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USDTPathFollowingComponent_Statics::NewProp_isJumping = { "isJumping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USDTPathFollowingComponent), &Z_Construct_UClass_USDTPathFollowingComponent_Statics::NewProp_isJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isJumping_MetaData), NewProp_isJumping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDTPathFollowingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDTPathFollowingComponent_Statics::NewProp_jumProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDTPathFollowingComponent_Statics::NewProp_isJumping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDTPathFollowingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USDTPathFollowingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USDTPathFollowingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USDTPathFollowingComponent_Statics::ClassParams = {
	&USDTPathFollowingComponent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USDTPathFollowingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USDTPathFollowingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USDTPathFollowingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USDTPathFollowingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USDTPathFollowingComponent()
{
	if (!Z_Registration_Info_UClass_USDTPathFollowingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDTPathFollowingComponent.OuterSingleton, Z_Construct_UClass_USDTPathFollowingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USDTPathFollowingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USDTPathFollowingComponent);
USDTPathFollowingComponent::~USDTPathFollowingComponent() {}
// ********** End Class USDTPathFollowingComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTPathFollowingComponent_h__Script_SoftDesignTraining_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USDTPathFollowingComponent, USDTPathFollowingComponent::StaticClass, TEXT("USDTPathFollowingComponent"), &Z_Registration_Info_UClass_USDTPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDTPathFollowingComponent), 4063484018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTPathFollowingComponent_h__Script_SoftDesignTraining_160550596(TEXT("/Script/SoftDesignTraining"),
	Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTPathFollowingComponent_h__Script_SoftDesignTraining_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tsima_Documents_HIV_2026_LOG8235_TP2_Source_SoftDesignTraining_SDTPathFollowingComponent_h__Script_SoftDesignTraining_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
