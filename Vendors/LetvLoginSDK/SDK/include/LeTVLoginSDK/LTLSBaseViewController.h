//
//  LTLSBaseViewController.h
//  LeTVLoginSDK_iOS
//
//  Created by 王易平 on 15/12/2.
//  Copyright © 2015年 LeTV. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^dismissBlock)(void);

@class LTLSBaseViewModel;

@interface LTLSBaseViewController : UIViewController

@property (nonatomic, strong) __kindof LTLSBaseViewModel *viewModel;
@property (nonatomic, copy) dismissBlock   completion;

- (instancetype)initWithNib;

- (void)dismissSelf;

- (void)dismissSelfByUser;

- (void)popSelf;

- (void)popSelfByUser;

+ (instancetype)presentViewControllerFrom:(UIViewController *)fromViewController;

@end
