// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FVector;
#ifdef FIREUTIL_FireUtilBPLibrary_generated_h
#error "FireUtilBPLibrary.generated.h already included, missing '#pragma once' in FireUtilBPLibrary.h"
#endif
#define FIREUTIL_FireUtilBPLibrary_generated_h

#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTraceVectorLength) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Object); \
		P_GET_PROPERTY(UByteProperty,Z_Param_myAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_length); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End); \
		P_FINISH; \
		UFireUtilBPLibrary::TraceVectorLength(Z_Param_Object,EAxis::Type(Z_Param_myAxis),Z_Param_length,Z_Param_Out_Start,Z_Param_Out_End); \
	} \
 \
	DECLARE_FUNCTION(execFireUtilSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		*(float*)Z_Param__Result=UFireUtilBPLibrary::FireUtilSampleFunction(Z_Param_Param); \
	}


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceVectorLength) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Object); \
		P_GET_PROPERTY(UByteProperty,Z_Param_myAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_length); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End); \
		P_FINISH; \
		UFireUtilBPLibrary::TraceVectorLength(Z_Param_Object,EAxis::Type(Z_Param_myAxis),Z_Param_length,Z_Param_Out_Start,Z_Param_Out_End); \
	} \
 \
	DECLARE_FUNCTION(execFireUtilSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		*(float*)Z_Param__Result=UFireUtilBPLibrary::FireUtilSampleFunction(Z_Param_Param); \
	}


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFireUtilBPLibrary(); \
	friend FIREUTIL_API class UClass* Z_Construct_UClass_UFireUtilBPLibrary(); \
	public: \
	DECLARE_CLASS(UFireUtilBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireUtil"), NO_API) \
	DECLARE_SERIALIZER(UFireUtilBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_INCLASS \
	private: \
	static void StaticRegisterNativesUFireUtilBPLibrary(); \
	friend FIREUTIL_API class UClass* Z_Construct_UClass_UFireUtilBPLibrary(); \
	public: \
	DECLARE_CLASS(UFireUtilBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireUtil"), NO_API) \
	DECLARE_SERIALIZER(UFireUtilBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireUtilBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireUtilBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireUtilBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireUtilBPLibrary); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFireUtilBPLibrary(const UFireUtilBPLibrary& InCopy); \
public:


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireUtilBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFireUtilBPLibrary(const UFireUtilBPLibrary& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireUtilBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireUtilBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireUtilBPLibrary)


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_25_PROLOG
#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_RPC_WRAPPERS \
	IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_INCLASS \
	IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FireUtilBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntoOrbit_Plugins_FireUtil_Source_FireUtil_Public_FireUtilBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
