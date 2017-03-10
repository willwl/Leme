//
//  LTLSLoginViewController.h
//  LeTVLoginSDK_iOS
//
//  Created by 王易平 on 15/12/2.
//  Copyright © 2015年 LeTV. All rights reserved.
//

#import "LTLSBaseViewController.h"
#import "LTLSDefination.h"

@interface LTLSLoginViewController : LTLSBaseViewController

@property (nonatomic, assign) LTLSRootControllerPresentationType            presentationType;

/*
 *  @brief  新增展示vc的方法
 *  @param  presentationType    根vc展示方式（是否隐藏close按钮）
 *  @param  fromViewController  模态vc
 */
+ (instancetype)presentViewControllerWithPresentationType:(LTLSRootControllerPresentationType)presentationType From:(UIViewController *)fromViewController;

@end
