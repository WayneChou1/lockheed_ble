// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef BLUESTSDK_SWIFT_H
#define BLUESTSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreBluetooth;
@import Foundation;
@import ObjectiveC;
#endif

#import <BlueSTSDK/BlueSTSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BlueSTSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_PROTOCOL("_TtP9BlueSTSDK16BleAdvertiseInfo_")
@protocol BleAdvertiseInfo <NSObject>
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly, copy) NSString * _Nullable address;
@property (nonatomic, readonly) uint32_t featureMap;
@property (nonatomic, readonly) uint8_t deviceId;
@property (nonatomic, readonly) uint8_t protocolVersion;
@property (nonatomic, readonly) BlueSTSDKNodeType boardType;
@property (nonatomic, readonly) BOOL isSleeping;
@property (nonatomic, readonly) BOOL hasGeneralPurpose;
@property (nonatomic, readonly) uint8_t txPower;
@end


SWIFT_PROTOCOL("_TtP9BlueSTSDK24BlueSTSDKAdvertiseFilter_")
@protocol BlueSTSDKAdvertiseFilter
/// @param data: advertise data from centralManager(_ central: CBCentralManager, didDiscover peripheral: CBPeripheral, advertisementData: [String : Any], rssi RSSI: NSNumber)
/// @return nill if the advertise doesn’t contain all the needed info, otherwise a info object that is used to build the node
- (id <BleAdvertiseInfo> _Nullable)filter:(NSDictionary<NSString *, id> * _Nonnull)data SWIFT_WARN_UNUSED_RESULT;
@end

@class NSData;

@interface BlueSTSDKDebug (SWIFT_EXTENSION(BlueSTSDK))
+ (NSData * _Nullable)stringToData:(NSString * _Nonnull)str SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)dataToString:(NSData * _Nonnull)data SWIFT_WARN_UNUSED_RESULT;
@end

@class BlueSTSDKFeatureField;
@class BlueSTSDKNode;
@class BlueSTSDKExtractResult;

SWIFT_CLASS("_TtC9BlueSTSDK25BlueSTSDKFeatureAILogging")
@interface BlueSTSDKFeatureAILogging : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK24BlueSTSDKFeatureActivity")
@interface BlueSTSDKFeatureActivity : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end

@class BlueSTSDKFeatureSample;

/// feature that doesn’t use the first 2 bytes as timestamp, and avoid to notify
/// the delegate using a parallel queue
SWIFT_CLASS("_TtC9BlueSTSDK28BlueSTSDKFeatureGenericAudio")
@interface BlueSTSDKFeatureGenericAudio : BlueSTSDKDeviceTimestampFeature
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
- (void)notifyUpdateWithSample:(BlueSTSDKFeatureSample * _Nullable)sample;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9BlueSTSDK26BlueSTSDKFeatureAudioADPCM")
@interface BlueSTSDKFeatureAudioADPCM : BlueSTSDKFeatureGenericAudio
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node SWIFT_UNAVAILABLE;
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)description SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


/// <ul>
///   <li>
///     Feature that export the information needed for decode an ADPCM stream
///   </li>
///   <li>
///   </li>
///   <li>
///     @author STMicroelectronics - Central Labs.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC9BlueSTSDK30BlueSTSDKFeatureAudioADPCMSync")
@interface BlueSTSDKFeatureAudioADPCMSync : BlueSTSDKFeatureGenericAudio
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK35BlueSTSDKFeatureAudioCalssification")
@interface BlueSTSDKFeatureAudioCalssification : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK25BlueSTSDKFeatureAudioOpus")
@interface BlueSTSDKFeatureAudioOpus : BlueSTSDKFeatureGenericAudio
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK29BlueSTSDKFeatureAudioOpusConf")
@interface BlueSTSDKFeatureAudioOpusConf : BlueSTSDKFeatureGenericAudio
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK26BlueSTSDKFeatureEulerAngle")
@interface BlueSTSDKFeatureEulerAngle : BlueSTSDKFeatureAutoConfigurable
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK28BlueSTSDKFeatureEventCounter")
@interface BlueSTSDKFeatureEventCounter : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK28BlueSTSDKFeatureFFTAmplitude")
@interface BlueSTSDKFeatureFFTAmplitude : BlueSTSDKDeviceTimestampFeature
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (BOOL)enableNotification SWIFT_WARN_UNUSED_RESULT;
- (BOOL)disableNotification SWIFT_WARN_UNUSED_RESULT;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK34BlueSTSDKFeatureFiniteStateMachine")
@interface BlueSTSDKFeatureFiniteStateMachine : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK31BlueSTSDKFeatureFitnessActivity")
@interface BlueSTSDKFeatureFitnessActivity : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end



