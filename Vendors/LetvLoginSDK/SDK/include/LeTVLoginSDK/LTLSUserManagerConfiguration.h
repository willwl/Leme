//
//  LTLSUserManagerConfiguration.h
//  LeTVLoginSDK
//
//  Created by 王易平 on 16/10/31.
//  Copyright © 2016年 王易平. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LTLSUserManagerThirdPartyConfiguration.h"
#import "LTLSDefination.h"

@interface LTLSUserManagerConfiguration : NSObject

@property (nonatomic, copy) NSString *plagform;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *language;

@property (nonatomic, strong) LTLSUserManagerThirdPartyConfiguration *thirdPartyConfig;

@property (nonatomic, strong) UIImage *logoImageCHS;
@property (nonatomic, strong) UIImage *logoImageCHT;
@property (nonatomic, strong) UIImage *logoImageEN;

@property (nonatomic, assign) LTLSLogType logType;
@property (nonatomic, assign) LTLSToastType toastType;

@property (nonatomic, assign) BOOL touchIDEnabled;
/*
 * @breif 第三方登录是否强制绑定手机号
 */
@property (nonatomic, assign) LTLSBindingAccountType bindType;

@end
