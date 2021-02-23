#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmpSharedUser, KmpSharedUserData, KmpSharedUserPaging, KmpSharedKotlinUnit, KmpSharedResult<__covariant T>, KmpSharedUserPagingParameters, KmpSharedUserPagingRequest, KmpSharedUserUpdateParameters, KmpSharedUserUpdateRequest, KmpSharedKotlinx_coroutines_coreCoroutineDispatcher, KmpSharedUseCase<__contravariant Params, __covariant T>, KmpSharedUseCaseResultNoParams<__covariant T>, KmpSharedUseCaseResult<__contravariant Params, __covariant T>, KmpSharedGetUserUseCaseParams, KmpSharedUseCaseNoParams<__covariant T>, KmpSharedLoginUseCaseParams, KmpSharedRegisterUseCaseParams, KmpSharedLoginRequest, KmpSharedRegistrationRequest, KmpSharedUserDto, KmpSharedUserPagingDto, KmpSharedKtor_client_coreHttpClient, KmpSharedLoginDto, KmpSharedRegistrationDto, KmpSharedKotlinThrowable, KmpSharedKotlinArray<T>, KmpSharedKotlinException, KmpSharedKtor_httpUrl, KmpSharedUserDataDto, KmpSharedAuthService, KmpSharedUserService, KmpSharedErrorResult, KmpSharedResultError<__covariant T>, KmpSharedResultSuccess<__covariant T>, KmpSharedAuthError, KmpSharedBackendError, KmpSharedCommonError, KmpSharedResultType, KmpSharedKoin_coreModule, KmpSharedKoin_coreKoinApplication, KmpSharedKotlinRuntimeException, KmpSharedKotlinIllegalStateException, KmpSharedKotlinAbstractCoroutineContextElement, KmpSharedKtor_client_coreHttpClientEngineConfig, KmpSharedKtor_client_coreHttpClientConfig<T>, KmpSharedKtor_client_coreHttpRequestBuilder, KmpSharedKtor_client_coreHttpClientCall, KmpSharedKtor_client_coreHttpReceivePipeline, KmpSharedKtor_client_coreHttpRequestPipeline, KmpSharedKtor_client_coreHttpResponsePipeline, KmpSharedKtor_client_coreHttpSendPipeline, KmpSharedKtor_httpURLProtocol, KmpSharedKoin_coreBeanDefinition<T>, KmpSharedKoin_coreScope, KmpSharedKoin_coreDefinitionParameters, KmpSharedKoin_coreOptions, KmpSharedKoin_coreScopeDSL, KmpSharedKoin_coreLogger, KmpSharedKoin_coreLevel, KmpSharedKoin_coreKoin, KmpSharedKotlinx_serialization_coreSerializersModule, KmpSharedKotlinx_serialization_coreSerialKind, KmpSharedKotlinNothing, KmpSharedKtor_client_coreHttpRequestData, KmpSharedKtor_client_coreHttpResponseData, KmpSharedKtor_client_coreProxyConfig, KmpSharedKtor_httpHeadersBuilder, KmpSharedKtor_httpURLBuilder, KmpSharedKtor_httpHttpMethod, KmpSharedKtor_client_coreTypeInfo, KmpSharedKtor_client_coreHttpResponse, KmpSharedKtor_utilsAttributeKey<T>, KmpSharedKtor_utilsPipelinePhase, KmpSharedKtor_utilsPipeline<TSubject, TContext>, KmpSharedKtor_client_coreHttpResponseContainer, KmpSharedKoin_coreKind, KmpSharedKoin_coreProperties, KmpSharedKoin_coreCallbacks<T>, KmpSharedKoin_coreScopeDefinition, KmpSharedKotlinLazyThreadSafetyMode, KmpSharedKotlinEnum<E>, KmpSharedKoin_corePropertyRegistry, KmpSharedKoin_coreScopeRegistry, KmpSharedKtor_httpOutgoingContent, KmpSharedKtor_httpHttpStatusCode, KmpSharedKtor_utilsGMTDate, KmpSharedKtor_httpHttpProtocolVersion, KmpSharedKtor_utilsStringValuesBuilder, KmpSharedKtor_httpParametersBuilder, KmpSharedKotlinx_coroutines_coreCancellationException, KmpSharedKtor_ioMemory, KmpSharedKtor_ioIoBuffer, KmpSharedKotlinByteArray, KmpSharedKtor_ioByteReadPacket, KmpSharedKtor_ioByteOrder, KmpSharedKtor_httpContentType, KmpSharedKtor_utilsWeekDay, KmpSharedKtor_utilsMonth, KmpSharedKtor_ioBuffer, KmpSharedKtor_ioChunkBuffer, KmpSharedKotlinCharArray, KmpSharedKotlinByteIterator, KmpSharedKtor_ioAbstractInput, KmpSharedKtor_ioByteReadPacketBase, KmpSharedKtor_ioByteReadPacketPlatformBase, KmpSharedKotlinKTypeProjection, KmpSharedKtor_httpHeaderValueParam, KmpSharedKtor_httpHeaderValueWithParameters, KmpSharedKotlinx_coroutines_coreAtomicDesc, KmpSharedKotlinx_coroutines_corePrepareOp, KmpSharedKotlinCharIterator, KmpSharedKotlinKVariance, KmpSharedKotlinx_coroutines_coreAtomicOp<__contravariant T>, KmpSharedKotlinx_coroutines_coreOpDescriptor, KmpSharedKotlinx_coroutines_coreLinkedListNode, KmpSharedKotlinx_coroutines_coreAbstractAtomicDesc;

