#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class DKSKotlinThrowable, DKSFlowWrapperParent<Params, T>, DKSSuspendWrapperParent<Params, Out>, DKSUser, DKSUserData, DKSUserPaging, DKSKotlinUnit, DKSResult<__covariant T>, DKSUserPagingParameters, DKSUserPagingRequest, DKSUserUpdateParameters, DKSUserUpdateRequest, DKSKotlinx_coroutines_coreCoroutineDispatcher, DKSUseCase<__contravariant Params, __covariant T>, DKSUseCaseResultNoParams<__covariant T>, DKSUseCaseFlowResultNoParams<__covariant T>, DKSUseCaseResult<__contravariant Params, __covariant T>, DKSGetUserUseCaseParams, DKSUseCaseNoParams<__covariant T>, DKSLoginUseCaseParams, DKSRegisterUseCaseParams, DKSLoginRequest, DKSRegistrationRequest, DKSUserDto, DKSUserPagingDto, DKSKtor_client_coreHttpClient, DKSLoginDto, DKSRegistrationDto, DKSKotlinArray<T>, DKSKotlinException, DKSKtor_httpUrl, DKSUserDataDto, DKSAuthService, DKSUserService, DKSErrorResult, DKSResultError<__covariant T>, DKSResultSuccess<__covariant T>, DKSAuthError, DKSBackendError, DKSCommonError, DKSResultType, DKSUseCaseFlowResult<__contravariant Params, __covariant T>, DKSKoin_coreDefinitionParameters, DKSKoin_coreScope, DKSKotlinLazyThreadSafetyMode, DKSKoin_coreModule, DKSKoin_coreLogger, DKSKoin_corePropertyRegistry, DKSKoin_coreScopeRegistry, DKSKoin_coreKoin, DKSKoin_coreKoinApplication, DKSKotlinx_coroutines_coreCancellationException, DKSKotlinRuntimeException, DKSKotlinIllegalStateException, DKSKotlinAbstractCoroutineContextElement, DKSKtor_client_coreHttpClientEngineConfig, DKSKtor_client_coreHttpClientConfig<T>, DKSKtor_client_coreHttpRequestBuilder, DKSKtor_client_coreHttpClientCall, DKSKtor_client_coreHttpReceivePipeline, DKSKtor_client_coreHttpRequestPipeline, DKSKtor_client_coreHttpResponsePipeline, DKSKtor_client_coreHttpSendPipeline, DKSKtor_httpURLProtocol, DKSKoin_coreScopeDefinition, DKSKoin_coreBeanDefinition<T>, DKSKotlinEnum<E>, DKSKoin_coreOptions, DKSKoin_coreScopeDSL, DKSKoin_coreLevel, DKSKotlinx_serialization_coreSerializersModule, DKSKotlinx_serialization_coreSerialKind, DKSKotlinNothing, DKSKtor_client_coreHttpRequestData, DKSKtor_client_coreHttpResponseData, DKSKtor_client_coreProxyConfig, DKSKtor_httpHeadersBuilder, DKSKtor_httpURLBuilder, DKSKtor_httpHttpMethod, DKSKtor_client_coreTypeInfo, DKSKtor_client_coreHttpResponse, DKSKtor_utilsAttributeKey<T>, DKSKtor_utilsPipelinePhase, DKSKtor_utilsPipeline<TSubject, TContext>, DKSKtor_client_coreHttpResponseContainer, DKSKoin_coreKind, DKSKoin_coreProperties, DKSKoin_coreCallbacks<T>, DKSKotlinx_coroutines_coreAtomicDesc, DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, DKSKtor_httpOutgoingContent, DKSKtor_httpHttpStatusCode, DKSKtor_utilsGMTDate, DKSKtor_httpHttpProtocolVersion, DKSKtor_utilsStringValuesBuilder, DKSKtor_httpParametersBuilder, DKSKtor_ioMemory, DKSKtor_ioIoBuffer, DKSKotlinByteArray, DKSKtor_ioByteReadPacket, DKSKtor_ioByteOrder, DKSKotlinx_coroutines_coreAtomicOp<__contravariant T>, DKSKotlinx_coroutines_coreOpDescriptor, DKSKotlinx_coroutines_coreLockFreeLinkedListNode, DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, DKSKtor_httpContentType, DKSKtor_utilsWeekDay, DKSKtor_utilsMonth, DKSKtor_ioBuffer, DKSKtor_ioChunkBuffer, DKSKotlinCharArray, DKSKotlinByteIterator, DKSKtor_ioAbstractInput, DKSKtor_ioByteReadPacketBase, DKSKtor_ioByteReadPacketPlatformBase, DKSKotlinKTypeProjection, DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, DKSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, DKSKtor_httpHeaderValueParam, DKSKtor_httpHeaderValueWithParameters, DKSKotlinCharIterator, DKSKotlinKVariance;

