// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTINGGROUNDS_PatrolRoute_generated_h
#error "PatrolRoute.generated.h already included, missing '#pragma once' in PatrolRoute.h"
#endif
#define TESTINGGROUNDS_PatrolRoute_generated_h

#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_RPC_WRAPPERS
#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPatrolRoute(); \
	friend TESTINGGROUNDS_API class UClass* Z_Construct_UClass_UPatrolRoute(); \
public: \
	DECLARE_CLASS(UPatrolRoute, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds"), NO_API) \
	DECLARE_SERIALIZER(UPatrolRoute) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPatrolRoute(); \
	friend TESTINGGROUNDS_API class UClass* Z_Construct_UClass_UPatrolRoute(); \
public: \
	DECLARE_CLASS(UPatrolRoute, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds"), NO_API) \
	DECLARE_SERIALIZER(UPatrolRoute) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPatrolRoute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPatrolRoute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPatrolRoute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPatrolRoute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPatrolRoute(UPatrolRoute&&); \
	NO_API UPatrolRoute(const UPatrolRoute&); \
public:


#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPatrolRoute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPatrolRoute(UPatrolRoute&&); \
	NO_API UPatrolRoute(const UPatrolRoute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPatrolRoute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPatrolRoute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPatrolRoute)


#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PatrolPoints() { return STRUCT_OFFSET(UPatrolRoute, PatrolPoints); }


#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_10_PROLOG
#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_RPC_WRAPPERS \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_INCLASS \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_INCLASS_NO_PURE_DECLS \
	TestingGrounds_Source_TestingGrounds_PatrolRoute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingGrounds_Source_TestingGrounds_PatrolRoute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
