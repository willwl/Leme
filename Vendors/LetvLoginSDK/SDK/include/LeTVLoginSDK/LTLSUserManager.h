//
//  LTLSUserManager.h
//  LeTVLoginSDK_iOS
//
//  Created by 王易平 on 15/12/2.
//  Copyright © 2015年 LeTV. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LTUserModel.h"
#import "LTLSDefination.h"
#import "LTLSUserManagerConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enums

//typedef NS_ENUM(NSUInteger, LTLSRegion) {
//    // 中国大陆
//    LTLSRegionMainLand,
//    // 其他
//    LTLSRegionOther,
//};

#pragma mark - Constants

extern NSString * const LeTVLoginSDKUserDidLoginNotification;
extern NSString * const LeTVLoginSDKUserDidLogoutNotification;
extern NSString * const LeTVLoginSDKUserDidUpdateInfoNotification;

#pragma mark - Types

typedef void(^LTLSUserSuccessBlock)(LTUserModel *user);
typedef void(^LTLSSuccessBlock)(id responseObject);
typedef void(^LTLSFailureBlock)(NSError * _Nullable error, NSNumber * _Nullable errorCode, NSString * _Nullable message);


#pragma mark - Methods

@interface LTLSUserManager : NSObject

+ (instancetype)defaultUserManager;

/**
 *  @author wangyiping1, 15-12-10 15:12:54
 *
 *  @brief 初始化，必须调用
 *  @param plat SSO分配的platform
 *  @param region 地区码（国家或地区域名缩写，比如：中国为CN，香港为HK,台湾TW，印度IN，新加坡SG，泰国TH，美国US，加拿大CA）
 *  @param  language 语言（目前支持的三种：zh-cn,zh-hk,en-us，分别对应简体中文、繁体中文、英文，不在此范围内的，默认为en-us）
 */
+ (void)registerWithPlatform:(NSString *)plat region:(NSString*)region language:(NSString*)language DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");
+ (void)registerWithConfiguration:(LTLSUserManagerConfiguration *)configuration application:(UIApplication *)application launchOption:(NSDictionary *)launchOption;

+ (void)setLogType:(LTLSLogType)logType DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (void)setToastType:(LTLSToastType)toastType DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

/**
 *  @author wangyiping1, 15-12-10 15:12:46
 *
 *  @brief 登录接口
 *  @discussion 登录成功会调用 LeTVLoginSDKUserDidLoginNotification
 *
 *  @param account  帐号
 *  @param password 密码
 *  @param success
 *  @param failure
 */
- (void)loginWithAccount:(NSString *)account
                password:(NSString *)password
            captchaValue:(NSString * __nullable)captchaValue
               captchaId:(NSString * __nullable)captchaId
                 success:(LTLSUserSuccessBlock)success
                 failure:(LTLSFailureBlock)failure;

/**
 *  @author wangyiping1, 15-12-10 15:12:20
 *
 *  @brief 短信快捷登录注册
 *  @discussion 登录成功会调用 LeTVLoginSDKUserDidLoginNotification
 *
 *  @param phoneNumber       手机号
 *  @param smsCode      验证短信
 *  @param captchaValue 验证码
 *  @param captchaId    验证码Id
 *  @param success
 *  @param failure
 */
- (void)regLoginWithPhone:(NSString *)phoneNumber
                smsCode:(NSString *)smsCode
           captchaValue:(NSString * __nullable)captchaValue
              captchaId:(NSString * __nullable)captchaId
                success:(LTLSUserSuccessBlock)success
                failure:(LTLSFailureBlock)failure;

/**
 *  @author wangyiping1, 15-12-10 15:12:45
 *
 *  @brief 请求短信验证码
 *
 *  @param phoneNumber  手机号
 *  @param action
 *  @param captchaValue
 *  @param captchaId
 *  @param success
 *  @param failure
 */
- (void)requestSMSCodeWithPhone:(NSString *)phoneNumber
                         action:(LTLSSMSAction)action
                   captchaValue:(NSString * __nullable)captchaValue
                      captchaId:(NSString * __nullable)captchaId
                        success:(LTLSSuccessBlock)success
                        failure:(LTLSFailureBlock)failure;

/**
 *
 *  @brief 请求邮箱验证码
 *
 *  @param email  邮箱
 *  @param action
 *  @param captchaValue
 *  @param captchaId
 *  @param success
 *  @param failure
 */
- (void)requestActivateCodeWithEmail:(NSString *)email
                         action:(LTLSEmailAction)action
                   captchaValue:(NSString * __nullable)captchaValue
                      captchaId:(NSString * __nullable)captchaId
                        success:(LTLSSuccessBlock)success
                        failure:(LTLSFailureBlock)failure;
