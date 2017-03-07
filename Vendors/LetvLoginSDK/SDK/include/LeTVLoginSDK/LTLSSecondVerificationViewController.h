//
//  LTLSSecondVerificationViewController.h
//  LeTVLoginSDK
//
//  Created by wangyanjie on 16/11/1.
//  Copyright © 2016年 王易平. All rights reserved.
//

#import "LTLSBaseViewController.h"
#import "LTLSDefination.h"

@interface LTLSSecondVerificationViewController : LTLSBaseViewController

@property (nonatomic, assign) LTLSRootControllerPresentationType            presentationType;

/*
 *  @brief  新增展示vc的方法
 *  @param  presentationType    根vc展示方式（是否隐藏close按钮）
 *  @param  fromViewController  模态vc
 */
+ (instancetype)presentViewControllerWithPresentationType:(LTLSRootControllerPresentationType)presentationType From:(UIViewController *)fromViewController;

@end