SWIFT_CLASS("_TtC9BlueSTSDK35BlueSTSDKFeatureMachineLearningCore")
@interface BlueSTSDKFeatureMachineLearningCore : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK24BlueSTSDKFeatureMemsNorm")
@interface BlueSTSDKFeatureMemsNorm : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK31BlueSTSDKFeatureMotionAlogrithm")
@interface BlueSTSDKFeatureMotionAlogrithm : BlueSTSDKFeature
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK35BlueSTSDKFeatureMotorTimeParameters")
@interface BlueSTSDKFeatureMotorTimeParameters : BlueSTSDKFeature
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK32BlueSTSDKFeaturePredictiveStatus")
@interface BlueSTSDKFeaturePredictiveStatus : BlueSTSDKFeature
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9BlueSTSDK44BlueSTSDKFeaturePredictiveAccelerationStatus")
@interface BlueSTSDKFeaturePredictiveAccelerationStatus : BlueSTSDKFeaturePredictiveStatus
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK47BlueSTSDKFeaturePredictiveFrequencyDomainStatus")
@interface BlueSTSDKFeaturePredictiveFrequencyDomainStatus : BlueSTSDKFeaturePredictiveStatus
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9BlueSTSDK37BlueSTSDKFeaturePredictiveSpeedStatus")
@interface BlueSTSDKFeaturePredictiveSpeedStatus : BlueSTSDKFeaturePredictiveStatus
- (NSArray<BlueSTSDKFeatureField *> * _Nonnull)getFieldsDesc SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node OBJC_DESIGNATED_INITIALIZER;
- (BlueSTSDKExtractResult * _Nonnull)extractData:(uint64_t)timestamp data:(NSData * _Nonnull)data dataOffset:(uint32_t)offset SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWhitNode:(BlueSTSDKNode * _Nonnull)node name:(NSString * _Nonnull)name SWIFT_UNAVAILABLE;
@end



@class NSNumber;
@protocol BlueSTSDKManagerDelegate;
@class CBPeripheral;

SWIFT_CLASS("_TtC9BlueSTSDK16BlueSTSDKManager")
@interface BlueSTSDKManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BlueSTSDKManager * _Nonnull sharedInstance;)
+ (BlueSTSDKManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// Get all the discovered nodes
/// @return array of {@link BlueSTSDKNode} with all the discovered nodes
@property (nonatomic, readonly, copy) NSArray<BlueSTSDKNode *> * _Nonnull nodes;
/// Tell if the manager is in a discovery state
/// @return true if the manager is seaching for new nodes
@property (nonatomic, readonly) BOOL isDiscovering;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)discoveryStart;
- (void)discoveryStart:(NSInteger)timeoutMs;
/// Start a discovery process that will scan for a new node. The discovery will
/// stop after {@code timeoutMs} milliseconds
/// @param timeoutMs milliseconds to wait before stop the scanning
- (void)discoveryStart:(NSInteger)timeoutMs advertiseFilters:(NSArray<id <BlueSTSDKAdvertiseFilter>> * _Nonnull)advertiseFilters;
/// Stop the discovery process
- (void)discoveryStop;
- (void)resetDiscovery;
/// Remove all the discovered nodes
/// @param force if true remove also the connected nodes
- (void)resetDiscovery:(BOOL)disconnectAll;
/// add a new node and call all the delegate for notify the discovery of a new node
/// @param node new discovered node
- (void)addVirtualNode;
/// Search in the discovered node the one that has a particular name,
/// @note the node name is not unique so we will return the first node that match the name
/// @param name node name to search
/// @return a node with the name, or nil if a node with that name doesn’t exist
- (BlueSTSDKNode * _Nullable)nodeWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
/// Add to a node a list of possible feature exported by the node
/// @param nodeId  new board id or a board id that we want extend
/// @param features map of new features add to the board, it is a dictionary of
/// <{@link featureMask_t},BlueSTSDKFeature>
/// @throw an exception if the featureMask as more than one bit set to 1
- (BOOL)addFeatureForNodeWithNodeId:(uint8_t)nodeId features:(NSDictionary<NSNumber *, SWIFT_METATYPE(BlueSTSDKFeature)> * _Nonnull)features error:(NSError * _Nullable * _Nullable)error;
- (NSDictionary<NSNumber *, SWIFT_METATYPE(BlueSTSDKFeature)> * _Nonnull)getFeaturesForNode:(uint8_t)nodeId SWIFT_WARN_UNUSED_RESULT;
- (void)removeDelegate:(id <BlueSTSDKManagerDelegate> _Nonnull)delegate;
- (void)remove:(id <BlueSTSDKManagerDelegate> _Nonnull)delegate SWIFT_DEPRECATED_MSG("Use removeDelegate");
- (void)addDelegate:(id <BlueSTSDKManagerDelegate> _Nonnull)delegate;
- (void)add:(id <BlueSTSDKManagerDelegate> _Nonnull)delegate SWIFT_DEPRECATED_MSG("Use addDelegate");
- (void)connect:(CBPeripheral * _Nonnull)peripheral;
- (void)disconnect:(CBPeripheral * _Nonnull)peripheral;
@end