/**
 通过手机号、手机验证码验证手机
 
 @param mobile  手机号
 @param action
 @param code    短信激活码
 @param success 成功的回调
 @param failure 失败的回调
 */
- (void)verifySMSCodeWithPhone:(NSString *)mobile
                          code:(NSInteger)code
                        action:(LTLSSMSAction)action
                       success:(LTLSSuccessBlock)success
                       failure:(LTLSFailureBlock)failure;

/**
 重置密码(需先验证用户身份,如验证手机号)
 
 @param mobile   电话号码
 @param password 密码
 @param success  成功的回调
 @param failure  失败的回调
 */
- (void)resetPasswordWithPhone:(NSString *)mobile
                      password:(NSString *)password
                       success:(LTLSUserSuccessBlock)success
                       failure:(LTLSFailureBlock)failure;


/**
 *  @author wangyiping1, 15-12-18 10:12:48
 *
 *  @brief 手机号注册
 *
 *  @param phoneNumber  手机号码
 *  @param password     明文密码
 *  @param code         激活码
 *  @param success
 *  @param failure
 */

- (void)registerWithPhone:(NSString *)phoneNumber
                 password:(NSString *)password
                     code:(NSString *)code
                  success:(LTLSUserSuccessBlock)success
                  failure:(LTLSFailureBlock)failure;

/*
 *  @brief v2.4邮箱和手机注册的统一入口
 *  @param  account     手机or邮箱
 *  @param  password    密码
 *  @param  code        验证码
 *  @param  success
 *  @param  failure
 */
- (void)registerWithAccount:(NSString *)account
                   password:(NSString *)password
                       code:(NSString *)code
                    success:(LTLSUserSuccessBlock)success
                    failure:(LTLSFailureBlock)failure;
/*
*
*  @brief 用户信息修改
*
*  @param uid
*  @param userValue    修改信息
*  @param success
*  @param failure
*/
- (void)modifyUserInfoWithUid:(NSString *)uid
                       gender:(NSString *)gender
                     birthday:(NSString *)birthday
                     nickname:(NSString *)nickname
                     province:(NSString *)province
                         city:(NSString *)city
                  success:(LTLSSuccessBlock)success
                  failure:(LTLSFailureBlock)failure;


/*
 *
 *  @brief 修改头像
 *
 *  @param uid
 *  @param imagedata   照片data
 *  @param success
 *  @param failure
 */
- (void)updateUserHeadImage:(NSData *)imagedata
                    success:(LTLSSuccessBlock)success
                    failure:(LTLSFailureBlock)failure;

/**
 *  @author wangyiping1, 15-12-10 17:12:25
 *
 *  @brief 验证ssoToken是否过期
 *  @discussion 验证失败会调用 LeTVLoginSDKUserDidLogoutNotification
 *
 *  @param ssoToken
 *  @param success
 *  @param failure
 */
- (void)checkTokenValid:(NSString *)ssoToken
                success:(LTLSSuccessBlock)success
                failure:(LTLSFailureBlock)failure;

/* @author xuliang
 *  @brief 验证ssoToken是否过期，未过期则带有用户信息
 *
 */
- (void)checkTokenValidReturn:(NSString *)ssoToken
                success:(LTLSSuccessBlock)success
                failure:(LTLSFailureBlock)failure;

/**
 secondVerify(二次验证)
 
 @param ssotk    token
 @param password 密码
 @param success  成功的回调
 @param failure  失败的回调
 */
- (void)secondVerifyWithTokenValid:(NSString *)ssotk
                          password:(NSString *)password
                           success:(LTLSUserSuccessBlock)success
                           failure:(LTLSFailureBlock)failure;


/**
 *  @author wangyiping1, 15-12-10 18:12:01
 *
 *  @brief 登出
 */
- (void)logout;

/**
 *  @author wangyiping1, 16-01-04 17:01:15
 *
 *  @brief 是否已登录
 *
 *  @return 
 */
- (BOOL)isUserLogin;

/**
 *  @author wangyiping1, 15-12-22 15:12:21
 *
 *  @brief 更新用户信息
 *
 *  @param uid
 *  @param success
 *  @param failure 
 */
- (void)updateUserInfoWithUID:(NSString *)uid
                      success:(LTLSUserSuccessBlock)success
                      failure:(LTLSFailureBlock)failure;

/**
 *  @author wangyiping1, 16-12-30 11:12:53
 *
 *  @brief 更新CurrentUser用户信息
 *
 *  @param success
 *  @param failure 
 */