@protocol KmpSharedUserRepository, KmpSharedAuthRepository, KmpSharedAuthDao, KmpSharedUserRemoteSource, KmpSharedKotlinx_serialization_coreKSerializer, KmpSharedConfig, KmpSharedLogger, KmpSharedErrorMessageProvider, KmpSharedKotlinCoroutineContextKey, KmpSharedKotlinCoroutineContextElement, KmpSharedKotlinCoroutineContext, KmpSharedKotlinContinuation, KmpSharedKotlinContinuationInterceptor, KmpSharedKotlinx_coroutines_coreRunnable, KmpSharedKotlinx_serialization_coreEncoder, KmpSharedKotlinx_serialization_coreSerialDescriptor, KmpSharedKotlinx_serialization_coreSerializationStrategy, KmpSharedKotlinx_serialization_coreDecoder, KmpSharedKotlinx_serialization_coreDeserializationStrategy, KmpSharedKotlinx_coroutines_coreCoroutineScope, KmpSharedKtor_ioCloseable, KmpSharedKtor_client_coreHttpClientEngine, KmpSharedKtor_client_coreHttpClientEngineCapability, KmpSharedKtor_utilsAttributes, KmpSharedKotlinIterator, KmpSharedKtor_httpParameters, KmpSharedKoin_coreQualifier, KmpSharedKotlinx_serialization_coreCompositeEncoder, KmpSharedKotlinAnnotation, KmpSharedKotlinx_serialization_coreCompositeDecoder, KmpSharedKtor_client_coreHttpClientFeature, KmpSharedKtor_httpHttpMessageBuilder, KmpSharedKotlinx_coroutines_coreJob, KmpSharedKtor_ioByteReadChannel, KmpSharedKtor_client_coreHttpRequest, KmpSharedKotlinSuspendFunction2, KmpSharedKotlinMapEntry, KmpSharedKtor_utilsStringValues, KmpSharedKotlinKClass, KmpSharedKotlinLazy, KmpSharedKoin_coreScopeCallback, KmpSharedKotlinComparable, KmpSharedKoin_coreKoinScopeComponent, KmpSharedKotlinx_serialization_coreSerializersModuleCollector, KmpSharedKtor_httpHeaders, KmpSharedKotlinx_coroutines_coreChildHandle, KmpSharedKotlinx_coroutines_coreChildJob, KmpSharedKotlinx_coroutines_coreDisposableHandle, KmpSharedKotlinSequence, KmpSharedKotlinx_coroutines_coreSelectClause0, KmpSharedKtor_ioReadSession, KmpSharedKotlinSuspendFunction1, KmpSharedKotlinAppendable, KmpSharedKotlinKType, KmpSharedKtor_httpHttpMessage, KmpSharedKotlinFunction, KmpSharedKotlinKDeclarationContainer, KmpSharedKotlinKAnnotatedElement, KmpSharedKotlinKClassifier, KmpSharedKoin_coreKoinComponent, KmpSharedKotlinx_coroutines_coreParentJob, KmpSharedKotlinx_coroutines_coreSelectInstance, KmpSharedKotlinSuspendFunction0, KmpSharedKtor_ioObjectPool, KmpSharedKtor_ioInput, KmpSharedKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface KmpSharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KmpSharedBase (KmpSharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KmpSharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmpSharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmpSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KmpSharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KmpSharedByte : KmpSharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KmpSharedUByte : KmpSharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KmpSharedShort : KmpSharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KmpSharedUShort : KmpSharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KmpSharedInt : KmpSharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KmpSharedUInt : KmpSharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KmpSharedLong : KmpSharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KmpSharedULong : KmpSharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KmpSharedFloat : KmpSharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KmpSharedDouble : KmpSharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KmpSharedBoolean : KmpSharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface KmpSharedUser : KmpSharedBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email bio:(NSString *)bio firstName:(NSString *)firstName lastName:(NSString *)lastName phone:(NSString *)phone __attribute__((swift_name("init(id:email:bio:firstName:lastName:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KmpSharedUser *)doCopyId:(NSString *)id email:(NSString *)email bio:(NSString *)bio firstName:(NSString *)firstName lastName:(NSString *)lastName phone:(NSString *)phone __attribute__((swift_name("doCopy(id:email:bio:firstName:lastName:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bio __attribute__((swift_name("bio")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserData")))
@interface KmpSharedUserData : KmpSharedBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("init(id:email:firstName:lastName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmpSharedUserData *)doCopyId:(NSString *)id email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("doCopy(id:email:firstName:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPaging")))
@interface KmpSharedUserPaging : KmpSharedBase
- (instancetype)initWithUsers:(NSArray<KmpSharedUserData *> *)users totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("init(users:totalCount:lastPage:limit:page:)"))) __attribute__((objc_designated_initializer));
- (NSArray<KmpSharedUserData *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (KmpSharedUserPaging *)doCopyUsers:(NSArray<KmpSharedUserData *> *)users totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("doCopy(users:totalCount:lastPage:limit:page:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t lastPage __attribute__((swift_name("lastPage")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@property (readonly) NSArray<KmpSharedUserData *> *users __attribute__((swift_name("users")));
@end;

__attribute__((swift_name("AuthRepository")))
@protocol KmpSharedAuthRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginEmail:(NSString *)email pass:(NSString *)pass completionHandler:(void (^)(KmpSharedResult<KmpSharedKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(email:pass:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName pass:(NSString *)pass completionHandler:(void (^)(KmpSharedResult<KmpSharedKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(email:firstName:lastName:pass:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingParameters")))
@interface KmpSharedUserPagingParameters : KmpSharedBase
- (instancetype)initWithPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("init(page:limit:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (KmpSharedUserPagingParameters *)doCopyPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("doCopy(page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedUserPagingRequest *asRequest __attribute__((swift_name("asRequest")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@end;

__attribute__((swift_name("UserRepository")))
@protocol KmpSharedUserRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersParameters:(KmpSharedUserPagingParameters *)parameters completionHandler:(void (^)(KmpSharedResult<KmpSharedUserPaging *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserParameters:(KmpSharedUserUpdateParameters *)parameters completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(parameters:completionHandler:)")));
@property (readonly) BOOL isUserLoggedIn __attribute__((swift_name("isUserLoggedIn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserUpdateParameters")))
@interface KmpSharedUserUpdateParameters : KmpSharedBase
- (instancetype)initWithUserId:(NSString *)userId bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("init(userId:bio:firstName:lastName:pass:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (KmpSharedUserUpdateParameters *)doCopyUserId:(NSString *)userId bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("doCopy(userId:bio:firstName:lastName:pass:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedUserUpdateRequest *asRequest __attribute__((swift_name("asRequest")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable pass __attribute__((swift_name("pass")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((swift_name("UseCase")))
@interface KmpSharedUseCase<__contravariant Params, __covariant T> : KmpSharedBase
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(Params _Nullable)params completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeParams:(Params _Nullable)params completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(params:completionHandler:)")));
@property (readonly) KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end;

__attribute__((swift_name("UseCaseResultNoParams")))
@interface KmpSharedUseCaseResultNoParams<__covariant T> : KmpSharedUseCase<KmpSharedKotlinUnit *, KmpSharedResult<T> *>
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(KmpSharedResult<T> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLoggedInUserUseCase")))
@interface KmpSharedGetLoggedInUserUseCase : KmpSharedUseCaseResultNoParams<KmpSharedUser *>
- (instancetype)initWithUserRepository:(id<KmpSharedUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedKotlinUnit *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((swift_name("UseCaseResult")))
@interface KmpSharedUseCaseResult<__contravariant Params, __covariant T> : KmpSharedUseCase<Params, KmpSharedResult<T> *>
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPagedUsersUseCase")))
@interface KmpSharedGetPagedUsersUseCase : KmpSharedUseCaseResult<KmpSharedUserPagingParameters *, KmpSharedUserPaging *>
- (instancetype)initWithUserRepository:(id<KmpSharedUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedUserPagingParameters *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedUserPaging *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserUseCase")))
@interface KmpSharedGetUserUseCase : KmpSharedUseCaseResult<KmpSharedGetUserUseCaseParams *, KmpSharedUser *>
- (instancetype)initWithUserRepository:(id<KmpSharedUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedGetUserUseCaseParams *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserUseCase.Params")))
@interface KmpSharedGetUserUseCaseParams : KmpSharedBase
- (instancetype)initWithUserId:(NSString *)userId __attribute__((swift_name("init(userId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((swift_name("UseCaseNoParams")))
@interface KmpSharedUseCaseNoParams<__covariant T> : KmpSharedUseCase<KmpSharedKotlinUnit *, T>
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsUserLoggedInUseCase")))
@interface KmpSharedIsUserLoggedInUseCase : KmpSharedUseCaseNoParams<KmpSharedBoolean *>
- (instancetype)initWithUserRepository:(id<KmpSharedUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedKotlinUnit *)params completionHandler:(void (^)(KmpSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginUseCase")))
@interface KmpSharedLoginUseCase : KmpSharedUseCaseResult<KmpSharedLoginUseCaseParams *, KmpSharedKotlinUnit *>
- (instancetype)initWithAuthRepository:(id<KmpSharedAuthRepository>)authRepository __attribute__((swift_name("init(authRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedLoginUseCaseParams *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginUseCase.Params")))
@interface KmpSharedLoginUseCaseParams : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmpSharedLoginUseCaseParams *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterUseCase")))
@interface KmpSharedRegisterUseCase : KmpSharedUseCaseResult<KmpSharedRegisterUseCaseParams *, KmpSharedKotlinUnit *>
- (instancetype)initWithAuthRepository:(id<KmpSharedAuthRepository>)authRepository __attribute__((swift_name("init(authRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedRegisterUseCaseParams *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterUseCase.Params")))
@interface KmpSharedRegisterUseCaseParams : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName password:(NSString *)password __attribute__((swift_name("init(email:firstName:lastName:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmpSharedRegisterUseCaseParams *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName password:(NSString *)password __attribute__((swift_name("doCopy(email:firstName:lastName:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateUserUseCase")))
@interface KmpSharedUpdateUserUseCase : KmpSharedUseCaseResult<KmpSharedUserUpdateParameters *, KmpSharedUser *>
- (instancetype)initWithUserRepository:(id<KmpSharedUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(KmpSharedUserUpdateParameters *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRepositoryImpl")))
@interface KmpSharedUserRepositoryImpl : KmpSharedBase <KmpSharedUserRepository>
- (instancetype)initWithAuthDao:(id<KmpSharedAuthDao>)authDao remoteSource:(id<KmpSharedUserRemoteSource>)remoteSource __attribute__((swift_name("init(authDao:remoteSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersParameters:(KmpSharedUserPagingParameters *)parameters completionHandler:(void (^)(KmpSharedResult<KmpSharedUserPaging *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserParameters:(KmpSharedUserUpdateParameters *)parameters completionHandler:(void (^)(KmpSharedResult<KmpSharedUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(parameters:completionHandler:)")));
@property (readonly) BOOL isUserLoggedIn __attribute__((swift_name("isUserLoggedIn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest")))
@interface KmpSharedLoginRequest : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email pass:(NSString *)pass __attribute__((swift_name("init(email:pass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmpSharedLoginRequest *)doCopyEmail:(NSString *)email pass:(NSString *)pass __attribute__((swift_name("doCopy(email:pass:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *pass __attribute__((swift_name("pass")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest.Companion")))
@interface KmpSharedLoginRequestCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationRequest")))
@interface KmpSharedRegistrationRequest : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName pass:(NSString *)pass __attribute__((swift_name("init(email:firstName:lastName:pass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmpSharedRegistrationRequest *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName pass:(NSString *)pass __attribute__((swift_name("doCopy(email:firstName:lastName:pass:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *pass __attribute__((swift_name("pass")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationRequest.Companion")))
@interface KmpSharedRegistrationRequestCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingRequest")))
@interface KmpSharedUserPagingRequest : KmpSharedBase
- (instancetype)initWithPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("init(page:limit:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (KmpSharedUserPagingRequest *)doCopyPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("doCopy(page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@end;

__attribute__((swift_name("UserRemoteSource")))
@protocol KmpSharedUserRemoteSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(KmpSharedResult<KmpSharedUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersPaging:(KmpSharedUserPagingRequest *)paging completionHandler:(void (^)(KmpSharedResult<KmpSharedUserPagingDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(paging:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserId:(NSString *)id updateRequest:(KmpSharedUserUpdateRequest *)updateRequest completionHandler:(void (^)(KmpSharedResult<KmpSharedUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(id:updateRequest:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserUpdateRequest")))
@interface KmpSharedUserUpdateRequest : KmpSharedBase
- (instancetype)initWithBio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("init(bio:firstName:lastName:pass:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (KmpSharedUserUpdateRequest *)doCopyBio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("doCopy(bio:firstName:lastName:pass:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable pass __attribute__((swift_name("pass")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPaths")))
@interface KmpSharedAuthPaths : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authPaths __attribute__((swift_name("init()")));
@property (readonly) NSString *login __attribute__((swift_name("login")));
@property (readonly) NSString *registration __attribute__((swift_name("registration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthService")))
@interface KmpSharedAuthService : KmpSharedBase
- (instancetype)initWithClient:(KmpSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginBody:(KmpSharedLoginRequest *)body completionHandler:(void (^)(KmpSharedResult<KmpSharedLoginDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(body:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerBody:(KmpSharedRegistrationRequest *)body completionHandler:(void (^)(KmpSharedResult<KmpSharedRegistrationDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(body:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClient")))
@interface KmpSharedHttpClient : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClient __attribute__((swift_name("init()")));
- (KmpSharedKtor_client_coreHttpClient *)doInitAuthDao:(id<KmpSharedAuthDao>)authDao config:(id<KmpSharedConfig>)config __attribute__((swift_name("doInit(authDao:config:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KmpSharedKotlinThrowable : KmpSharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KmpSharedKotlinException : KmpSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoTokenException")))
@interface KmpSharedNoTokenException : KmpSharedKotlinException
- (instancetype)initWithUrl:(KmpSharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPaths")))
@interface KmpSharedUserPaths : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userPaths __attribute__((swift_name("init()")));
- (NSString *)userId:(NSString *)id __attribute__((swift_name("user(id:)")));
@property (readonly) NSString *users __attribute__((swift_name("users")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserService")))
@interface KmpSharedUserService : KmpSharedBase
- (instancetype)initWithClient:(KmpSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByIdUserId:(NSString *)userId completionHandler:(void (^)(KmpSharedResult<KmpSharedUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserById(userId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersParams:(KmpSharedUserPagingRequest *)params completionHandler:(void (^)(KmpSharedResult<KmpSharedUserPagingDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserUserId:(NSString *)userId body:(KmpSharedUserUpdateRequest *)body completionHandler:(void (^)(KmpSharedResult<KmpSharedUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(userId:body:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDto")))
@interface KmpSharedLoginDto : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email token:(NSString *)token userId:(NSString *)userId __attribute__((swift_name("init(email:token:userId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmpSharedLoginDto *)doCopyEmail:(NSString *)email token:(NSString *)token userId:(NSString *)userId __attribute__((swift_name("doCopy(email:token:userId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDto.Companion")))
@interface KmpSharedLoginDtoCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationDto")))
@interface KmpSharedRegistrationDto : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("init(email:firstName:id:lastName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmpSharedRegistrationDto *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("doCopy(email:firstName:id:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationDto.Companion")))
@interface KmpSharedRegistrationDtoCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataDto")))
@interface KmpSharedUserDataDto : KmpSharedBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("init(email:firstName:id:lastName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmpSharedUserDataDto *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("doCopy(email:firstName:id:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedUserData *asDomain __attribute__((swift_name("asDomain")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataDto.Companion")))
@interface KmpSharedUserDataDtoCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDto")))
@interface KmpSharedUserDto : KmpSharedBase
- (instancetype)initWithBio:(NSString *)bio email:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName phone:(NSString *)phone __attribute__((swift_name("init(bio:email:firstName:id:lastName:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KmpSharedUserDto *)doCopyBio:(NSString *)bio email:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName phone:(NSString *)phone __attribute__((swift_name("doCopy(bio:email:firstName:id:lastName:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedUser *asDomain __attribute__((swift_name("asDomain")));
@property (readonly) NSString *bio __attribute__((swift_name("bio")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDto.Companion")))
@interface KmpSharedUserDtoCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingDto")))
@interface KmpSharedUserPagingDto : KmpSharedBase
- (instancetype)initWithData:(NSArray<KmpSharedUserDataDto *> *)data totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("init(data:totalCount:lastPage:limit:page:)"))) __attribute__((objc_designated_initializer));
- (NSArray<KmpSharedUserDataDto *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (KmpSharedUserPagingDto *)doCopyData:(NSArray<KmpSharedUserDataDto *> *)data totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("doCopy(data:totalCount:lastPage:limit:page:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedUserPaging *asDomain __attribute__((swift_name("asDomain")));
@property (readonly) NSArray<KmpSharedUserDataDto *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t lastPage __attribute__((swift_name("lastPage")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingDto.Companion")))
@interface KmpSharedUserPagingDtoCompanion : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("AuthDao")))
@protocol KmpSharedAuthDao
@required
- (NSString * _Nullable)retrieveToken __attribute__((swift_name("retrieveToken()")));
- (NSString * _Nullable)retrieveUserId __attribute__((swift_name("retrieveUserId()")));
- (void)saveTokenToken:(NSString *)token __attribute__((swift_name("saveToken(token:)")));
- (void)saveUserIdUserId:(NSString *)userId __attribute__((swift_name("saveUserId(userId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthSourceImpl")))
@interface KmpSharedAuthSourceImpl : KmpSharedBase
- (instancetype)initWithService:(KmpSharedAuthService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginRequest:(KmpSharedLoginRequest *)request completionHandler:(void (^)(KmpSharedResult<KmpSharedLoginDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(request:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerRequest:(KmpSharedRegistrationRequest *)request completionHandler:(void (^)(KmpSharedResult<KmpSharedRegistrationDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRemoteSourceImpl")))
@interface KmpSharedUserRemoteSourceImpl : KmpSharedBase <KmpSharedUserRemoteSource>
- (instancetype)initWithService:(KmpSharedUserService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(KmpSharedResult<KmpSharedUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersPaging:(KmpSharedUserPagingRequest *)paging completionHandler:(void (^)(KmpSharedResult<KmpSharedUserPagingDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(paging:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserId:(NSString *)id updateRequest:(KmpSharedUserUpdateRequest *)updateRequest completionHandler:(void (^)(KmpSharedResult<KmpSharedUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(id:updateRequest:completionHandler:)")));
@end;

__attribute__((swift_name("ErrorResult")))
@interface KmpSharedErrorResult : KmpSharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@property KmpSharedKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("Result")))
@interface KmpSharedResult<__covariant T> : KmpSharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultError")))
@interface KmpSharedResultError<__covariant T> : KmpSharedResult<T>
- (instancetype)initWithError:(KmpSharedErrorResult *)error data:(T _Nullable)data __attribute__((swift_name("init(error:data:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedErrorResult *)component1 __attribute__((swift_name("component1()")));
- (T _Nullable)component2 __attribute__((swift_name("component2()")));
- (KmpSharedResultError<T> *)doCopyError:(KmpSharedErrorResult *)error data:(T _Nullable)data __attribute__((swift_name("doCopy(error:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) KmpSharedErrorResult *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSuccess")))
@interface KmpSharedResultSuccess<__covariant T> : KmpSharedResult<T>
- (instancetype)initWithData:(T)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (KmpSharedResultSuccess<T> *)doCopyData:(T)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("ErrorMessageProvider")))
@protocol KmpSharedErrorMessageProvider
@required
- (NSString *)getMessage:(KmpSharedErrorResult *)receiver defMessage:(NSString *)defMessage __attribute__((swift_name("getMessage(_:defMessage:)")));
@property (readonly) NSString *defaultMessage __attribute__((swift_name("defaultMessage")));
@end;

__attribute__((swift_name("AuthError")))
@interface KmpSharedAuthError : KmpSharedErrorResult
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.EmailAlreadyExist")))
@interface KmpSharedAuthErrorEmailAlreadyExist : KmpSharedAuthError
- (instancetype)initWithThrowable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.InvalidLoginCredentials")))
@interface KmpSharedAuthErrorInvalidLoginCredentials : KmpSharedAuthError
- (instancetype)initWithThrowable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("BackendError")))
@interface KmpSharedBackendError : KmpSharedErrorResult
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackendError.NotAuthorized")))
@interface KmpSharedBackendErrorNotAuthorized : KmpSharedBackendError
- (instancetype)initWithResponseMessage:(NSString * _Nullable)responseMessage throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(responseMessage:throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("CommonError")))
@interface KmpSharedCommonError : KmpSharedErrorResult
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonError.NoNetworkConnection")))
@interface KmpSharedCommonErrorNoNetworkConnection : KmpSharedCommonError
- (instancetype)initWithT:(KmpSharedKotlinThrowable * _Nullable)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonError.NoUserLoggedIn")))
@interface KmpSharedCommonErrorNoUserLoggedIn : KmpSharedCommonError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noUserLoggedIn __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("ResultType")))
@interface KmpSharedResultType : KmpSharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface KmpSharedError : KmpSharedResultType
- (instancetype)initWithError:(KmpSharedErrorResult *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@property (readonly) KmpSharedErrorResult *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Success")))
@interface KmpSharedSuccess : KmpSharedResultType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Config")))
@protocol KmpSharedConfig
@required
@property (readonly) BOOL isRelease __attribute__((swift_name("isRelease")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigImpl")))
@interface KmpSharedConfigImpl : KmpSharedBase <KmpSharedConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isRelease __attribute__((swift_name("isRelease")));
@end;

__attribute__((swift_name("Logger")))
@protocol KmpSharedLogger
@required
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message throwable:(KmpSharedKotlinThrowable *)throwable __attribute__((swift_name("e(tag:message:throwable:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("w(tag:message:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface KmpSharedLog : KmpSharedBase <KmpSharedLogger>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)log __attribute__((swift_name("init()")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message throwable:(KmpSharedKotlinThrowable *)throwable __attribute__((swift_name("e(tag:message:throwable:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message throwable:(KmpSharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("w(tag:message:throwable:)")));
@end;

@interface KmpSharedResult (Extensions)
- (KmpSharedResult<id> *)mapTransform:(id (^)(id))transform __attribute__((swift_name("map(transform:)")));
- (KmpSharedResult<KmpSharedKotlinUnit *> *)toEmptyResult __attribute__((swift_name("toEmptyResult()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformModuleKt")))
@interface KmpSharedPlatformModuleKt : KmpSharedBase
@property (class, readonly) KmpSharedKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleKt")))
@interface KmpSharedModuleKt : KmpSharedBase
+ (KmpSharedKoin_coreKoinApplication *)doInitKoinAppDeclaration:(void (^)(KmpSharedKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appDeclaration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthDaoKt")))
@interface KmpSharedAuthDaoKt : KmpSharedBase
+ (BOOL)isLoggedIn:(id<KmpSharedAuthDao>)receiver __attribute__((swift_name("isLoggedIn(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagesKt")))
@interface KmpSharedMessagesKt : KmpSharedBase
+ (NSString *)getMessage:(id<KmpSharedErrorMessageProvider>)receiver error:(KmpSharedErrorResult *)error defMessage:(NSString * _Nullable)defMessage __attribute__((swift_name("getMessage(_:error:defMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkKt")))
@interface KmpSharedNetworkKt : KmpSharedBase
+ (KmpSharedResult<id> *)runCatchingAuthNetworkExceptionsBlock:(KmpSharedResult<id> *(^)(void))block __attribute__((swift_name("runCatchingAuthNetworkExceptions(block:)")));
+ (KmpSharedResult<id> *)runCatchingCommonNetworkExceptionsBlock:(KmpSharedResult<id> *(^)(void))block __attribute__((swift_name("runCatchingCommonNetworkExceptions(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultToKt")))
@interface KmpSharedResultToKt : KmpSharedBase
+ (KmpSharedResult<id> *)resultsTo:(id)receiver result:(KmpSharedResultType *)result __attribute__((swift_name("resultsTo(_:result:)")));
+ (KmpSharedResult<id> *)resultsTo:(id _Nullable)receiver result_:(KmpSharedErrorResult *)result __attribute__((swift_name("resultsTo(_:result_:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmpSharedKotlinRuntimeException : KmpSharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmpSharedKotlinIllegalStateException : KmpSharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KmpSharedKotlinCancellationException : KmpSharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KmpSharedKotlinUnit : KmpSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KmpSharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KmpSharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KmpSharedKotlinCoroutineContextElement> _Nullable)getKey:(id<KmpSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KmpSharedKotlinCoroutineContext>)minusKeyKey:(id<KmpSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KmpSharedKotlinCoroutineContext>)plusContext:(id<KmpSharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KmpSharedKotlinCoroutineContextElement <KmpSharedKotlinCoroutineContext>
@required
@property (readonly) id<KmpSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KmpSharedKotlinAbstractCoroutineContextElement : KmpSharedBase <KmpSharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KmpSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KmpSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KmpSharedKotlinContinuationInterceptor <KmpSharedKotlinCoroutineContextElement>
@required
- (id<KmpSharedKotlinContinuation>)interceptContinuationContinuation:(id<KmpSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KmpSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KmpSharedKotlinx_coroutines_coreCoroutineDispatcher : KmpSharedKotlinAbstractCoroutineContextElement <KmpSharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KmpSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<KmpSharedKotlinCoroutineContext>)context block:(id<KmpSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KmpSharedKotlinCoroutineContext>)context block:(id<KmpSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KmpSharedKotlinContinuation>)interceptContinuationContinuation:(id<KmpSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KmpSharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KmpSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmpSharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmpSharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmpSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmpSharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmpSharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KmpSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmpSharedKotlinx_serialization_coreKSerializer <KmpSharedKotlinx_serialization_coreSerializationStrategy, KmpSharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KmpSharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KmpSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KmpSharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KmpSharedKtor_client_coreHttpClient : KmpSharedBase <KmpSharedKotlinx_coroutines_coreCoroutineScope, KmpSharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KmpSharedKtor_client_coreHttpClientEngine>)engine userConfig:(KmpSharedKtor_client_coreHttpClientConfig<KmpSharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KmpSharedKtor_client_coreHttpClient *)configBlock:(void (^)(KmpSharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(KmpSharedKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(KmpSharedKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<KmpSharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmpSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KmpSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<KmpSharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) KmpSharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) KmpSharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) KmpSharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) KmpSharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) KmpSharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmpSharedKotlinArray<T> : KmpSharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmpSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmpSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KmpSharedKtor_httpUrl : KmpSharedBase
- (instancetype)initWithProtocol:(KmpSharedKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<KmpSharedKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<KmpSharedKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (KmpSharedKtor_httpUrl *)doCopyProtocol:(KmpSharedKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<KmpSharedKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmpSharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KmpSharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface KmpSharedKoin_coreModule : KmpSharedBase
- (instancetype)initWithCreateAtStart:(BOOL)createAtStart override:(BOOL)override __attribute__((swift_name("init(createAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKoin_coreBeanDefinition<id> *)factoryQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (KmpSharedKoin_coreOptions *)makeOptionsOverride:(BOOL)override createdAtStart:(BOOL)createdAtStart __attribute__((swift_name("makeOptions(override:createdAtStart:)")));
- (NSArray<KmpSharedKoin_coreModule *> *)plusModules:(NSArray<KmpSharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<KmpSharedKoin_coreModule *> *)plusModule:(KmpSharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<KmpSharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(KmpSharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(KmpSharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (KmpSharedKoin_coreBeanDefinition<id> *)singleQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart override:(BOOL)override definition:(id _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:createdAtStart:override:definition:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface KmpSharedKoin_coreKoinApplication : KmpSharedBase
- (void)close __attribute__((swift_name("close()")));
- (KmpSharedKoin_coreKoinApplication *)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (KmpSharedKoin_coreKoinApplication *)loggerLogger:(KmpSharedKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (KmpSharedKoin_coreKoinApplication *)modulesModules:(KmpSharedKotlinArray<KmpSharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (KmpSharedKoin_coreKoinApplication *)modulesModules_:(NSArray<KmpSharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (KmpSharedKoin_coreKoinApplication *)modulesModules__:(KmpSharedKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (KmpSharedKoin_coreKoinApplication *)printLoggerLevel:(KmpSharedKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (KmpSharedKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, NSString *> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<KmpSharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(KmpSharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) KmpSharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KmpSharedKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KmpSharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KmpSharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KmpSharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmpSharedKotlinx_serialization_coreEncoder
@required
- (id<KmpSharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmpSharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KmpSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmpSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmpSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmpSharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KmpSharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KmpSharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KmpSharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmpSharedKotlinx_serialization_coreDecoder
@required
- (id<KmpSharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KmpSharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmpSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmpSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KmpSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KmpSharedKtor_client_coreHttpClientEngine <KmpSharedKotlinx_coroutines_coreCoroutineScope, KmpSharedKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KmpSharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KmpSharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(KmpSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) KmpSharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) KmpSharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<KmpSharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KmpSharedKtor_client_coreHttpClientEngineConfig : KmpSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property KmpSharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) KmpSharedKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KmpSharedKtor_client_coreHttpClientConfig<T> : KmpSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmpSharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(KmpSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<KmpSharedKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(KmpSharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(KmpSharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KmpSharedKtor_httpHttpMessageBuilder
@required
@property (readonly) KmpSharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KmpSharedKtor_client_coreHttpRequestBuilder : KmpSharedBase <KmpSharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmpSharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<KmpSharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<KmpSharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<KmpSharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (KmpSharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KmpSharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (KmpSharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KmpSharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(KmpSharedKtor_httpURLBuilder *, KmpSharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<KmpSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<KmpSharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) KmpSharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property KmpSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmpSharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KmpSharedKtor_client_coreHttpClientCall : KmpSharedBase <KmpSharedKotlinx_coroutines_coreCoroutineScope>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KmpSharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(KmpSharedKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<KmpSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmpSharedKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<KmpSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KmpSharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) KmpSharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KmpSharedKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KmpSharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(KmpSharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(KmpSharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<KmpSharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KmpSharedKtor_utilsPipeline<TSubject, TContext> : KmpSharedBase
- (instancetype)initWithPhase:(KmpSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmpSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmpSharedKotlinArray<KmpSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(KmpSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(KmpSharedKtor_utilsPipelinePhase *)reference phase:(KmpSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(KmpSharedKtor_utilsPipelinePhase *)reference phase:(KmpSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(KmpSharedKtor_utilsPipelinePhase *)phase block:(id<KmpSharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(KmpSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<KmpSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KmpSharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KmpSharedKtor_client_coreHttpReceivePipeline : KmpSharedKtor_utilsPipeline<KmpSharedKtor_client_coreHttpResponse *, KmpSharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmpSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmpSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmpSharedKotlinArray<KmpSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KmpSharedKtor_client_coreHttpRequestPipeline : KmpSharedKtor_utilsPipeline<id, KmpSharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmpSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmpSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmpSharedKotlinArray<KmpSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KmpSharedKtor_client_coreHttpResponsePipeline : KmpSharedKtor_utilsPipeline<KmpSharedKtor_client_coreHttpResponseContainer *, KmpSharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmpSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmpSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmpSharedKotlinArray<KmpSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KmpSharedKtor_client_coreHttpSendPipeline : KmpSharedKtor_utilsPipeline<id, KmpSharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmpSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmpSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmpSharedKotlinArray<KmpSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KmpSharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KmpSharedKtor_httpURLProtocol : KmpSharedBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KmpSharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmpSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KmpSharedKtor_httpParameters <KmpSharedKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface KmpSharedKoin_coreBeanDefinition<T> : KmpSharedBase
- (instancetype)initWithScopeQualifier:(id<KmpSharedKoin_coreQualifier>)scopeQualifier primaryType:(id<KmpSharedKotlinKClass>)primaryType qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition kind:(KmpSharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<KmpSharedKotlinKClass>> *)secondaryTypes options:(KmpSharedKoin_coreOptions *)options properties:(KmpSharedKoin_coreProperties *)properties __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canBindPrimary:(id<KmpSharedKotlinKClass>)primary secondary:(id<KmpSharedKotlinKClass>)secondary __attribute__((swift_name("canBind(primary:secondary:)")));
- (id<KmpSharedKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<KmpSharedKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<KmpSharedKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))component4 __attribute__((swift_name("component4()")));
- (KmpSharedKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<KmpSharedKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (KmpSharedKoin_coreOptions *)component7 __attribute__((swift_name("component7()")));
- (KmpSharedKoin_coreProperties *)component8 __attribute__((swift_name("component8()")));
- (KmpSharedKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<KmpSharedKoin_coreQualifier>)scopeQualifier primaryType:(id<KmpSharedKotlinKClass>)primaryType qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition kind:(KmpSharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<KmpSharedKotlinKClass>> *)secondaryTypes options:(KmpSharedKoin_coreOptions *)options properties:(KmpSharedKoin_coreProperties *)properties __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<KmpSharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<KmpSharedKotlinKClass>)clazz qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<KmpSharedKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KmpSharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *) __attribute__((swift_name("definition")));
@property (readonly) KmpSharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) KmpSharedKoin_coreOptions *options __attribute__((swift_name("options")));
@property (readonly) id<KmpSharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) KmpSharedKoin_coreProperties *properties __attribute__((swift_name("properties")));
@property (readonly) id<KmpSharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<KmpSharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<KmpSharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol KmpSharedKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface KmpSharedKoin_coreScope : KmpSharedBase
- (instancetype)initWithId:(NSString *)id _scopeDefinition:(KmpSharedKoin_coreScopeDefinition *)_scopeDefinition _koin:(KmpSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(id:_scopeDefinition:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)addParametersParameters:(KmpSharedKoin_coreDefinitionParameters *)parameters __attribute__((swift_name("addParameters(parameters:)")));
- (id _Nullable)bindPrimaryType:(id<KmpSharedKotlinKClass>)primaryType secondaryType:(id<KmpSharedKotlinKClass>)secondaryType parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)clearParameters __attribute__((swift_name("clearParameters()")));
- (void)close __attribute__((swift_name("close()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (KmpSharedKoin_coreScopeDefinition *)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKoin_coreScope *)doCopyId:(NSString *)id _scopeDefinition:(KmpSharedKoin_coreScopeDefinition *)_scopeDefinition _koin:(KmpSharedKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(id:_scopeDefinition:_koin:)")));
- (void)declareInstance:(id)instance qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KmpSharedKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)dropInstanceBeanDefinition:(KmpSharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("dropInstance(beanDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getClazz:(id<KmpSharedKotlinKClass>)clazz qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<KmpSharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (KmpSharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<KmpSharedKotlinKClass>)clazz qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (KmpSharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id)getSource __attribute__((swift_name("getSource()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<KmpSharedKotlinLazy>)injectQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier mode:(KmpSharedKotlinLazyThreadSafetyMode *)mode parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KmpSharedKotlinLazy>)injectOrNullQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier mode:(KmpSharedKotlinLazyThreadSafetyMode *)mode parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)linkToScopes:(KmpSharedKotlinArray<KmpSharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)loadDefinitionBeanDefinition:(KmpSharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("loadDefinition(beanDefinition:)")));
- (void)registerCallbackCallback:(id<KmpSharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (void)setSourceT:(id _Nullable)t __attribute__((swift_name("setSource(t:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(KmpSharedKotlinArray<KmpSharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) KmpSharedKoin_coreScopeDefinition *_scopeDefinition __attribute__((swift_name("_scopeDefinition")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) KmpSharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@end;

__attribute__((swift_name("Koin_coreDefinitionParameters")))
@interface KmpSharedKoin_coreDefinitionParameters : KmpSharedBase
- (instancetype)initWithValues:(NSArray<id> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKoin_coreDefinitionParameters *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<KmpSharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNullClazz:(id<KmpSharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (KmpSharedKoin_coreDefinitionParameters *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptions")))
@interface KmpSharedKoin_coreOptions : KmpSharedBase
- (instancetype)initWithIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override isExtraDefinition:(BOOL)isExtraDefinition __attribute__((swift_name("init(isCreatedAtStart:override:isExtraDefinition:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (KmpSharedKoin_coreOptions *)doCopyIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override isExtraDefinition:(BOOL)isExtraDefinition __attribute__((swift_name("doCopy(isCreatedAtStart:override:isExtraDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isCreatedAtStart __attribute__((swift_name("isCreatedAtStart")));
@property BOOL isExtraDefinition __attribute__((swift_name("isExtraDefinition")));
@property BOOL override __attribute__((swift_name("override")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface KmpSharedKoin_coreScopeDSL : KmpSharedBase
- (instancetype)initWithScopeQualifier:(id<KmpSharedKoin_coreQualifier>)scopeQualifier definitions:(KmpSharedMutableSet<KmpSharedKoin_coreBeanDefinition<id> *> *)definitions __attribute__((swift_name("init(scopeQualifier:definitions:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKoin_coreBeanDefinition<id> *)factoryQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (KmpSharedKoin_coreBeanDefinition<id> *)scopedQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("scoped(qualifier:override:definition:)")));
- (KmpSharedKoin_coreBeanDefinition<id> *)singleQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(KmpSharedKoin_coreScope *, KmpSharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:override:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) KmpSharedMutableSet<KmpSharedKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) id<KmpSharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface KmpSharedKoin_coreLogger : KmpSharedBase
- (instancetype)initWithLevel:(KmpSharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(KmpSharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLevel:(KmpSharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property KmpSharedKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KmpSharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KmpSharedKotlinEnum<E> : KmpSharedBase <KmpSharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface KmpSharedKoin_coreLevel : KmpSharedKotlinEnum<KmpSharedKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) KmpSharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) KmpSharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) KmpSharedKoin_coreLevel *none __attribute__((swift_name("none")));
+ (KmpSharedKotlinArray<KmpSharedKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface KmpSharedKoin_coreKoin : KmpSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)bindPrimaryType:(id<KmpSharedKotlinKClass>)primaryType secondaryType:(id<KmpSharedKotlinKClass>)secondaryType parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (KmpSharedKoin_coreScope *)createScopeT:(id<KmpSharedKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (KmpSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (KmpSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (KmpSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<KmpSharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id)instance qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KmpSharedKotlinKClass>> *)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getClazz:(id<KmpSharedKotlinKClass>)clazz qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (KmpSharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (KmpSharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<KmpSharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<KmpSharedKotlinKClass>)clazz qualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (KmpSharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (KmpSharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<KmpSharedKotlinLazy>)injectQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier mode:(KmpSharedKotlinLazyThreadSafetyMode *)mode parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KmpSharedKotlinLazy>)injectOrNullQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)qualifier mode:(KmpSharedKotlinLazyThreadSafetyMode *)mode parameters:(KmpSharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<KmpSharedKoin_coreModule *> *)modules createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(KmpSharedKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<KmpSharedKoin_coreModule *> *)modules createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("unloadModules(modules:createEagerInstances:)")));
@property (readonly) KmpSharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) KmpSharedKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) KmpSharedKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmpSharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmpSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmpSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmpSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmpSharedKotlinx_serialization_coreSerializersModule : KmpSharedBase
- (void)dumpToCollector:(id<KmpSharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KmpSharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<KmpSharedKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<KmpSharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmpSharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KmpSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmpSharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmpSharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmpSharedKotlinx_serialization_coreSerialKind : KmpSharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmpSharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmpSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmpSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmpSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KmpSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmpSharedKotlinNothing : KmpSharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KmpSharedKtor_client_coreHttpRequestData : KmpSharedBase
- (instancetype)initWithUrl:(KmpSharedKtor_httpUrl *)url method:(KmpSharedKtor_httpHttpMethod *)method headers:(id<KmpSharedKtor_httpHeaders>)headers body:(KmpSharedKtor_httpOutgoingContent *)body executionContext:(id<KmpSharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<KmpSharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<KmpSharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmpSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmpSharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KmpSharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KmpSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmpSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmpSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KmpSharedKtor_client_coreHttpResponseData : KmpSharedBase
- (instancetype)initWithStatusCode:(KmpSharedKtor_httpHttpStatusCode *)statusCode requestTime:(KmpSharedKtor_utilsGMTDate *)requestTime headers:(id<KmpSharedKtor_httpHeaders>)headers version:(KmpSharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KmpSharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KmpSharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KmpSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmpSharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmpSharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmpSharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KmpSharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KmpSharedKtor_client_coreProxyConfig : KmpSharedBase
- (instancetype)initWithUrl:(KmpSharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol KmpSharedKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(KmpSharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) KmpSharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface KmpSharedKtor_utilsStringValuesBuilder : KmpSharedBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmpSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmpSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmpSharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmpSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) KmpSharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KmpSharedKtor_httpHeadersBuilder : KmpSharedKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmpSharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KmpSharedKtor_httpURLBuilder : KmpSharedBase
- (instancetype)initWithProtocol:(KmpSharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(KmpSharedKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (KmpSharedKtor_httpURLBuilder *)pathComponents:(KmpSharedKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (KmpSharedKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) KmpSharedKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property KmpSharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KmpSharedKotlinx_coroutines_coreJob <KmpSharedKotlinCoroutineContextElement>
@required
- (id<KmpSharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KmpSharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KmpSharedKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (KmpSharedKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KmpSharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KmpSharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<KmpSharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KmpSharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(KmpSharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KmpSharedKotlinx_coroutines_coreJob>)plusOther_:(id<KmpSharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KmpSharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KmpSharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KmpSharedKtor_httpHttpMethod : KmpSharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (KmpSharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KmpSharedKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(KmpSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(KmpSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(KmpSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KmpSharedKtor_ioIoBuffer *)dst completionHandler:(void (^)(KmpSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KmpSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(KmpSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(KmpSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(KmpSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(KmpSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(KmpSharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(KmpSharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(KmpSharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KmpSharedKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(KmpSharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KmpSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(KmpSharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(KmpSharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(KmpSharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(KmpSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(KmpSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(KmpSharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(KmpSharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<KmpSharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(KmpSharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<KmpSharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(KmpSharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<KmpSharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(KmpSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property KmpSharedKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface KmpSharedKtor_client_coreTypeInfo : KmpSharedBase
- (instancetype)initWithType:(id<KmpSharedKotlinKClass>)type reifiedType:(id<KmpSharedKotlinKType>)reifiedType kotlinType:(id<KmpSharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<KmpSharedKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<KmpSharedKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<KmpSharedKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (KmpSharedKtor_client_coreTypeInfo *)doCopyType:(id<KmpSharedKotlinKClass>)type reifiedType:(id<KmpSharedKotlinKType>)reifiedType kotlinType:(id<KmpSharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmpSharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KmpSharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<KmpSharedKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KmpSharedKtor_httpHttpMessage
@required
@property (readonly) id<KmpSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KmpSharedKtor_client_coreHttpRequest <KmpSharedKtor_httpHttpMessage, KmpSharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<KmpSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmpSharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) KmpSharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) KmpSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmpSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KmpSharedKtor_client_coreHttpResponse : KmpSharedBase <KmpSharedKtor_httpHttpMessage, KmpSharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<KmpSharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) KmpSharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmpSharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmpSharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) KmpSharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KmpSharedKtor_utilsAttributeKey<T> : KmpSharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KmpSharedKtor_utilsPipelinePhase : KmpSharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol KmpSharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KmpSharedKotlinSuspendFunction2 <KmpSharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KmpSharedKtor_client_coreHttpResponseContainer : KmpSharedBase
- (instancetype)initWithExpectedType:(KmpSharedKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KmpSharedKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol KmpSharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmpSharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmpSharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KmpSharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KmpSharedKotlinKClass <KmpSharedKotlinKDeclarationContainer, KmpSharedKotlinKAnnotatedElement, KmpSharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface KmpSharedKoin_coreKind : KmpSharedKotlinEnum<KmpSharedKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKoin_coreKind *single __attribute__((swift_name("single")));
@property (class, readonly) KmpSharedKoin_coreKind *factory __attribute__((swift_name("factory")));
+ (KmpSharedKotlinArray<KmpSharedKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreProperties")))
@interface KmpSharedKoin_coreProperties : KmpSharedBase
- (instancetype)initWithData:(KmpSharedMutableDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKoin_coreProperties *)doCopyData:(KmpSharedMutableDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(NSString *)key __attribute__((swift_name("getOrNull(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("set(key:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface KmpSharedKoin_coreCallbacks<T> : KmpSharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (KmpSharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDefinition")))
@interface KmpSharedKoin_coreScopeDefinition : KmpSharedBase
- (instancetype)initWithQualifier:(id<KmpSharedKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot __attribute__((swift_name("init(qualifier:isRoot:)"))) __attribute__((objc_designated_initializer));
- (id<KmpSharedKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKoin_coreScopeDefinition *)doCopyQualifier:(id<KmpSharedKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot __attribute__((swift_name("doCopy(qualifier:isRoot:)")));
- (KmpSharedKoin_coreBeanDefinition<id> *)declareNewDefinitionInstance:(id)instance defQualifier:(id<KmpSharedKoin_coreQualifier> _Nullable)defQualifier secondaryTypes:(NSArray<id<KmpSharedKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declareNewDefinition(instance:defQualifier:secondaryTypes:override:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)removeBeanDefinition:(KmpSharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("remove(beanDefinition:)")));
- (void)saveBeanDefinition:(KmpSharedKoin_coreBeanDefinition<id> *)beanDefinition forceOverride:(BOOL)forceOverride __attribute__((swift_name("save(beanDefinition:forceOverride:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedMutableSet<KmpSharedKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) id<KmpSharedKoin_coreQualifier> qualifier __attribute__((swift_name("qualifier")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol KmpSharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface KmpSharedKotlinLazyThreadSafetyMode : KmpSharedKotlinEnum<KmpSharedKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) KmpSharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) KmpSharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (KmpSharedKotlinArray<KmpSharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol KmpSharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(KmpSharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol KmpSharedKoin_coreKoinComponent
@required
- (KmpSharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol KmpSharedKoin_coreKoinScopeComponent <KmpSharedKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) KmpSharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface KmpSharedKoin_corePropertyRegistry : KmpSharedBase
- (instancetype)initWith_koin:(KmpSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface KmpSharedKoin_coreScopeRegistry : KmpSharedBase
- (instancetype)initWith_koin:(KmpSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<KmpSharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareDefinitionBean:(KmpSharedKoin_coreBeanDefinition<id> *)bean __attribute__((swift_name("declareDefinition(bean:)")));
- (void)deleteScopeScope:(KmpSharedKoin_coreScope *)scope __attribute__((swift_name("deleteScope(scope:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (KmpSharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)unloadModulesModules:(id)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(KmpSharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) KmpSharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSDictionary<NSString *, KmpSharedKoin_coreScopeDefinition *> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmpSharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmpSharedKotlinKClass>)kClass serializer:(id<KmpSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmpSharedKotlinKClass>)baseClass actualClass:(id<KmpSharedKotlinKClass>)actualClass actualSerializer:(id<KmpSharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmpSharedKotlinKClass>)baseClass defaultSerializerProvider:(id<KmpSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KmpSharedKtor_httpHeaders <KmpSharedKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KmpSharedKtor_httpOutgoingContent : KmpSharedBase
- (id _Nullable)getPropertyKey:(KmpSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(KmpSharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) KmpSharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) KmpSharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<KmpSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmpSharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KmpSharedKtor_httpHttpStatusCode : KmpSharedBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (KmpSharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KmpSharedKtor_utilsGMTDate : KmpSharedBase <KmpSharedKotlinComparable>
- (int32_t)compareToOther:(KmpSharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (KmpSharedKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (KmpSharedKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (KmpSharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmpSharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmpSharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KmpSharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KmpSharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KmpSharedKtor_httpHttpProtocolVersion : KmpSharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (KmpSharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface KmpSharedKtor_httpParametersBuilder : KmpSharedKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmpSharedKtor_httpParameters>)build __attribute__((swift_name("build()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KmpSharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KmpSharedKotlinx_coroutines_coreChildHandle <KmpSharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(KmpSharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KmpSharedKotlinx_coroutines_coreChildJob <KmpSharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<KmpSharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface KmpSharedKotlinx_coroutines_coreCancellationException : KmpSharedKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(KmpSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol KmpSharedKotlinSequence
@required
- (id<KmpSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KmpSharedKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<KmpSharedKotlinx_coroutines_coreSelectInstance>)select block:(id<KmpSharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface KmpSharedKtor_ioMemory : KmpSharedBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
- (void)doCopyToDestination:(KmpSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(KmpSharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (KmpSharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (KmpSharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface KmpSharedKtor_ioBuffer : KmpSharedBase
- (instancetype)initWithMemory:(KmpSharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (KmpSharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(KmpSharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) KmpSharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface KmpSharedKtor_ioChunkBuffer : KmpSharedKtor_ioBuffer
- (instancetype)initWithMemory:(KmpSharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (KmpSharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (KmpSharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) KmpSharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) KmpSharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol KmpSharedKtor_ioInput <KmpSharedKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(KmpSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property KmpSharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol KmpSharedKotlinAppendable
@required
- (id<KmpSharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<KmpSharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<KmpSharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol KmpSharedKtor_ioOutput <KmpSharedKotlinAppendable, KmpSharedKtor_ioCloseable>
@required
- (id<KmpSharedKotlinAppendable>)appendCsq:(KmpSharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property KmpSharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface KmpSharedKtor_ioIoBuffer : KmpSharedKtor_ioChunkBuffer <KmpSharedKtor_ioInput, KmpSharedKtor_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(KmpSharedKtor_ioMemory *)memory origin:(KmpSharedKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (id<KmpSharedKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<KmpSharedKotlinAppendable>)appendCsq:(KmpSharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<KmpSharedKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<KmpSharedKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(KmpSharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (KmpSharedKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (KmpSharedKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(KmpSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(KmpSharedInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(KmpSharedInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property KmpSharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmpSharedKotlinByteArray : KmpSharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmpSharedByte *(^)(KmpSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmpSharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface KmpSharedKtor_ioAbstractInput : KmpSharedBase <KmpSharedKtor_ioInput>
- (instancetype)initWithHead:(KmpSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (KmpSharedKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(KmpSharedKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (KmpSharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(KmpSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(KmpSharedKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(KmpSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (KmpSharedKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<KmpSharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<KmpSharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property KmpSharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<KmpSharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface KmpSharedKtor_ioByteReadPacketBase : KmpSharedKtor_ioAbstractInput
- (instancetype)initWithHead:(KmpSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface KmpSharedKtor_ioByteReadPacketPlatformBase : KmpSharedKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(KmpSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface KmpSharedKtor_ioByteReadPacket : KmpSharedKtor_ioByteReadPacketPlatformBase <KmpSharedKtor_ioInput>
- (instancetype)initWithHead:(KmpSharedKtor_ioChunkBuffer *)head pool:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(KmpSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmpSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (KmpSharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (KmpSharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(KmpSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol KmpSharedKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (KmpSharedKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KmpSharedKotlinSuspendFunction1 <KmpSharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface KmpSharedKtor_ioByteOrder : KmpSharedKotlinEnum<KmpSharedKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) KmpSharedKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (KmpSharedKotlinArray<KmpSharedKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol KmpSharedKotlinKType
@required
@property (readonly) NSArray<KmpSharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<KmpSharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KmpSharedKtor_httpHeaderValueWithParameters : KmpSharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmpSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KmpSharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KmpSharedKtor_httpContentType : KmpSharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KmpSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmpSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(KmpSharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (KmpSharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (KmpSharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KmpSharedKtor_utilsWeekDay : KmpSharedKotlinEnum<KmpSharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KmpSharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KmpSharedKotlinArray<KmpSharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KmpSharedKtor_utilsMonth : KmpSharedKotlinEnum<KmpSharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KmpSharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KmpSharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KmpSharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KmpSharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KmpSharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KmpSharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KmpSharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KmpSharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KmpSharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KmpSharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KmpSharedKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KmpSharedKotlinArray<KmpSharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KmpSharedKotlinx_coroutines_coreParentJob <KmpSharedKotlinx_coroutines_coreJob>
@required
- (KmpSharedKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KmpSharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<KmpSharedKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(KmpSharedKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(KmpSharedKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(KmpSharedKotlinx_coroutines_corePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<KmpSharedKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol KmpSharedKotlinSuspendFunction0 <KmpSharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol KmpSharedKtor_ioObjectPool <KmpSharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface KmpSharedKotlinCharArray : KmpSharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(KmpSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmpSharedKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KmpSharedKotlinByteIterator : KmpSharedBase <KmpSharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmpSharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KmpSharedKotlinKTypeProjection : KmpSharedBase
- (instancetype)initWithVariance:(KmpSharedKotlinKVariance * _Nullable)variance type:(id<KmpSharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (KmpSharedKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<KmpSharedKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKotlinKTypeProjection *)doCopyVariance:(KmpSharedKotlinKVariance * _Nullable)variance type:(id<KmpSharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmpSharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KmpSharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KmpSharedKtor_httpHeaderValueParam : KmpSharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmpSharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface KmpSharedKotlinx_coroutines_coreAtomicDesc : KmpSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KmpSharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(KmpSharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property KmpSharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface KmpSharedKotlinx_coroutines_coreOpDescriptor : KmpSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(KmpSharedKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmpSharedKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_corePrepareOp")))
@interface KmpSharedKotlinx_coroutines_corePrepareOp : KmpSharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)affected desc:(KmpSharedKotlinx_coroutines_coreAbstractAtomicDesc *)desc atomicOp:(KmpSharedKotlinx_coroutines_coreAtomicOp<id> *)atomicOp __attribute__((swift_name("init(affected:desc:atomicOp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@property (readonly) KmpSharedKotlinx_coroutines_coreLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) KmpSharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) KmpSharedKotlinx_coroutines_coreAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface KmpSharedKotlinCharIterator : KmpSharedBase <KmpSharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KmpSharedKotlinKVariance : KmpSharedKotlinEnum<KmpSharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmpSharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KmpSharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KmpSharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (KmpSharedKotlinArray<KmpSharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface KmpSharedKotlinx_coroutines_coreAtomicOp<__contravariant T> : KmpSharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) KmpSharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLinkedListNode")))
@interface KmpSharedKotlinx_coroutines_coreLinkedListNode : KmpSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)node condition:(KmpSharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)node predicate:(KmpSharedBoolean *(^)(KmpSharedKotlinx_coroutines_coreLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)node predicate:(KmpSharedBoolean *(^)(KmpSharedKotlinx_coroutines_coreLinkedListNode *))predicate condition:(KmpSharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(KmpSharedBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (KmpSharedKotlinx_coroutines_coreLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly) KmpSharedKotlinx_coroutines_coreLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) KmpSharedKotlinx_coroutines_coreLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAbstractAtomicDesc")))
@interface KmpSharedKotlinx_coroutines_coreAbstractAtomicDesc : KmpSharedKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KmpSharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)affected next:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KmpSharedKotlinx_coroutines_corePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (id _Nullable)onPreparePrepareOp:(KmpSharedKotlinx_coroutines_corePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(KmpSharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(KmpSharedKotlinx_coroutines_coreLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
@property (readonly) KmpSharedKotlinx_coroutines_coreLinkedListNode *affectedNode __attribute__((swift_name("affectedNode")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