@class CBCentralManager;

@interface BlueSTSDKManager (SWIFT_EXTENSION(BlueSTSDK)) <CBCentralManagerDelegate>
- (void)centralManager:(CBCentralManager * _Nonnull)central didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)central didConnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
- (void)centralManager:(CBCentralManager * _Nonnull)central didFailToConnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
@end


SWIFT_PROTOCOL("_TtP9BlueSTSDK24BlueSTSDKManagerDelegate_")
@protocol BlueSTSDKManagerDelegate
/// Function called when a new node is discovered
/// @param manager manager that discovered the node (the manger is a singleton,
/// so this parameter is only for have a consistent method sign with the others delegate)
/// @param node new node discovered
- (void)manager:(BlueSTSDKManager * _Nonnull)manager didDiscoverNode:(BlueSTSDKNode * _Nonnull)didDiscoverNode;
/// Function called when the status of the manager change
/// @param manager manager that discovered the node (the manger is a singleton,
/// so this parameter is only for have a consistent method sign with the others delegate)
/// @param enable true if the manger start a scan process, false if it end the scanning
- (void)manager:(BlueSTSDKManager * _Nonnull)manager didChangeDiscovery:(BOOL)didChangeDiscovery;
@end


@interface CBCharacteristic (SWIFT_EXTENSION(BlueSTSDK))
@property (nonatomic, readonly) BOOL isConfigCharacteristics;
@property (nonatomic, readonly) BOOL isConfigControlCharacteristic;
@property (nonatomic, readonly) BOOL isConfigFeatureCommandCharacteristic;
@end


@interface CBCharacteristic (SWIFT_EXTENSION(BlueSTSDK))
@property (nonatomic, readonly) BOOL isDebugCharacteristic;
@property (nonatomic, readonly) BOOL isDebugTermCharacteristic;
@property (nonatomic, readonly) BOOL isDebugErrorCharacteristic;
@end


@interface CBCharacteristic (SWIFT_EXTENSION(BlueSTSDK))
/// tell if a characteristics has a valid uuid for be manage by this sdk
/// @param c characteristic to test
/// @return true if the characteristics can be manage by this sdk
@property (nonatomic, readonly) BOOL isFeatureCaracteristics;
/// tell if a characteristics has a valid uudi for be manage by this sdk as a
/// general pourpose characteristics
/// @param c characteristic to test
/// @return true if the characteristics can be manage by this sdk as general purpose characteristics
@property (nonatomic, readonly) BOOL isFeatureGeneralPurposeCharacteristics;
@property (nonatomic, readonly, copy) NSArray<SWIFT_METATYPE(BlueSTSDKFeature)> * _Nullable extendedFeature;
@end


@interface CBService (SWIFT_EXTENSION(BlueSTSDK))
@property (nonatomic, readonly) BOOL isDebugService;
@property (nonatomic, readonly) BOOL isConfigService;
@end


@interface CBUUID (SWIFT_EXTENSION(BlueSTSDK))
/// extract the feature mask from an uuid value, tell to the user witch feature
/// are exported by this characteristics
/// @return characteristics feature mask
@property (nonatomic, readonly) uint32_t featureMask;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
