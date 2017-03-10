//
//  LTLSCommonFlowMobileFill.h
//  LeTVLoginSDK
//
//  Created by xuliang on 16/4/20.
//  Copyright © 2016年 王易平. All rights reserved.
//

#import "LTLSBaseViewController.h"
#import "LTLSCommonFlowConstant.h"
#import "LTLSDefination.h"

@interface LTLSCommonFlowMobileFill : LTLSBaseViewController

@property (nonatomic, assign) LTLSCommonFlowType                            bizType;
@property (nonatomic, assign) LTLSRootControllerPresentationType            presentationType;

/**
 *  @brief  初始化对象
 *  @param  type 入口类型（登录or注册）
 *  @param  presentationType    根vc展示方式（是否隐藏close按钮）
 **/
- (instancetype)initFromNibWithType:(LTLSCommonFlowType)type PresentationType:(LTLSRootControllerPresentationType)presentationType;

/*
 *
 */
- (void)fillDefaultPhone:(NSString*)phone;

/*
 *  @brief  新增展示vc的方法
 *  @param  type    入口类型（登录or注册）
 *  @param  presentationType    根vc展示方式（是否隐藏close按钮）
 *  @param  fromViewController  模态vc
 */
+ (instancetype)presentViewControllerWithType:(LTLSCommonFlowType)type PresentationType:(LTLSRootControllerPresentationType)presentationType From:(UIViewController *)fromViewController;

@end
