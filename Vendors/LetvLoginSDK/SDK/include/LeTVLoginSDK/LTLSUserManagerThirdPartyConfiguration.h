//
//  LTLSUserManagerThirdPartyConfiguration.h
//  LeTVLoginSDK
//
//  Created by 王易平 on 16/10/31.
//  Copyright © 2016年 王易平. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LTLSUserManagerThirdPartyConfiguration : NSObject

@property (nonatomic, assign) BOOL useThirdpartyLogin;

@property (nonatomic, copy) NSString *weiboAppKey;
@property (nonatomic, copy) NSString *weiboRedirectURI;

@property (nonatomic, copy) NSString *wechatAppKey;
@property (nonatomic, copy) NSString *wechatAppSecret;

@property (nonatomic, copy) NSString *qqAppKey;

@property (nonatomic, copy) NSString *facebookAppID;
@property (nonatomic, copy) NSString *facebookAppName;

@property (nonatomic, copy) NSString *twitterConsumerKey;
@property (nonatomic, copy) NSString *twitterConsumerSecret;

@property (nonatomic, copy) NSString *googleClientID;

@property (nonatomic, copy) NSString *superIDAppID;
@property (nonatomic, copy) NSString *superIDAppSecret;
@property (nonatomic, copy) NSString *superIDSignToken;

@end
