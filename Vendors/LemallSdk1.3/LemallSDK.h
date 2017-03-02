//
//  LemallSDK.h
//  LemallSDK
//
//  Created by letv on 15/7/27.
//  Copyright (c) 2015年 letvshop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// 页面标识定义

// 推荐页
#define PAGE_FLAG_RECOMMENDED @"recommended"

// 分类页
#define PAGE_FLAG_CLASSIFY @"classify"

// 购物车页
#define PAGE_FLAG_SHOPPINGCART @"shoppingcart"

// 用户中心页
#define PAGE_FLAG_USERCENTER  @"usercenter"

// 订单中心页
#define PAGE_FLAG_ORDERCENTER @"ordercenter"

// 商品详情页
#define PAGE_FLAG_PRODUCTDETAIL @"productdetail"

// 订单详情页
#define PAGE_FLAG_ORDERDETAIL @"orderdetail"

// 其他页面
#define PAGE_FLAG_OTHER @"other"

typedef void(^LogInBlock)(BOOL isLogIn);

@interface LemallSDK : NSObject

+ (LemallSDK *)LemallSDK;

/**
 * 初始化sdk
 * appId : 设置应用程序 AppId(必选参数)
 * leEco : 是否为乐视生态内接入 leEco(必选参数)
 */
- (void)initLemallAppID:(NSString *)appId
                  leEco:(BOOL)leEco;


/**
 *  设置sdk页面半屏
 *
 *  @param screen 是否需要设置半屏 默认为NO
 *  @param frame  需要设置半屏时,设置显示高度，默认为屏幕高度
 */
- (void)setLemallSdkScreen:(BOOL)screen screenHeight:(float)height;

/**
 *  设置sdk边看边买
 *
 *  @param uuid 设备唯一标示 使用边看边买必传
 */
- (void)setLemallSdkBuyWhileWatching:(NSString *)uuid;

/**
 * 打开的页面
 * superVC : 打开sdk的 viewcontroller (必选参数)
 * pageFlag :页面标识 (可选参数)
 *leTradeInfo :productId 商品 ID 商品详情页必传 orderId 订单 ID 订单详情页必传 （可选参数）
 * needLogin : 接受登录回调，需要掉起app登录时实现。生态内接入sdk必需实现，非生态内不做处理
 */
- (void)openLemallPage:(UIViewController *)superVC
              pageFlag:(NSString *)pageFlag
           leTradeInfo:(NSDictionary *)tradeInfo
              complete:(LogInBlock)needLogin;
/**
 * 登陆同步
 *userId:用户id
 *ssoToken:用户token
 */
- (void)loginLemallSsoToken:(NSString *)ssoToken;
@end