- (void)updateCurrentUserInfoSuccess:(LTLSUserSuccessBlock)success
                             failure:(LTLSFailureBlock)failure;


/**
 *  @author wangyiping1, 15-12-18 10:12:42
 *
 *  @brief 拉取验证码
 *
 *  @param success
 *  @param failure
 */
- (void)requestCaptchaSuccess:(void (^)(NSString *captchaId, UIImage *captchaImage))success
                      failure:(LTLSFailureBlock)failure;


/**
 *  @author xuliang
 *  
 *  @brief 检查手机号是否存在
 *
 *  @param phoneNumber  手机号
 *  @param success 成功回调
 *  @param  failure 失败回调
 */
- (void)checkMobileNumber:(NSString*)phoneNumber success:(LTLSSuccessBlock)success failure:(LTLSFailureBlock)faiure;


/*
 *  @beief 检查邮箱
 *  @param email 邮箱
 *  @param success 成功回调
 *  @param failure  失败回调
 */
- (void)checkEmail:(NSString*)email success:(LTLSSuccessBlock)success failure:(LTLSFailureBlock)failure;

/**
 *  @author wangyiping1, 16-01-04 17:01:13
 *
 *  @brief 支持的手机号国家码
 */
@property (nonatomic, readonly, nullable) NSArray <LTLSCountryCodeModel *> *countryCodes;

/*
 * @author xuliang1, 2016.3.14
 * @brief 支持州，国家的地区码
 */
@property (nonatomic, readonly, nullable) NSArray <LTLSContinentCountryCodeModel*>      *continentCountryCodes;

///*
// * @author xuliang1, 2016.3.16
// * @brief 
// */
//@property (nonatomic, readonly,nullable) LTLSCountryCodeModel                           *defaultCountryCodeModel;

/**
 *  @author wangyiping1, 16-01-04 17:01:22
 *
 *  @brief 获取当前用户
 */
@property (nonatomic, readonly, nullable) LTUserModel *currentUser;
@property (nonatomic, readonly, nullable) NSString *tvToken;
@property (nonatomic, readonly, nullable) NSString *ssoToken;
@property (nonatomic, copy, readonly) NSString *platform;
@property (nonatomic, copy, readonly) NSString *region;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy, nullable, readonly) NSString *userProtocolUrl;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, assign) LTLSBindingAccountType bindType;
// TODO: 放到private去
@property (nonatomic, assign) BOOL registerInSuperID;        //一登是否注册
@property (nonatomic, copy) NSString *superIDToken;          //一登token


/**
 *  @author wangyiping1, 15-12-15 14:12:45
 *
 *  @brief 短信注册短信通道
 */
@property (nonatomic, readonly, nullable) NSString *regMessageChannel;
/**
 *  @author wangyiping1, 15-12-15 14:12:02
 *
 *  @brief 短信重置密码通道
 */
@property (nonatomic, readonly, nullable) NSString *resetPwdMessageChannel;

//!读取app是否启用touchid
+ (id)readCustomTouchIdFromAppSetting;
//!设置当前app是否启用touchid
+ (void)setCustomTouchIdInAppSetting:(BOOL)value;

//! 刷新基础信息
+ (void)refreshBaseInfoWithPlatform:(NSString*)plat country:(NSString*)region;

@end


@interface LTLSUserManager (ThirdParty)

/**
 *  @author wangyiping1, 16-01-04 17:01:35
 *
 *  @brief 微博Client注册
 */
+ (void)registerWeiboWithAppKey:(NSString *)appKey redirectURI:(NSString *)redirectURI delegate:(nullable id)delegate DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (void)registerWechatWithAppKey:(NSString *)appKey appSecret:(NSString *)appSecret delegate:(nullable id)delegate DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (void)registerQQWithAppKey:(NSString *)appKey delegate:(nullable id)delegate DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (BOOL)registerFacebookWithAppID:(NSString *)appID  appName:(NSString *)appName application:(UIApplication *)application launchOptions:(NSDictionary *)launchOptions delegate:(nullable id)delegate DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (void)registerTwitterWithConsumerKey:(NSString *)consumerKey consumerSecret:(NSString *)consumerSecret delegate:(nullable id)delegate DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (void)registerGoogleWithClientID:(NSString *)clientID delegate:(nullable id)delegate DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");
+ (void)registerSuerIDWithAppId:(NSString*)appId andAppSecrect:(NSString*)appSecrect andSignToken:(NSString*)signToken DEPRECATED_MSG_ATTRIBUTE("use +registerWithConfiguration application: launchOption: instead");