@protocol DKSKotlinx_coroutines_coreJob, DKSKotlinSuspendFunction1, DKSAuthRepository, DKSKotlinx_coroutines_coreFlow, DKSUserRepository, DKSAuthDao, DKSUserRemoteSource, DKSKotlinx_serialization_coreKSerializer, DKSConfig, DKSLogger, DKSKotlinKClass, DKSKoin_coreKoinScopeComponent, DKSKoin_coreQualifier, DKSKotlinLazy, DKSKotlinx_coroutines_coreCoroutineScope, DKSErrorMessageProvider, DKSKotlinx_coroutines_coreChildHandle, DKSKotlinx_coroutines_coreChildJob, DKSKotlinx_coroutines_coreDisposableHandle, DKSKotlinSequence, DKSKotlinx_coroutines_coreSelectClause0, DKSKotlinCoroutineContextKey, DKSKotlinCoroutineContextElement, DKSKotlinCoroutineContext, DKSKotlinFunction, DKSKotlinContinuation, DKSKotlinContinuationInterceptor, DKSKotlinx_coroutines_coreRunnable, DKSKotlinx_coroutines_coreFlowCollector, DKSKotlinx_serialization_coreEncoder, DKSKotlinx_serialization_coreSerialDescriptor, DKSKotlinx_serialization_coreSerializationStrategy, DKSKotlinx_serialization_coreDecoder, DKSKotlinx_serialization_coreDeserializationStrategy, DKSKtor_ioCloseable, DKSKtor_client_coreHttpClientEngine, DKSKtor_client_coreHttpClientEngineCapability, DKSKtor_utilsAttributes, DKSKotlinIterator, DKSKtor_httpParameters, DKSKotlinKDeclarationContainer, DKSKotlinKAnnotatedElement, DKSKotlinKClassifier, DKSKoin_coreScopeCallback, DKSKoin_coreKoinComponent, DKSKotlinComparable, DKSKotlinx_coroutines_coreParentJob, DKSKotlinx_coroutines_coreSelectInstance, DKSKotlinSuspendFunction0, DKSKotlinx_serialization_coreCompositeEncoder, DKSKotlinAnnotation, DKSKotlinx_serialization_coreCompositeDecoder, DKSKtor_client_coreHttpClientFeature, DKSKtor_httpHttpMessageBuilder, DKSKtor_ioByteReadChannel, DKSKtor_client_coreHttpRequest, DKSKotlinSuspendFunction2, DKSKotlinMapEntry, DKSKtor_utilsStringValues, DKSKotlinx_serialization_coreSerializersModuleCollector, DKSKtor_httpHeaders, DKSKtor_ioReadSession, DKSKotlinAppendable, DKSKotlinKType, DKSKtor_httpHttpMessage, DKSKtor_ioObjectPool, DKSKtor_ioInput, DKSKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface DKSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface DKSBase (DKSBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface DKSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface DKSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorDKSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface DKSNumber : NSNumber
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
@interface DKSByte : DKSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface DKSUByte : DKSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface DKSShort : DKSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface DKSUShort : DKSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface DKSInt : DKSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface DKSUInt : DKSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface DKSLong : DKSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface DKSULong : DKSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface DKSFloat : DKSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface DKSDouble : DKSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface DKSBoolean : DKSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("FlowWrapperParent")))
@interface DKSFlowWrapperParent<Params, T> : DKSBase
- (id<DKSKotlinx_coroutines_coreJob>)subscribeParams:(Params _Nullable)params onEach:(void (^)(T _Nullable))onEach onComplete:(void (^)(void))onComplete onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(params:onEach:onComplete:onThrow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowWrapper")))
@interface DKSFlowWrapper<Params, Out> : DKSFlowWrapperParent<Params, Out>
- (instancetype)initWithFlow:(id<DKSKotlinSuspendFunction1>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("SuspendWrapperParent")))
@interface DKSSuspendWrapperParent<Params, Out> : DKSBase
- (id<DKSKotlinx_coroutines_coreJob>)subscribeParams:(Params _Nullable)params onSuccess:(void (^)(Out _Nullable))onSuccess onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(params:onSuccess:onThrow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuspendWrapper")))
@interface DKSSuspendWrapper<Params, Out> : DKSSuspendWrapperParent<Params, Out>
- (instancetype)initWithSuspender:(id<DKSKotlinSuspendFunction1>)suspender __attribute__((swift_name("init(suspender:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface DKSUser : DKSBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email bio:(NSString *)bio firstName:(NSString *)firstName lastName:(NSString *)lastName phone:(NSString * _Nullable)phone __attribute__((swift_name("init(id:email:bio:firstName:lastName:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DKSUser *)doCopyId:(NSString *)id email:(NSString *)email bio:(NSString *)bio firstName:(NSString *)firstName lastName:(NSString *)lastName phone:(NSString * _Nullable)phone __attribute__((swift_name("doCopy(id:email:bio:firstName:lastName:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bio __attribute__((swift_name("bio")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserData")))
@interface DKSUserData : DKSBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("init(id:email:firstName:lastName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DKSUserData *)doCopyId:(NSString *)id email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("doCopy(id:email:firstName:lastName:)")));
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
@interface DKSUserPaging : DKSBase
- (instancetype)initWithUsers:(NSArray<DKSUserData *> *)users totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("init(users:totalCount:lastPage:limit:page:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DKSUserData *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (DKSUserPaging *)doCopyUsers:(NSArray<DKSUserData *> *)users totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("doCopy(users:totalCount:lastPage:limit:page:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t lastPage __attribute__((swift_name("lastPage")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@property (readonly) NSArray<DKSUserData *> *users __attribute__((swift_name("users")));
@end;

__attribute__((swift_name("AuthRepository")))
@protocol DKSAuthRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserDataWithCompletionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUserData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginEmail:(NSString *)email pass:(NSString *)pass completionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(email:pass:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName pass:(NSString *)pass completionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(email:firstName:lastName:pass:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingParameters")))
@interface DKSUserPagingParameters : DKSBase
- (instancetype)initWithPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("init(page:limit:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DKSUserPagingParameters *)doCopyPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("doCopy(page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSUserPagingRequest *asRequest __attribute__((swift_name("asRequest")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@end;

__attribute__((swift_name("UserRepository")))
@protocol DKSUserRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersParameters:(DKSUserPagingParameters *)parameters completionHandler:(void (^)(DKSResult<DKSUserPaging *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserParameters:(DKSUserUpdateParameters *)parameters completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(parameters:completionHandler:)")));
@property (readonly) BOOL isUserLoggedIn __attribute__((swift_name("isUserLoggedIn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserUpdateParameters")))
@interface DKSUserUpdateParameters : DKSBase
- (instancetype)initWithUserId:(NSString *)userId bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("init(userId:bio:firstName:lastName:pass:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DKSUserUpdateParameters *)doCopyUserId:(NSString *)userId bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("doCopy(userId:bio:firstName:lastName:pass:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSUserUpdateRequest *asRequest __attribute__((swift_name("asRequest")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable pass __attribute__((swift_name("pass")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((swift_name("UseCase")))
@interface DKSUseCase<__contravariant Params, __covariant T> : DKSBase
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

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
@property (readonly) DKSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end;

__attribute__((swift_name("UseCaseResultNoParams")))
@interface DKSUseCaseResultNoParams<__covariant T> : DKSUseCase<DKSKotlinUnit *, DKSResult<T> *>
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(DKSResult<T> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAuthDataUseCase")))
@interface DKSDeleteAuthDataUseCase : DKSUseCaseResultNoParams<DKSKotlinUnit *>
- (instancetype)initWithAuthRepository:(id<DKSAuthRepository>)authRepository __attribute__((swift_name("init(authRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSKotlinUnit *)params completionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((swift_name("UseCaseFlowResultNoParams")))
@interface DKSUseCaseFlowResultNoParams<__covariant T> : DKSUseCase<DKSKotlinUnit *, id<DKSKotlinx_coroutines_coreFlow>>
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<DKSKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDummyFlowUseCase")))
@interface DKSGetDummyFlowUseCase : DKSUseCaseFlowResultNoParams<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSKotlinUnit *)params completionHandler:(void (^)(id<DKSKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLoggedInUserUseCase")))
@interface DKSGetLoggedInUserUseCase : DKSUseCaseResultNoParams<DKSUser *>
- (instancetype)initWithUserRepository:(id<DKSUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSKotlinUnit *)params completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((swift_name("UseCaseResult")))
@interface DKSUseCaseResult<__contravariant Params, __covariant T> : DKSUseCase<Params, DKSResult<T> *>
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPagedUsersUseCase")))
@interface DKSGetPagedUsersUseCase : DKSUseCaseResult<DKSUserPagingParameters *, DKSUserPaging *>
- (instancetype)initWithUserRepository:(id<DKSUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSUserPagingParameters *)params completionHandler:(void (^)(DKSResult<DKSUserPaging *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserUseCase")))
@interface DKSGetUserUseCase : DKSUseCaseResult<DKSGetUserUseCaseParams *, DKSUser *>
- (instancetype)initWithUserRepository:(id<DKSUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSGetUserUseCaseParams *)params completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserUseCase.Params")))
@interface DKSGetUserUseCaseParams : DKSBase
- (instancetype)initWithUserId:(NSString *)userId __attribute__((swift_name("init(userId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((swift_name("UseCaseNoParams")))
@interface DKSUseCaseNoParams<__covariant T> : DKSUseCase<DKSKotlinUnit *, T>
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsUserLoggedInUseCase")))
@interface DKSIsUserLoggedInUseCase : DKSUseCaseNoParams<DKSBoolean *>
- (instancetype)initWithUserRepository:(id<DKSUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSKotlinUnit *)params completionHandler:(void (^)(DKSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginUseCase")))
@interface DKSLoginUseCase : DKSUseCaseResult<DKSLoginUseCaseParams *, DKSKotlinUnit *>
- (instancetype)initWithAuthRepository:(id<DKSAuthRepository>)authRepository __attribute__((swift_name("init(authRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSLoginUseCaseParams *)params completionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginUseCase.Params")))
@interface DKSLoginUseCaseParams : DKSBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DKSLoginUseCaseParams *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterUseCase")))
@interface DKSRegisterUseCase : DKSUseCaseResult<DKSRegisterUseCaseParams *, DKSKotlinUnit *>
- (instancetype)initWithAuthRepository:(id<DKSAuthRepository>)authRepository __attribute__((swift_name("init(authRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSRegisterUseCaseParams *)params completionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterUseCase.Params")))
@interface DKSRegisterUseCaseParams : DKSBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName password:(NSString *)password __attribute__((swift_name("init(email:firstName:lastName:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DKSRegisterUseCaseParams *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName password:(NSString *)password __attribute__((swift_name("doCopy(email:firstName:lastName:password:)")));
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
@interface DKSUpdateUserUseCase : DKSUseCaseResult<DKSUserUpdateParameters *, DKSUser *>
- (instancetype)initWithUserRepository:(id<DKSUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)doWorkParams:(DKSUserUpdateParameters *)params completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doWork(params:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRepositoryImpl")))
@interface DKSUserRepositoryImpl : DKSBase <DKSUserRepository>
- (instancetype)initWithAuthDao:(id<DKSAuthDao>)authDao remoteSource:(id<DKSUserRemoteSource>)remoteSource __attribute__((swift_name("init(authDao:remoteSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersParameters:(DKSUserPagingParameters *)parameters completionHandler:(void (^)(DKSResult<DKSUserPaging *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserParameters:(DKSUserUpdateParameters *)parameters completionHandler:(void (^)(DKSResult<DKSUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(parameters:completionHandler:)")));
@property (readonly) BOOL isUserLoggedIn __attribute__((swift_name("isUserLoggedIn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest")))
@interface DKSLoginRequest : DKSBase
- (instancetype)initWithEmail:(NSString *)email pass:(NSString *)pass __attribute__((swift_name("init(email:pass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DKSLoginRequest *)doCopyEmail:(NSString *)email pass:(NSString *)pass __attribute__((swift_name("doCopy(email:pass:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *pass __attribute__((swift_name("pass")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest.Companion")))
@interface DKSLoginRequestCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationRequest")))
@interface DKSRegistrationRequest : DKSBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName pass:(NSString *)pass __attribute__((swift_name("init(email:firstName:lastName:pass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DKSRegistrationRequest *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName pass:(NSString *)pass __attribute__((swift_name("doCopy(email:firstName:lastName:pass:)")));
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
@interface DKSRegistrationRequestCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingRequest")))
@interface DKSUserPagingRequest : DKSBase
- (instancetype)initWithPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("init(page:limit:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DKSUserPagingRequest *)doCopyPage:(int32_t)page limit:(int32_t)limit __attribute__((swift_name("doCopy(page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@end;

__attribute__((swift_name("UserRemoteSource")))
@protocol DKSUserRemoteSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(DKSResult<DKSUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersPaging:(DKSUserPagingRequest *)paging completionHandler:(void (^)(DKSResult<DKSUserPagingDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(paging:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserId:(NSString *)id updateRequest:(DKSUserUpdateRequest *)updateRequest completionHandler:(void (^)(DKSResult<DKSUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(id:updateRequest:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserUpdateRequest")))
@interface DKSUserUpdateRequest : DKSBase
- (instancetype)initWithBio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("init(bio:firstName:lastName:pass:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DKSUserUpdateRequest *)doCopyBio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName pass:(NSString * _Nullable)pass phone:(NSString * _Nullable)phone __attribute__((swift_name("doCopy(bio:firstName:lastName:pass:phone:)")));
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
__attribute__((swift_name("UserUpdateRequest.Companion")))
@interface DKSUserUpdateRequestCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPaths")))
@interface DKSAuthPaths : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authPaths __attribute__((swift_name("init()")));
@property (readonly) NSString *login __attribute__((swift_name("login")));
@property (readonly) NSString *registration __attribute__((swift_name("registration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthService")))
@interface DKSAuthService : DKSBase
- (instancetype)initWithClient:(DKSKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginBody:(DKSLoginRequest *)body completionHandler:(void (^)(DKSResult<DKSLoginDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(body:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerBody:(DKSRegistrationRequest *)body completionHandler:(void (^)(DKSResult<DKSRegistrationDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(body:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClient")))
@interface DKSHttpClient : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClient __attribute__((swift_name("init()")));
- (DKSKtor_client_coreHttpClient *)doInitAuthDao:(id<DKSAuthDao>)authDao config:(id<DKSConfig>)config __attribute__((swift_name("doInit(authDao:config:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface DKSKotlinThrowable : DKSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (DKSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface DKSKotlinException : DKSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoTokenException")))
@interface DKSNoTokenException : DKSKotlinException
- (instancetype)initWithUrl:(DKSKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPaths")))
@interface DKSUserPaths : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userPaths __attribute__((swift_name("init()")));
- (NSString *)userId:(NSString *)id __attribute__((swift_name("user(id:)")));
@property (readonly) NSString *users __attribute__((swift_name("users")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserService")))
@interface DKSUserService : DKSBase
- (instancetype)initWithClient:(DKSKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByIdUserId:(NSString *)userId completionHandler:(void (^)(DKSResult<DKSUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserById(userId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersParams:(DKSUserPagingRequest *)params completionHandler:(void (^)(DKSResult<DKSUserPagingDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserUserId:(NSString *)userId body:(DKSUserUpdateRequest *)body completionHandler:(void (^)(DKSResult<DKSUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(userId:body:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDto")))
@interface DKSLoginDto : DKSBase
- (instancetype)initWithEmail:(NSString *)email token:(NSString *)token userId:(NSString *)userId __attribute__((swift_name("init(email:token:userId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DKSLoginDto *)doCopyEmail:(NSString *)email token:(NSString *)token userId:(NSString *)userId __attribute__((swift_name("doCopy(email:token:userId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDto.Companion")))
@interface DKSLoginDtoCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationDto")))
@interface DKSRegistrationDto : DKSBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("init(email:firstName:id:lastName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DKSRegistrationDto *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("doCopy(email:firstName:id:lastName:)")));
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
@interface DKSRegistrationDtoCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataDto")))
@interface DKSUserDataDto : DKSBase
- (instancetype)initWithEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("init(email:firstName:id:lastName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DKSUserDataDto *)doCopyEmail:(NSString *)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName __attribute__((swift_name("doCopy(email:firstName:id:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSUserData *asDomain __attribute__((swift_name("asDomain")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataDto.Companion")))
@interface DKSUserDataDtoCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDto")))
@interface DKSUserDto : DKSBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName bio:(NSString *)bio phone:(NSString * _Nullable)phone __attribute__((swift_name("init(id:email:firstName:lastName:bio:phone:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DKSUserDto *)doCopyId:(NSString *)id email:(NSString *)email firstName:(NSString *)firstName lastName:(NSString *)lastName bio:(NSString *)bio phone:(NSString * _Nullable)phone __attribute__((swift_name("doCopy(id:email:firstName:lastName:bio:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSUser *asDomain __attribute__((swift_name("asDomain")));
@property (readonly) NSString *bio __attribute__((swift_name("bio")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDto.Companion")))
@interface DKSUserDtoCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingDto")))
@interface DKSUserPagingDto : DKSBase
- (instancetype)initWithData:(NSArray<DKSUserDataDto *> *)data totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("init(data:totalCount:lastPage:limit:page:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DKSUserDataDto *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (DKSUserPagingDto *)doCopyData:(NSArray<DKSUserDataDto *> *)data totalCount:(int32_t)totalCount lastPage:(int32_t)lastPage limit:(int32_t)limit page:(int32_t)page __attribute__((swift_name("doCopy(data:totalCount:lastPage:limit:page:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSUserPaging *asDomain __attribute__((swift_name("asDomain")));
@property (readonly) NSArray<DKSUserDataDto *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t lastPage __attribute__((swift_name("lastPage")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPagingDto.Companion")))
@interface DKSUserPagingDtoCompanion : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("AuthDao")))
@protocol DKSAuthDao
@required
- (NSString * _Nullable)retrieveToken __attribute__((swift_name("retrieveToken()")));
- (NSString * _Nullable)retrieveUserId __attribute__((swift_name("retrieveUserId()")));
- (void)saveTokenToken:(NSString *)token __attribute__((swift_name("saveToken(token:)")));
- (void)saveUserIdUserId:(NSString *)userId __attribute__((swift_name("saveUserId(userId:)")));
- (void)wipeData __attribute__((swift_name("wipeData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthSourceImpl")))
@interface DKSAuthSourceImpl : DKSBase
- (instancetype)initWithService:(DKSAuthService *)service authDao:(id<DKSAuthDao>)authDao __attribute__((swift_name("init(service:authDao:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserDataWithCompletionHandler:(void (^)(DKSResult<DKSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUserData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginRequest:(DKSLoginRequest *)request completionHandler:(void (^)(DKSResult<DKSLoginDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(request:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerRequest:(DKSRegistrationRequest *)request completionHandler:(void (^)(DKSResult<DKSRegistrationDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRemoteSourceImpl")))
@interface DKSUserRemoteSourceImpl : DKSBase <DKSUserRemoteSource>
- (instancetype)initWithService:(DKSUserService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserId:(NSString *)id completionHandler:(void (^)(DKSResult<DKSUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersPaging:(DKSUserPagingRequest *)paging completionHandler:(void (^)(DKSResult<DKSUserPagingDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(paging:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserId:(NSString *)id updateRequest:(DKSUserUpdateRequest *)updateRequest completionHandler:(void (^)(DKSResult<DKSUserDto *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(id:updateRequest:completionHandler:)")));
@end;

__attribute__((swift_name("ErrorResult")))
@interface DKSErrorResult : DKSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@property DKSKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("Result")))
@interface DKSResult<__covariant T> : DKSBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultError")))
@interface DKSResultError<__covariant T> : DKSResult<T>
- (instancetype)initWithError:(DKSErrorResult *)error data:(T _Nullable)data __attribute__((swift_name("init(error:data:)"))) __attribute__((objc_designated_initializer));
- (DKSErrorResult *)component1 __attribute__((swift_name("component1()")));
- (T _Nullable)component2 __attribute__((swift_name("component2()")));
- (DKSResultError<T> *)doCopyError:(DKSErrorResult *)error data:(T _Nullable)data __attribute__((swift_name("doCopy(error:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) DKSErrorResult *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSuccess")))
@interface DKSResultSuccess<__covariant T> : DKSResult<T>
- (instancetype)initWithData:(T)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (DKSResultSuccess<T> *)doCopyData:(T)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("ErrorMessageProvider")))
@protocol DKSErrorMessageProvider
@required
- (NSString *)getMessage:(DKSErrorResult *)receiver defMessage:(NSString *)defMessage __attribute__((swift_name("getMessage(_:defMessage:)")));
@property (readonly) NSString *defaultMessage __attribute__((swift_name("defaultMessage")));
@end;

__attribute__((swift_name("AuthError")))
@interface DKSAuthError : DKSErrorResult
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.EmailAlreadyExist")))
@interface DKSAuthErrorEmailAlreadyExist : DKSAuthError
- (instancetype)initWithThrowable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.InvalidLoginCredentials")))
@interface DKSAuthErrorInvalidLoginCredentials : DKSAuthError
- (instancetype)initWithThrowable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("BackendError")))
@interface DKSBackendError : DKSErrorResult
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackendError.NotAuthorized")))
@interface DKSBackendErrorNotAuthorized : DKSBackendError
- (instancetype)initWithResponseMessage:(NSString * _Nullable)responseMessage throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(responseMessage:throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("CommonError")))
@interface DKSCommonError : DKSErrorResult
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonError.NoNetworkConnection")))
@interface DKSCommonErrorNoNetworkConnection : DKSCommonError
- (instancetype)initWithT:(DKSKotlinThrowable * _Nullable)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonError.NoUserLoggedIn")))
@interface DKSCommonErrorNoUserLoggedIn : DKSCommonError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noUserLoggedIn __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("ResultType")))
@interface DKSResultType : DKSBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface DKSError : DKSResultType
- (instancetype)initWithError:(DKSErrorResult *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DKSErrorResult *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Success")))
@interface DKSSuccess : DKSResultType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("UseCaseFlowResult")))
@interface DKSUseCaseFlowResult<__contravariant Params, __covariant T> : DKSUseCase<Params, id<DKSKotlinx_coroutines_coreFlow>>
- (instancetype)initWithDispatcher:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(dispatcher:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Config")))
@protocol DKSConfig
@required
@property (readonly) BOOL isRelease __attribute__((swift_name("isRelease")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigImpl")))
@interface DKSConfigImpl : DKSBase <DKSConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isRelease __attribute__((swift_name("isRelease")));
@end;

__attribute__((swift_name("Logger")))
@protocol DKSLogger
@required
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message throwable:(DKSKotlinThrowable *)throwable __attribute__((swift_name("e(tag:message:throwable:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("w(tag:message:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface DKSLog : DKSBase <DKSLogger>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)log __attribute__((swift_name("init()")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message throwable:(DKSKotlinThrowable *)throwable __attribute__((swift_name("e(tag:message:throwable:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message throwable:(DKSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("w(tag:message:throwable:)")));
@end;

@interface DKSUseCase (Extensions)
- (id<DKSKotlinx_coroutines_coreJob>)subscribeParams:(id)params onSuccess:(void (^)(id))onSuccess onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(params:onSuccess:onThrow:)")));
@end;

@interface DKSUseCaseFlowResult (Extensions)
- (id<DKSKotlinx_coroutines_coreJob>)subscribeParams:(id)params onEach:(void (^)(DKSResult<id> *))onEach onComplete:(void (^)(void))onComplete onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(params:onEach:onComplete:onThrow:)")));
@end;

@interface DKSUseCaseFlowResultNoParams (Extensions)
- (id<DKSKotlinx_coroutines_coreJob>)subscribeOnEach:(void (^)(DKSResult<id> *))onEach onComplete:(void (^)(void))onComplete onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(onEach:onComplete:onThrow:)")));
@end;

@interface DKSUseCaseNoParams (Extensions)
- (id<DKSKotlinx_coroutines_coreJob>)subscribeOnSuccess:(void (^)(id))onSuccess onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(onSuccess:onThrow:)")));
@end;

@interface DKSUseCaseResult (Extensions)
- (id<DKSKotlinx_coroutines_coreJob>)subscribeParams:(id)params onSuccess:(void (^)(DKSResult<id> *))onSuccess onThrow_:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(params:onSuccess:onThrow_:)")));
@end;

@interface DKSUseCaseResultNoParams (Extensions)
- (id<DKSKotlinx_coroutines_coreJob>)subscribeOnSuccess:(void (^)(DKSResult<id> *))onSuccess onThrow:(void (^)(DKSKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(onSuccess:onThrow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface DKSKoin_coreKoin : DKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)bindPrimaryType:(id<DKSKotlinKClass>)primaryType secondaryType:(id<DKSKotlinKClass>)secondaryType parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (DKSKoin_coreScope *)createScopeT:(id<DKSKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (DKSKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (DKSKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (DKSKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<DKSKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id)instance qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<DKSKotlinKClass>> *)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getClazz:(id<DKSKotlinKClass>)clazz qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (DKSKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (DKSKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<DKSKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<DKSKotlinKClass>)clazz qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (DKSKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (DKSKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<DKSKotlinLazy>)injectQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier mode:(DKSKotlinLazyThreadSafetyMode *)mode parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<DKSKotlinLazy>)injectOrNullQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier mode:(DKSKotlinLazyThreadSafetyMode *)mode parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<DKSKoin_coreModule *> *)modules createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(DKSKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<DKSKoin_coreModule *> *)modules createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("unloadModules(modules:createEagerInstances:)")));
@property (readonly) DKSKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) DKSKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) DKSKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

@interface DKSKoin_coreKoin (Extensions)
- (id)getObjCClass:(Class)objCClass __attribute__((swift_name("get(objCClass:)")));
- (id)getObjCClass:(Class)objCClass parameter:(id)parameter __attribute__((swift_name("get(objCClass:parameter:)")));
- (id)getObjCClass:(Class)objCClass qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier __attribute__((swift_name("get(objCClass:qualifier:)")));
- (id)getObjCClass:(Class)objCClass qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameter:(id)parameter __attribute__((swift_name("get(objCClass:qualifier:parameter:)")));
@end;

@interface DKSResult (Extensions)
- (DKSResult<id> *)mapTransform:(id (^)(id))transform __attribute__((swift_name("map(transform:)")));
- (DKSResult<DKSKotlinUnit *> *)toEmptyResult __attribute__((swift_name("toEmptyResult()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwiftCoroutinesKt")))
@interface DKSSwiftCoroutinesKt : DKSBase
@property (class, readonly) id<DKSKotlinx_coroutines_coreCoroutineScope> iosDefaultScope __attribute__((swift_name("iosDefaultScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinIOSKt")))
@interface DKSKoinIOSKt : DKSBase
+ (DKSKoin_coreKoinApplication *)doInitKoinIosDoOnStartup:(void (^)(void))doOnStartup __attribute__((swift_name("doInitKoinIos(doOnStartup:)")));
@property (class, readonly) DKSKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleKt")))
@interface DKSModuleKt : DKSBase
+ (DKSKoin_coreKoinApplication *)doInitKoinAppDeclaration:(void (^)(DKSKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appDeclaration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthDaoKt")))
@interface DKSAuthDaoKt : DKSBase
+ (BOOL)isLoggedIn:(id<DKSAuthDao>)receiver __attribute__((swift_name("isLoggedIn(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagesKt")))
@interface DKSMessagesKt : DKSBase
+ (NSString *)getMessage:(id<DKSErrorMessageProvider>)receiver error:(DKSErrorResult *)error defMessage:(NSString * _Nullable)defMessage __attribute__((swift_name("getMessage(_:error:defMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkKt")))
@interface DKSNetworkKt : DKSBase
+ (DKSResult<id> *)runCatchingAuthNetworkExceptionsBlock:(DKSResult<id> *(^)(void))block __attribute__((swift_name("runCatchingAuthNetworkExceptions(block:)")));
+ (DKSResult<id> *)runCatchingCommonNetworkExceptionsBlock:(DKSResult<id> *(^)(void))block __attribute__((swift_name("runCatchingCommonNetworkExceptions(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultToKt")))
@interface DKSResultToKt : DKSBase
+ (DKSResult<id> *)resultsTo:(id)receiver result:(DKSResultType *)result __attribute__((swift_name("resultsTo(_:result:)")));
+ (DKSResult<id> *)resultsTo:(id _Nullable)receiver result_:(DKSErrorResult *)result __attribute__((swift_name("resultsTo(_:result_:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol DKSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<DKSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<DKSKotlinCoroutineContextElement> _Nullable)getKey:(id<DKSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<DKSKotlinCoroutineContext>)minusKeyKey:(id<DKSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<DKSKotlinCoroutineContext>)plusContext:(id<DKSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol DKSKotlinCoroutineContextElement <DKSKotlinCoroutineContext>
@required
@property (readonly) id<DKSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol DKSKotlinx_coroutines_coreJob <DKSKotlinCoroutineContextElement>
@required
- (id<DKSKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<DKSKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(DKSKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (DKSKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<DKSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(DKSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<DKSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(DKSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<DKSKotlinx_coroutines_coreJob>)plusOther:(id<DKSKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<DKSKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<DKSKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol DKSKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol DKSKotlinSuspendFunction1 <DKSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface DKSKotlinRuntimeException : DKSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface DKSKotlinIllegalStateException : DKSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface DKSKotlinCancellationException : DKSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface DKSKotlinUnit : DKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface DKSKotlinAbstractCoroutineContextElement : DKSBase <DKSKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<DKSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<DKSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol DKSKotlinContinuationInterceptor <DKSKotlinCoroutineContextElement>
@required
- (id<DKSKotlinContinuation>)interceptContinuationContinuation:(id<DKSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<DKSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface DKSKotlinx_coroutines_coreCoroutineDispatcher : DKSKotlinAbstractCoroutineContextElement <DKSKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<DKSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<DKSKotlinCoroutineContext>)context block:(id<DKSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<DKSKotlinCoroutineContext>)context block:(id<DKSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<DKSKotlinContinuation>)interceptContinuationContinuation:(id<DKSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<DKSKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (DKSKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(DKSKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<DKSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol DKSKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<DKSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol DKSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<DKSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DKSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol DKSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<DKSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<DKSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol DKSKotlinx_serialization_coreKSerializer <DKSKotlinx_serialization_coreSerializationStrategy, DKSKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol DKSKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<DKSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol DKSKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface DKSKtor_client_coreHttpClient : DKSBase <DKSKotlinx_coroutines_coreCoroutineScope, DKSKtor_ioCloseable>
- (instancetype)initWithEngine:(id<DKSKtor_client_coreHttpClientEngine>)engine userConfig:(DKSKtor_client_coreHttpClientConfig<DKSKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (DKSKtor_client_coreHttpClient *)configBlock:(void (^)(DKSKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(DKSKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(DKSKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<DKSKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DKSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<DKSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) DKSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<DKSKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) DKSKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) DKSKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) DKSKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) DKSKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) DKSKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface DKSKotlinArray<T> : DKSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(DKSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<DKSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface DKSKtor_httpUrl : DKSBase
- (instancetype)initWithProtocol:(DKSKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<DKSKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (DKSKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<DKSKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (DKSKtor_httpUrl *)doCopyProtocol:(DKSKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<DKSKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<DKSKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) DKSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol DKSKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol DKSKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol DKSKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol DKSKotlinKClass <DKSKotlinKDeclarationContainer, DKSKotlinKAnnotatedElement, DKSKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreDefinitionParameters")))
@interface DKSKoin_coreDefinitionParameters : DKSBase
- (instancetype)initWithValues:(NSArray<id> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
- (DKSKoin_coreDefinitionParameters *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<DKSKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNullClazz:(id<DKSKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (DKSKoin_coreDefinitionParameters *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface DKSKoin_coreScope : DKSBase
- (instancetype)initWithId:(NSString *)id _scopeDefinition:(DKSKoin_coreScopeDefinition *)_scopeDefinition _koin:(DKSKoin_coreKoin *)_koin __attribute__((swift_name("init(id:_scopeDefinition:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)addParametersParameters:(DKSKoin_coreDefinitionParameters *)parameters __attribute__((swift_name("addParameters(parameters:)")));
- (id _Nullable)bindPrimaryType:(id<DKSKotlinKClass>)primaryType secondaryType:(id<DKSKotlinKClass>)secondaryType parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)clearParameters __attribute__((swift_name("clearParameters()")));
- (void)close __attribute__((swift_name("close()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DKSKoin_coreScopeDefinition *)component2 __attribute__((swift_name("component2()")));
- (DKSKoin_coreScope *)doCopyId:(NSString *)id _scopeDefinition:(DKSKoin_coreScopeDefinition *)_scopeDefinition _koin:(DKSKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(id:_scopeDefinition:_koin:)")));
- (void)declareInstance:(id)instance qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<DKSKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)dropInstanceBeanDefinition:(DKSKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("dropInstance(beanDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getClazz:(id<DKSKotlinKClass>)clazz qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<DKSKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (DKSKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<DKSKotlinKClass>)clazz qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (DKSKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id)getSource __attribute__((swift_name("getSource()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<DKSKotlinLazy>)injectQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier mode:(DKSKotlinLazyThreadSafetyMode *)mode parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<DKSKotlinLazy>)injectOrNullQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier mode:(DKSKotlinLazyThreadSafetyMode *)mode parameters:(DKSKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)linkToScopes:(DKSKotlinArray<DKSKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)loadDefinitionBeanDefinition:(DKSKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("loadDefinition(beanDefinition:)")));
- (void)registerCallbackCallback:(id<DKSKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (void)setSourceT:(id _Nullable)t __attribute__((swift_name("setSource(t:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(DKSKotlinArray<DKSKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) DKSKoin_coreScopeDefinition *_scopeDefinition __attribute__((swift_name("_scopeDefinition")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) DKSKoin_coreLogger *logger __attribute__((swift_name("logger")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol DKSKoin_coreKoinComponent
@required
- (DKSKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol DKSKoin_coreKoinScopeComponent <DKSKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) DKSKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol DKSKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol DKSKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol DKSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface DKSKotlinEnum<E> : DKSBase <DKSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface DKSKotlinLazyThreadSafetyMode : DKSKotlinEnum<DKSKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) DKSKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) DKSKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (DKSKotlinArray<DKSKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface DKSKoin_coreModule : DKSBase
- (instancetype)initWithCreateAtStart:(BOOL)createAtStart override:(BOOL)override __attribute__((swift_name("init(createAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (DKSKoin_coreBeanDefinition<id> *)factoryQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (DKSKoin_coreOptions *)makeOptionsOverride:(BOOL)override createdAtStart:(BOOL)createdAtStart __attribute__((swift_name("makeOptions(override:createdAtStart:)")));
- (NSArray<DKSKoin_coreModule *> *)plusModules:(NSArray<DKSKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<DKSKoin_coreModule *> *)plusModule:(DKSKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<DKSKoin_coreQualifier>)qualifier scopeSet:(void (^)(DKSKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(DKSKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (DKSKoin_coreBeanDefinition<id> *)singleQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart override:(BOOL)override definition:(id _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:createdAtStart:override:definition:)")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface DKSKoin_coreLogger : DKSBase
- (instancetype)initWithLevel:(DKSKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(DKSKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLevel:(DKSKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property DKSKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface DKSKoin_corePropertyRegistry : DKSBase
- (instancetype)initWith_koin:(DKSKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface DKSKoin_coreScopeRegistry : DKSBase
- (instancetype)initWith_koin:(DKSKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (DKSKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<DKSKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareDefinitionBean:(DKSKoin_coreBeanDefinition<id> *)bean __attribute__((swift_name("declareDefinition(bean:)")));
- (void)deleteScopeScope:(DKSKoin_coreScope *)scope __attribute__((swift_name("deleteScope(scope:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (DKSKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)unloadModulesModules:(id)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(DKSKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) DKSKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSDictionary<NSString *, DKSKoin_coreScopeDefinition *> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface DKSKoin_coreKoinApplication : DKSBase
- (void)close __attribute__((swift_name("close()")));
- (DKSKoin_coreKoinApplication *)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (DKSKoin_coreKoinApplication *)loggerLogger:(DKSKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (DKSKoin_coreKoinApplication *)modulesModules:(DKSKotlinArray<DKSKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (DKSKoin_coreKoinApplication *)modulesModules_:(NSArray<DKSKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (DKSKoin_coreKoinApplication *)modulesModules__:(DKSKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (DKSKoin_coreKoinApplication *)printLoggerLevel:(DKSKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (DKSKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, NSString *> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<DKSKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(DKSKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) DKSKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol DKSKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol DKSKotlinx_coroutines_coreChildHandle <DKSKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(DKSKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol DKSKotlinx_coroutines_coreChildJob <DKSKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<DKSKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface DKSKotlinx_coroutines_coreCancellationException : DKSKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol DKSKotlinSequence
@required
- (id<DKSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol DKSKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<DKSKotlinx_coroutines_coreSelectInstance>)select block:(id<DKSKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol DKSKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol DKSKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<DKSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol DKSKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol DKSKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol DKSKotlinx_serialization_coreEncoder
@required
- (id<DKSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<DKSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<DKSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<DKSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) DKSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol DKSKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<DKSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<DKSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<DKSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) DKSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol DKSKotlinx_serialization_coreDecoder
@required
- (id<DKSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (DKSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<DKSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<DKSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) DKSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol DKSKtor_client_coreHttpClientEngine <DKSKotlinx_coroutines_coreCoroutineScope, DKSKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(DKSKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(DKSKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(DKSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) DKSKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) DKSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<DKSKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface DKSKtor_client_coreHttpClientEngineConfig : DKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property DKSKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) DKSKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface DKSKtor_client_coreHttpClientConfig<T> : DKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DKSKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(DKSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<DKSKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(DKSKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(DKSKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol DKSKtor_httpHttpMessageBuilder
@required
@property (readonly) DKSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface DKSKtor_client_coreHttpRequestBuilder : DKSBase <DKSKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DKSKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<DKSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<DKSKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<DKSKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (DKSKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(DKSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (DKSKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(DKSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(DKSKtor_httpURLBuilder *, DKSKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<DKSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<DKSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) DKSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property DKSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) DKSKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface DKSKtor_client_coreHttpClientCall : DKSBase <DKSKotlinx_coroutines_coreCoroutineScope>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<DKSKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(DKSKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<DKSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) DKSKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<DKSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<DKSKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) DKSKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol DKSKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol DKSKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(DKSKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(DKSKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<DKSKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface DKSKtor_utilsPipeline<TSubject, TContext> : DKSBase
- (instancetype)initWithPhase:(DKSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DKSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(DKSKotlinArray<DKSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(DKSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(DKSKtor_utilsPipelinePhase *)reference phase:(DKSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(DKSKtor_utilsPipelinePhase *)reference phase:(DKSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(DKSKtor_utilsPipelinePhase *)phase block:(id<DKSKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(DKSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<DKSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<DKSKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface DKSKtor_client_coreHttpReceivePipeline : DKSKtor_utilsPipeline<DKSKtor_client_coreHttpResponse *, DKSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DKSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DKSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DKSKotlinArray<DKSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface DKSKtor_client_coreHttpRequestPipeline : DKSKtor_utilsPipeline<id, DKSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DKSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DKSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DKSKotlinArray<DKSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface DKSKtor_client_coreHttpResponsePipeline : DKSKtor_utilsPipeline<DKSKtor_client_coreHttpResponseContainer *, DKSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DKSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DKSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DKSKotlinArray<DKSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface DKSKtor_client_coreHttpSendPipeline : DKSKtor_utilsPipeline<id, DKSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DKSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DKSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DKSKotlinArray<DKSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol DKSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface DKSKtor_httpURLProtocol : DKSBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DKSKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol DKSKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<DKSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol DKSKtor_httpParameters <DKSKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDefinition")))
@interface DKSKoin_coreScopeDefinition : DKSBase
- (instancetype)initWithQualifier:(id<DKSKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot __attribute__((swift_name("init(qualifier:isRoot:)"))) __attribute__((objc_designated_initializer));
- (id<DKSKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (DKSKoin_coreScopeDefinition *)doCopyQualifier:(id<DKSKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot __attribute__((swift_name("doCopy(qualifier:isRoot:)")));
- (DKSKoin_coreBeanDefinition<id> *)declareNewDefinitionInstance:(id)instance defQualifier:(id<DKSKoin_coreQualifier> _Nullable)defQualifier secondaryTypes:(NSArray<id<DKSKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declareNewDefinition(instance:defQualifier:secondaryTypes:override:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)removeBeanDefinition:(DKSKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("remove(beanDefinition:)")));
- (void)saveBeanDefinition:(DKSKoin_coreBeanDefinition<id> *)beanDefinition forceOverride:(BOOL)forceOverride __attribute__((swift_name("save(beanDefinition:forceOverride:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSMutableSet<DKSKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) id<DKSKoin_coreQualifier> qualifier __attribute__((swift_name("qualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface DKSKoin_coreBeanDefinition<T> : DKSBase
- (instancetype)initWithScopeQualifier:(id<DKSKoin_coreQualifier>)scopeQualifier primaryType:(id<DKSKotlinKClass>)primaryType qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition kind:(DKSKoin_coreKind *)kind secondaryTypes:(NSArray<id<DKSKotlinKClass>> *)secondaryTypes options:(DKSKoin_coreOptions *)options properties:(DKSKoin_coreProperties *)properties __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canBindPrimary:(id<DKSKotlinKClass>)primary secondary:(id<DKSKotlinKClass>)secondary __attribute__((swift_name("canBind(primary:secondary:)")));
- (id<DKSKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<DKSKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<DKSKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))component4 __attribute__((swift_name("component4()")));
- (DKSKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<DKSKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (DKSKoin_coreOptions *)component7 __attribute__((swift_name("component7()")));
- (DKSKoin_coreProperties *)component8 __attribute__((swift_name("component8()")));
- (DKSKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<DKSKoin_coreQualifier>)scopeQualifier primaryType:(id<DKSKotlinKClass>)primaryType qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition kind:(DKSKoin_coreKind *)kind secondaryTypes:(NSArray<id<DKSKotlinKClass>> *)secondaryTypes options:(DKSKoin_coreOptions *)options properties:(DKSKoin_coreProperties *)properties __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<DKSKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<DKSKotlinKClass>)clazz qualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<DKSKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DKSKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *) __attribute__((swift_name("definition")));
@property (readonly) DKSKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) DKSKoin_coreOptions *options __attribute__((swift_name("options")));
@property (readonly) id<DKSKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) DKSKoin_coreProperties *properties __attribute__((swift_name("properties")));
@property (readonly) id<DKSKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<DKSKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<DKSKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol DKSKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(DKSKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptions")))
@interface DKSKoin_coreOptions : DKSBase
- (instancetype)initWithIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override isExtraDefinition:(BOOL)isExtraDefinition __attribute__((swift_name("init(isCreatedAtStart:override:isExtraDefinition:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DKSKoin_coreOptions *)doCopyIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override isExtraDefinition:(BOOL)isExtraDefinition __attribute__((swift_name("doCopy(isCreatedAtStart:override:isExtraDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isCreatedAtStart __attribute__((swift_name("isCreatedAtStart")));
@property BOOL isExtraDefinition __attribute__((swift_name("isExtraDefinition")));
@property BOOL override __attribute__((swift_name("override")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface DKSKoin_coreScopeDSL : DKSBase
- (instancetype)initWithScopeQualifier:(id<DKSKoin_coreQualifier>)scopeQualifier definitions:(DKSMutableSet<DKSKoin_coreBeanDefinition<id> *> *)definitions __attribute__((swift_name("init(scopeQualifier:definitions:)"))) __attribute__((objc_designated_initializer));
- (DKSKoin_coreBeanDefinition<id> *)factoryQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (DKSKoin_coreBeanDefinition<id> *)scopedQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition __attribute__((swift_name("scoped(qualifier:override:definition:)")));
- (DKSKoin_coreBeanDefinition<id> *)singleQualifier:(id<DKSKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(DKSKoin_coreScope *, DKSKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:override:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) DKSMutableSet<DKSKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) id<DKSKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface DKSKoin_coreLevel : DKSKotlinEnum<DKSKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) DKSKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) DKSKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) DKSKoin_coreLevel *none __attribute__((swift_name("none")));
+ (DKSKotlinArray<DKSKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol DKSKotlinx_coroutines_coreParentJob <DKSKotlinx_coroutines_coreJob>
@required
- (DKSKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol DKSKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<DKSKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(DKSKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(DKSKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<DKSKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol DKSKotlinSuspendFunction0 <DKSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol DKSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DKSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DKSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) DKSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface DKSKotlinx_serialization_coreSerializersModule : DKSBase
- (void)dumpToCollector:(id<DKSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<DKSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<DKSKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<DKSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DKSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<DKSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DKSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol DKSKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface DKSKotlinx_serialization_coreSerialKind : DKSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol DKSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DKSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DKSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<DKSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) DKSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface DKSKotlinNothing : DKSBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface DKSKtor_client_coreHttpRequestData : DKSBase
- (instancetype)initWithUrl:(DKSKtor_httpUrl *)url method:(DKSKtor_httpHttpMethod *)method headers:(id<DKSKtor_httpHeaders>)headers body:(DKSKtor_httpOutgoingContent *)body executionContext:(id<DKSKotlinx_coroutines_coreJob>)executionContext attributes:(id<DKSKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<DKSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DKSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) DKSKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<DKSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<DKSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) DKSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) DKSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface DKSKtor_client_coreHttpResponseData : DKSBase
- (instancetype)initWithStatusCode:(DKSKtor_httpHttpStatusCode *)statusCode requestTime:(DKSKtor_utilsGMTDate *)requestTime headers:(id<DKSKtor_httpHeaders>)headers version:(DKSKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<DKSKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<DKSKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<DKSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) DKSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) DKSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) DKSKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) DKSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface DKSKtor_client_coreProxyConfig : DKSBase
- (instancetype)initWithUrl:(DKSKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol DKSKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(DKSKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) DKSKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface DKSKtor_utilsStringValuesBuilder : DKSBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<DKSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<DKSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<DKSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<DKSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
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
@property (readonly) DKSMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface DKSKtor_httpHeadersBuilder : DKSKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<DKSKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface DKSKtor_httpURLBuilder : DKSBase
- (instancetype)initWithProtocol:(DKSKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(DKSKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (DKSKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (DKSKtor_httpURLBuilder *)pathComponents:(DKSKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (DKSKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) DKSKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property DKSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface DKSKtor_httpHttpMethod : DKSBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DKSKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol DKSKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(DKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(DKSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(DKSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(DKSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(DKSKtor_ioIoBuffer *)dst completionHandler:(void (^)(DKSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(DKSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(DKSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(DKSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(DKSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(DKSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(DKSByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(DKSDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(DKSFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(DKSKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(DKSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(DKSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(DKSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(DKSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(DKSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<DKSKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(DKSShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<DKSKotlinSuspendFunction1>)consumer completionHandler:(void (^)(DKSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<DKSKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(DKSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property DKSKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface DKSKtor_client_coreTypeInfo : DKSBase
- (instancetype)initWithType:(id<DKSKotlinKClass>)type reifiedType:(id<DKSKotlinKType>)reifiedType kotlinType:(id<DKSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<DKSKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<DKSKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<DKSKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (DKSKtor_client_coreTypeInfo *)doCopyType:(id<DKSKotlinKClass>)type reifiedType:(id<DKSKotlinKType>)reifiedType kotlinType:(id<DKSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DKSKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<DKSKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<DKSKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol DKSKtor_httpHttpMessage
@required
@property (readonly) id<DKSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol DKSKtor_client_coreHttpRequest <DKSKtor_httpHttpMessage, DKSKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<DKSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) DKSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) DKSKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) DKSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) DKSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface DKSKtor_client_coreHttpResponse : DKSBase <DKSKtor_httpHttpMessage, DKSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<DKSKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) DKSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) DKSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) DKSKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) DKSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface DKSKtor_utilsAttributeKey<T> : DKSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface DKSKtor_utilsPipelinePhase : DKSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol DKSKotlinSuspendFunction2 <DKSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface DKSKtor_client_coreHttpResponseContainer : DKSBase
- (instancetype)initWithExpectedType:(DKSKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (DKSKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (DKSKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(DKSKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol DKSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface DKSKoin_coreKind : DKSKotlinEnum<DKSKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKoin_coreKind *single __attribute__((swift_name("single")));
@property (class, readonly) DKSKoin_coreKind *factory __attribute__((swift_name("factory")));
+ (DKSKotlinArray<DKSKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreProperties")))
@interface DKSKoin_coreProperties : DKSBase
- (instancetype)initWithData:(DKSMutableDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (DKSKoin_coreProperties *)doCopyData:(DKSMutableDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(NSString *)key __attribute__((swift_name("getOrNull(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("set(key:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface DKSKoin_coreCallbacks<T> : DKSBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (DKSKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface DKSKotlinx_coroutines_coreAtomicDesc : DKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(DKSKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(DKSKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property DKSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface DKSKotlinx_coroutines_coreOpDescriptor : DKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(DKSKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : DKSKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) DKSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol DKSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<DKSKotlinKClass>)kClass serializer:(id<DKSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<DKSKotlinKClass>)baseClass actualClass:(id<DKSKotlinKClass>)actualClass actualSerializer:(id<DKSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<DKSKotlinKClass>)baseClass defaultSerializerProvider:(id<DKSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol DKSKtor_httpHeaders <DKSKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface DKSKtor_httpOutgoingContent : DKSBase
- (id _Nullable)getPropertyKey:(DKSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(DKSKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) DKSLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) DKSKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<DKSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) DKSKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface DKSKtor_httpHttpStatusCode : DKSBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DKSKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (DKSKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface DKSKtor_utilsGMTDate : DKSBase <DKSKotlinComparable>
- (int32_t)compareToOther:(DKSKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DKSKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (DKSKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (DKSKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(DKSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(DKSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) DKSKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) DKSKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface DKSKtor_httpHttpProtocolVersion : DKSBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DKSKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface DKSKtor_httpParametersBuilder : DKSKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<DKSKtor_httpParameters>)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface DKSKtor_ioMemory : DKSBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
- (void)doCopyToDestination:(DKSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(DKSKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (DKSKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (DKSKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface DKSKtor_ioBuffer : DKSBase
- (instancetype)initWithMemory:(DKSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (DKSKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(DKSKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
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
@property (readonly) DKSKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface DKSKtor_ioChunkBuffer : DKSKtor_ioBuffer
- (instancetype)initWithMemory:(DKSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (DKSKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (DKSKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) DKSKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) DKSKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol DKSKtor_ioInput <DKSKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(DKSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property DKSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol DKSKotlinAppendable
@required
- (id<DKSKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<DKSKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<DKSKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol DKSKtor_ioOutput <DKSKotlinAppendable, DKSKtor_ioCloseable>
@required
- (id<DKSKotlinAppendable>)appendCsq:(DKSKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property DKSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface DKSKtor_ioIoBuffer : DKSKtor_ioChunkBuffer <DKSKtor_ioInput, DKSKtor_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(DKSKtor_ioMemory *)memory origin:(DKSKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (id<DKSKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<DKSKotlinAppendable>)appendCsq:(DKSKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<DKSKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<DKSKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(DKSKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (DKSKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (DKSKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(DKSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(DKSInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(DKSInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property DKSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface DKSKotlinByteArray : DKSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(DKSByte *(^)(DKSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (DKSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface DKSKtor_ioAbstractInput : DKSBase <DKSKtor_ioInput>
- (instancetype)initWithHead:(DKSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (DKSKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(DKSKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (DKSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(DKSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(DKSKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(DKSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (DKSKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<DKSKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<DKSKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property DKSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<DKSKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface DKSKtor_ioByteReadPacketBase : DKSKtor_ioAbstractInput
- (instancetype)initWithHead:(DKSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface DKSKtor_ioByteReadPacketPlatformBase : DKSKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(DKSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface DKSKtor_ioByteReadPacket : DKSKtor_ioByteReadPacketPlatformBase <DKSKtor_ioInput>
- (instancetype)initWithHead:(DKSKtor_ioChunkBuffer *)head pool:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(DKSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<DKSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (DKSKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (DKSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(DKSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol DKSKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (DKSKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface DKSKtor_ioByteOrder : DKSKotlinEnum<DKSKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) DKSKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (DKSKotlinArray<DKSKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol DKSKotlinKType
@required
@property (readonly) NSArray<DKSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<DKSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface DKSKotlinx_coroutines_coreAtomicOp<__contravariant T> : DKSKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) DKSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface DKSKotlinx_coroutines_coreLockFreeLinkedListNode : DKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(DKSBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(DKSBoolean *(^)(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(DKSBoolean *(^)(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(DKSBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<DKSKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<DKSKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(DKSBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : DKSKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(DKSKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(DKSKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(DKSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface DKSKtor_httpHeaderValueWithParameters : DKSBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<DKSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<DKSKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface DKSKtor_httpContentType : DKSKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<DKSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<DKSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(DKSKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (DKSKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (DKSKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface DKSKtor_utilsWeekDay : DKSKotlinEnum<DKSKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) DKSKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) DKSKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) DKSKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) DKSKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) DKSKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) DKSKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (DKSKotlinArray<DKSKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface DKSKtor_utilsMonth : DKSKotlinEnum<DKSKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) DKSKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) DKSKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) DKSKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) DKSKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) DKSKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) DKSKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) DKSKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) DKSKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) DKSKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) DKSKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) DKSKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (DKSKotlinArray<DKSKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol DKSKtor_ioObjectPool <DKSKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface DKSKotlinCharArray : DKSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(DKSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (DKSKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface DKSKotlinByteIterator : DKSBase <DKSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DKSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface DKSKotlinKTypeProjection : DKSBase
- (instancetype)initWithVariance:(DKSKotlinKVariance * _Nullable)variance type:(id<DKSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (DKSKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<DKSKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (DKSKotlinKTypeProjection *)doCopyVariance:(DKSKotlinKVariance * _Nullable)variance type:(id<DKSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DKSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) DKSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(DKSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface DKSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : DKSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(DKSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(DKSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DKSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) DKSKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface DKSKtor_httpHeaderValueParam : DKSBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DKSKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface DKSKotlinCharIterator : DKSBase <DKSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface DKSKotlinKVariance : DKSKotlinEnum<DKSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DKSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) DKSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) DKSKotlinKVariance *out __attribute__((swift_name("out")));
+ (DKSKotlinArray<DKSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
