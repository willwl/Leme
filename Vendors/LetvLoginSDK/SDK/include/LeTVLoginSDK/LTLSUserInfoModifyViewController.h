//
//  LTLSUserInfoModifyViewController.h
//  LeTVLoginSDK
//
//  Created by liuhai on 15/12/15.
//  Copyright © 2015年 LeTV. All rights reserved.
//

#import "LTLSBaseViewController.h"

@interface LTLSUserInfoModifyViewController : LTLSBaseViewController
@property (nonatomic, assign) BOOL showSkip;

- (instancetype)initWithType:(BOOL)showSkip;

@end