+ (BOOL)handleOpenURL:(NSURL *)url;
+ (BOOL)handleOpenURL:(NSURL *)url sourceApplication:(nullable NSString*)sourceApplication annotation:(id)annotation;
+ (BOOL)handleWithApplication:(UIApplication *)application openURL:(NSURL *)url options:(nullable NSDictionary<NSString *,id> *)options;

+ (BOOL)isWechatAppInstalled;

+ (BOOL)isWeiboAppInstalled;

+ (BOOL)isQQAppInstalled;

- (BOOL)weiboSSOLoginWithScope:(nullable NSString *)scope
            webViewPresentedIn:(UIViewController *)viewController
                       success:(nullable LTLSUserSuccessBlock)success
                       failure:(nullable LTLSFailureBlock)failure;

- (BOOL)wechatSSOLoginWithScope:(nullable NSString *)scope
                 viewController:(UIViewController *)viewController
                        success:(nullable LTLSUserSuccessBlock)success
                        failure:(nullable LTLSFailureBlock)failure;

- (BOOL)qqSSOLoginWithScope:(nullable NSArray *)scopes
         webViewPresentedIn:(UIViewController *)viewController
                    success:(nullable LTLSUserSuccessBlock)success
                    failure:(nullable LTLSFailureBlock)failure;

- (BOOL)facebookSSOLoginWithWebViewPresentedIn:(UIViewController *)viewController
                                       success:(LTLSUserSuccessBlock)success
                                       failure:(LTLSFailureBlock)failure;

- (BOOL)twitterSSOLoginWithWebViewPresentedIn:(UIViewController *)viewController
                                      success:(LTLSUserSuccessBlock)success
                                      failure:(LTLSFailureBlock)failure;

- (BOOL)googleSSOLoginWithWebViewPresentedIn:(UIViewController *)viewController
                                     success:(LTLSUserSuccessBlock)success
                                     failure:(LTLSFailureBlock)failure;
- (void)googleLogout;

- (void)fbApplicationDidBecomeActive:(UIApplication *)application;

- (void)bindLetvAndThirdWithType:(NSUInteger)thirdType
                       thirdCode:(nullable NSString*)code
                         thirdTK:(nullable NSString*)token
                           ssoTK:(nullable NSString*)ssoToken
                         success:(nullable LTLSSuccessBlock)success
                         failure:(nullable LTLSFailureBlock)failure;

- (void)checkThirdBindLetvWithType:(NSUInteger)thirdType
                         thirdCode:(nullable NSString*)code
                           thirdTK:(nullable NSString*)token
                           success:(nullable LTLSSuccessBlock)success
                           failure:(nullable LTLSFailureBlock)failure;

- (void)fetchThirdPartyTokenWithType:(NSUInteger)thirdType
                           thirdCode:(NSString*)code
                             success:(LTLSSuccessBlock)success
                             failure:(LTLSFailureBlock)failure;

@end



@interface LTLSUserManager (Keychain)

/**
 *  @brief 设置是否开启TouchID快速登录功能
 *
 *  @discussion 默认为开（YES）
 */
+ (void)setTouchIDEnabled:(BOOL)enable;

/**
 *  @author wangyiping1, 15-12-15 16:12:41
 *
 *  @brief 异步请求Keychain中的历史登录记录
 *
 *  @discussion 返回的都是完整且最新的UserModel
 */
- (void)loadKeychainHistoryUserInfoCompletion:(void (^)(NSArray <LTLSLiteUserInKeychain *> *userInfos))completion;

- (void)keychainSaveUser:(LTLSLiteUserInKeychain *)user;

- (void)keychainRemoveUser:(LTUserModel *)user;

- (void)keychainRemoveLiteUser:(LTLSLiteUserInKeychain *)user;

- (void)loginFromKeychain:(LTLSLiteUserInKeychain *)user
                  success:(LTLSSuccessBlock)success
                  failure:(LTLSFailureBlock)failure;


//! 在首次登录成功时，写入keychain的默认token未包含touchid启用标识；在用户选择后，token中加入是否启用标识后重新更新；
//! 所以可以通过token来判断；
//! 如果手机之前不支持touchid，而后升级后支持了，那么在升级后的首次登录成功，也属于上述情况
+ (BOOL)keychainContainTouchIdTagWithUserId:(NSString*)userId;

//! 更新保存在pwd位置对应的数据
+ (void)keychainUpdateUser:(LTLSLiteUserInKeychain*)user;

//! 通过userId从keychain中读出token中是否支持touchid的标识，如果没有是否支持touchid标识，返回@""
+ (NSString*)touchIdTagWithUserId:(NSString*)userId;
@end


NS_ASSUME_NONNULL_END
