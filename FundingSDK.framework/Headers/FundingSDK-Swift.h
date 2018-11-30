// Generated by Apple Swift version 4.2 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
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
#include <objc/NSObject.h>
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
#if __has_feature(modules)
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FundingSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




SWIFT_CLASS("_TtC10FundingSDK10CreditCard")
@interface CreditCard : NSObject
@property (nonatomic, copy) NSString * _Nonnull uuid;
@property (nonatomic, copy) NSString * _Null_unspecified cardNumber;
@property (nonatomic, copy) NSString * _Null_unspecified cvv;
@property (nonatomic, copy) NSString * _Null_unspecified expiry;
@property (nonatomic, copy) NSString * _Null_unspecified nameSurname;
@property (nonatomic) BOOL requiresVerification;
- (NSInteger)getExpirationMonth SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getExpiryYear SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCardHolderLastName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getCardholderFirstName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10FundingSDK11Environment")
@interface Environment : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Environment * _Nonnull DEV;)
+ (Environment * _Nonnull)DEV SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Environment * _Nonnull STAGING;)
+ (Environment * _Nonnull)STAGING SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Environment * _Nonnull PRODUCTION;)
+ (Environment * _Nonnull)PRODUCTION SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSError;

SWIFT_CLASS("_TtC10FundingSDK7FSError")
@interface FSError : NSObject <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) NSError * _Nonnull cause;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class FundingSDKBuilder;
@class UINavigationController;

SWIFT_CLASS("_TtC10FundingSDK10FundingSDK")
@interface FundingSDK : NSObject
+ (FundingSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Start the Funding for initial logic
/// important:
/// Don’t forget the implementation TokenProvider protocol for your valid access which is given by the Funding.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     FundingSDKBuilder: Builder includes TokenProvider and Environment
///   </li>
/// </ul>
/// \code
/// // Sample Implementation
/// let builder = FundingSDKBuilder().setEnvironment(environment: Environment.STAGING).setTokenProvider(provider: self)
/// FundingSDK.start(builder: builder)
///
/// \endcode
+ (void)startWithBuilder:(FundingSDKBuilder * _Nonnull)builder;
/// Add your creditCard for your card management
/// \param hostController Your initial navigationController that want open to use your add card controller
///
/// \param success Returns the added card model
///
/// \param creditCard Added card model
///
/// \param failure Returns the error object that includes error logic
///
/// \param error FSError object that includes error cause
///
///
/// throws:
/// <code>FSError</code>
/// <ul>
///   <li>
///     An error of type <code>FSError</code>
///   </li>
/// </ul>
- (void)addCreditCardWithHostController:(UINavigationController * _Nonnull)hostController success:(void (^ _Nonnull)(CreditCard * _Nullable))success failure:(void (^ _Nonnull)(FSError * _Nullable))failure;
/// Add your creditCard for your with your own xib file
/// precondition:
/// In your own controller that supply xib file, you should set your views our tag numbers for integration
/// \param hostController Your initial navigationController that want open to use your add card controller
///
/// \param nibName Your custom xib name
///
/// \param bundle Your bundle that where your xib file includes
///
/// \param success Returns the added card model
///
/// \param creditCard Added card model
///
/// \param failure Returns the error object that includes error logic
///
/// \param error FSError object that includes error cause
///
///
/// throws:
/// <code>FSError</code>
/// <ul>
///   <li>
///     An error of type <code>FSError</code>
///   </li>
/// </ul>
- (void)addCreditCardWithHostController:(UINavigationController * _Nonnull)hostController nibName:(NSString * _Nonnull)nibName bundle:(NSBundle * _Nonnull)bundle success:(void (^ _Nonnull)(CreditCard * _Nullable))success failure:(void (^ _Nonnull)(FSError * _Nullable))failure;
/// After you added your creditCard, you should verify it for security purposes. Until that, you only will be able integrate up to a certan limit.
/// precondition:
/// In your own controller that supply xib file, you should set your views our tag numbers for integration
/// <ul>
///   <li>
///     An error of type <code>FSError</code>
///   </li>
/// </ul>
/// \param success Returns the verified card model
///
/// \param creditCard Verified card model
///
/// \param failure Returns the error object that includes error logic
///
/// \param error FSError object that includes error cause
///
///
/// throws:
/// <code>FSError</code>
- (void)verifyCreditCardWithCreditCard:(CreditCard * _Nonnull)creditCard verifiedAmount:(NSString * _Nonnull)verifiedAmount success:(void (^ _Nonnull)(CreditCard * _Nullable))success failure:(void (^ _Nonnull)(FSError * _Nullable))failure;
- (void)testLoginWithUsername:(NSString * _Nonnull)username pin:(NSString * _Nonnull)pin callback:(void (^ _Nonnull)(NSString * _Nonnull))callback;
/// Get your all funding sources
/// <ul>
///   <li>
///     An error of type <code>FSError</code>
///   </li>
/// </ul>
/// \param success Returns the added cards
///
/// \param creditCards All cards that added before
///
/// \param failure Returns the error object that includes error logic
///
/// \param error FSError object that includes error cause
///
///
/// throws:
/// <code>FSError</code>
- (void)getFundingSourcesWithSuccess:(void (^ _Nonnull)(NSArray<CreditCard *> * _Nullable))success failure:(void (^ _Nonnull)(FSError * _Nullable))failure;
/// Remove your creditCard for your card management
/// <ul>
///   <li>
///     An error of type <code>FSError</code>
///   </li>
/// </ul>
/// \param cardId Your card id that you want to remove
///
/// \param success Called empty success closure if the card removed succesfully
///
/// \param failure Returns the error object that includes error logic
///
/// \param error FSError object that includes error cause
///
///
/// throws:
/// <code>FSError</code>
- (void)removeCardWithCardId:(NSString * _Nonnull)cardId success:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(FSError * _Nullable))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol FundingTokenProvider;

SWIFT_CLASS("_TtC10FundingSDK17FundingSDKBuilder")
@interface FundingSDKBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (FundingSDKBuilder * _Nonnull)setEnvironmentWithEnvironment:(Environment * _Nonnull)environment SWIFT_WARN_UNUSED_RESULT;
- (FundingSDKBuilder * _Nonnull)setTokenProviderWithProvider:(id <FundingTokenProvider> _Nonnull)provider SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP10FundingSDK20FundingTokenProvider_")
@protocol FundingTokenProvider <NSObject>
- (void)getFundingTokenOnTokenReceived:(void (^ _Nonnull)(NSString * _Nonnull))onTokenReceived;
@end

@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC10FundingSDK15SecureTextField")
@interface SecureTextField : UITextField
@property (nonatomic, strong) UIColor * _Null_unspecified errorColor;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
