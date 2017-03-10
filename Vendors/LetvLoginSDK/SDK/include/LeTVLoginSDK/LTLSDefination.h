//
//  LTLSDefination.h
//  LeTVLoginSDK
//
//  Created by 王易平 on 15/12/16.
//  Copyright © 2015年 LeTV. All rights reserved.
//

#ifndef LTLSDefination_h
#define LTLSDefination_h

//是否第一次启动
#define LTLS_LoginSDK_LoginGuide_FirstTimeStart                @"LTLS_LoginSDK_LoginGuide_FirstTimeStart"

/*
 *  (一登)刷脸事件
 */
//通知(sdk)验证手机
#define LTLS_SuperID_VerifyMobile_Notify                @"LTLS_SuperID_VerifyMobile_Notify"
//通知(sdk)授权码
#define LTLS_SuperID_Binding_Notify                     @"LTLS_SuperID_Binding_Notify"
//通知(sdk)检查绑定
#define LTLS_SuperID_CheckBinding_Notify                @"LTLS_SuperID_CheckBinding_Notify"


/*
 * 埋点的key和value值
 */

//1、登录页面

//页面统计
#define LTLS_Statistics_Key_Page_Login_PV         @"page_login_PV"
#define LTLS_Statistics_Value_Page_Login_PV       @"page_login_PV"

//QQ第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_QQ         @"page_login_click_qq"
#define LTLS_Statistics_Value_Page_Login_Click_QQ       @"page_login_click_qq"
//微信第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_Wechat         @"page_login_click_wechat"
#define LTLS_Statistics_Value_Page_Login_Click_Wechat       @"page_login_click_wechat"
//新浪第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_Sina         @"page_login_click_sina"
#define LTLS_Statistics_Value_Page_Login_Click_Sina       @"page_login_click_sina"
//facebook第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_FB       @"page_login_click_facebook"
#define LTLS_Statistics_Value_Page_Login_Click_FB       @"page_login_click_facebook"
//twitter第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_TW         @"page_login_click_twitter"
#define LTLS_Statistics_Value_Page_Login_Click_TW       @"page_login_click_twitter"
//google第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_GG         @"page_login_click_google"
#define LTLS_Statistics_Value_Page_Login_Click_GG       @"page_login_click_google"
//superID刷脸登录点击
#define LTLS_Statistics_Key_Page_Login_Click_SuperID         @"page_login_click_superID"
#define LTLS_Statistics_Value_Page_Login_Click_SuperID       @"page_login_click_superID"
//支付宝第三方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_Alipay         @"page_login_click_alipay"
#define LTLS_Statistics_Value_Page_Login_Click_Alipay       @"page_login_click_alipay"
//帐号密码登录成功
#define LTLS_Statistics_Key_Page_Login_Result_LoginSuccess         @"page_login_result_loginsuccess"
#define LTLS_Statistics_Value_Page_Login_Result_LoginSuccess         @"page_login_result_loginsuccess"

//短信验证码登录点击（快速登录点击）
#define LTLS_Statistics_Key_Page_Login_Click_SMSLogin         @"page_login_click_SMSlogin"
#define LTLS_Statistics_Value_Page_Login_Click_SMSLogin         @"page_login_click_SMSlogin"
//登录点击
#define LTLS_Statistics_Key_Page_Login_Click_Login       @"page_login_click_login"
#define LTLS_Statistics_Value_Page_Login_Click_Login       @"page_login_click_login"
//找回密码点击
#define LTLS_Statistics_Key_Page_Login_Click_ResetPwd       @"page_login_click_resetpassword"
#define LTLS_Statistics_Value_Page_Login_Click_ResetPwd       @"page_login_click_resetpassword"
//立即注册点击
#define LTLS_Statistics_Key_Page_Login_Click_Signup       @"page_login_click_signup"
#define LTLS_Statistics_Value_Page_Login_Click_Signup       @"page_login_click_signup"

//合作方登录点击
#define LTLS_Statistics_Key_Page_Login_Click_Thirdpart       @"page_login_click_thirdpart"
#define LTLS_Statistics_Value_Page_Login_Click_Thirdpart       @"page_login_click_thirdpart"
//QQ第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_QQ      @"page_login_result_qq"
#define LTLS_Statistics_Value_Page_Login_Result_QQ        @"page_login_result_qq"
//微信第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_Wechat      @"page_login_result_wechat"
#define LTLS_Statistics_Value_Page_Login_Result_Wechat       @"page_login_result_wechat"
//新浪第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_Sina      @"page_login_result_sina"
#define LTLS_Statistics_Value_Page_Login_Result_Sina       @"page_login_result_sina"
//刷脸第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_SuperID      @"page_login_result_superID"
#define LTLS_Statistics_Value_Page_Login_Result_SuperID       @"page_login_result_superID"
//Facebook第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_FB      @"page_login_result_facebook"
#define LTLS_Statistics_Value_Page_Login_Result_FB       @"page_login_result_superID"
//Twitter第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_Twitter      @"page_login_result_twitter"
#define LTLS_Statistics_Value_Page_Login_Result_Twitter       @"page_login_result_twitter"
//google第三方登录成功
#define LTLS_Statistics_Key_Page_Login_Result_Google      @"page_login_result_google"
#define LTLS_Statistics_Value_Page_Login_Result_Google      @"page_login_result_google"
//询问touch id 弹窗(iOS)
#define LTLS_Statistics_Key_Page_Login_EnableTouchID       @"page_login_enableTouchID"
#define LTLS_Statistics_Value_Page_Login_EnableTouchID       @"page_login_enableTouchID"
//验证touch id 弹窗(iOS)
#define LTLS_Statistics_Key_Page_Login_CheckTouchID       @"page_login_checkTouchID"
#define LTLS_Statistics_Value_Page_Login_CheckTouchID       @"page_login_checkTouchID"
//启用touchid
#define LTLS_Statistics_Key_Page_Login_EnableTouchID_Enable       @"page_login_enableTouchID_enable"
#define LTLS_Statistics_Value_Page_Login_EnableTouchID_Enable       @"page_login_enableTouchID_enable"
//取消touchid
#define LTLS_Statistics_Key_Page_Login_EnableTouchID_Cancel       @"page_login_enableTouchID_cancel"
#define LTLS_Statistics_Value_Page_Login_EnableTouchID_Cancel       @"page_login_enableTouchID_cancel"
//登录首页图片验证码弹层展示
#define LTLS_Statistics_Key_Page_Login_Captcha      @"page_login_captcha"
#define LTLS_Statistics_Value_Page_Login_Captcha      @"page_login_captcha"
//登录首页图片验证码正确
#define LTLS_Statistics_Key_Page_Login_Result_CaptchaRight     @"page_login_result_captcharight"
#define LTLS_Statistics_Value_Page_Login_Result_CaptchaRight     @"page_login_result_captcharight"
//登录首页图片验证码错误
#define LTLS_Statistics_Key_Page_Login_Result_CaptchaWrong     @"page_login_result_captchawrong"
#define LTLS_Statistics_Value_Page_Login_Result_CaptchaWrong     @"page_login_result_captchawrong"
//登录首页界面关闭按钮点击
#define LTLS_Statistics_Key_Page_Login_Click_Close       @"page_login_click_close"
#define LTLS_Statistics_Value_Page_Login_Click_Close       @"page_login_click_close"
//登录首页帐号密码错误提示次数
#define LTLS_Statistics_Key_Page_Login_Result_Other_(errorCode)     [NSString stringWithFormat:@"page_login_result_other_%@",errorCode]
#define LTLS_Statistics_Value_Page_Login_Result_Other_(errorCode)      [NSString stringWithFormat:@"page_login_result_other_%@",errorCode]

//2、短信验证码登录 - 首页

//页面统计
#define LTLS_Statistics_Key_Page_SMSLogin1_PV         @"page_SMSlogin1_PV"
#define LTLS_Statistics_Value_Page_SMSLogin1_PV       @"page_SMSlogin1_PV"

//下一步点击
#define LTLS_Statistics_Key_Page_SMSLogin1_Click_Nextstep       @"page_SMSlogin1_click_nextstep"
#define LTLS_Statistics_Value_Page_SMSLogin1_Click_Nextstep       @"page_SMSlogin1_click_nextstep"
//国旗点击
#define LTLS_Statistics_Key_Page_SMSLogin1_Click_Flag       @"page_SMSlogin1_click_flag"
#define LTLS_Statistics_Value_Page_SMSLogin1_Click_Flag       @"page_SMSlogin1_click_flag"
//协议点击
#define LTLS_Statistics_Key_Page_SMSLogin1_Click_TNC       @"page_SMSlogin1_click_TNC"
#define LTLS_Statistics_Value_Page_SMSLogin1_Click_TNC       @"page_SMSlogin1_click_TNC"

//SMS登录第一步其他错误提示次数
#define LTLS_Statistics_Key_Page_SMSlogin1_Result_Other_(errorCode)      [NSString stringWithFormat:@"page_SMSlogin1_result_%@",errorCode]
#define LTLS_Statistics_Value_Page_SMSlogin1_Result_Other_(errorCode)      [NSString stringWithFormat:@"page_SMSlogin1_result_%@",errorCode]
//手机号码格式不正确
#define LTLS_Statistics_Key_Page_SMSlogin1_Result_(errorCode)       [NSString stringWithFormat:@"page_SMSlogin1_result_%@",errorCode]
#define LTLS_Statistics_Value_Page_SMSlogin1_Result_(errorCode)      [NSString stringWithFormat:@"page_SMSlogin1_result_%@",errorCode]
//SMS登录第一步返回按钮点击
#define LTLS_Statistics_Key_Page_SMSlogin1_Click_Back      @"page_SMSlogin1_click_back"
#define LTLS_Statistics_Value_Page_SMSlogin1_Click_Back      @"page_SMSlogin1_click_back"
//SMS第一步图片验证码弹层展示
#define LTLS_Statistics_Key_Page_SMSlogin1_Captcha      @"page_SMSlogin1_captcha"
#define LTLS_Statistics_Value_Page_SMSlogin1_Captcha      @"page_SMSlogin1_captcha"
//SMS登录第一步图片验证码正确
#define LTLS_Statistics_Key_Page_SMSlogin1_Result_CaptchaRight     @"page_SMSlogin1_result_captcharight"
#define LTLS_Statistics_Value_Page_SMSlogin1_Result_CaptchaRight     @"page_SMSlogin1_result_captcharight"
//SMS登录第一步图片验证码错误
#define LTLS_Statistics_Key_Page_SMSlogin1_Result_CaptchaWrong     @"page_SMSlogin1_result_captchawrong"
#define LTLS_Statistics_Value_Page_SMSlogin1_Result_CaptchaWrong     @"page_SMSlogin1_result_captchawrong"
//SMS登录第一步验证码下发成功
#define LTLS_Statistics_Key_Page_SMSlogin1_Result_SMSSendSuccess     @"page_SMSlogin1_result_SMSSendSuccess"
#define LTLS_Statistics_Value_Page_SMSlogin1_Result_SMSSendSuccess     @"page_SMSlogin1_result_SMSSendSuccess"

//3、短信验证码登录 - 输入验证码

//页面统计
#define LTLS_Statistics_Key_Page_SMSLogin2_PV         @"page_SMSlogin2_PV"
#define LTLS_Statistics_Value_Page_SMSLogin2_PV       @"page_SMSlogin2_PV"

//重新获取点击
#define LTLS_Statistics_Key_Page_SMSLogin2_Click_Resend       @"page_SMSlogin2_click_resend"
#define LTLS_Statistics_Value_Page_SMSLogin2_Click_Resend       @"page_SMSlogin2_click_resend"
//短信验证码下发成功
#define LTLS_Statistics_Key_Page_SMSLogin2_Result_SMSSendSuccess       @"page_SMSlogin2_result_SMSSendSuccess"
#define LTLS_Statistics_Value_Page_SMSLogin2_Result_SMSSendSuccess       @"page_SMSlogin2_result_SMSSendSuccess"
//短信验证码登录成功
#define LTLS_Statistics_Key_Page_SMSLogin2_Result_LoginSuccess       @"page_SMSlogin2_result_loginsucess"
#define LTLS_Statistics_Value_Page_SMSLogin2_Result_LoginSuccess       @"page_SMSlogin2_result_loginsucess"

//SMS登录第二步自动校验次数
#define LTLS_Statistics_Key_Page_SMSlogin2_Autocheck     @"page_SMSlogin2_autocheck"
#define LTLS_Statistics_Value_Page_SMSlogin2_Autocheck    @"page_SMSlogin2_autocheck"
//SMS登录第二步验证码错误
#define LTLS_Statistics_Key_Page_SMSlogin2_Result_(errorCode)     [NSString stringWithFormat:@"page_SMSlogin2_result_%@",errorCode]
#define LTLS_Statistics_Value_Page_SMSlogin2_Result_(errorCode)    [NSString stringWithFormat:@"page_SMSlogin2_result_%@",errorCode]
//SMS登录第二步返回按钮点击
#define LTLS_Statistics_Key_Page_SMSlogin2_Click_Back      @"page_SMSlogin2_click_back"
#define LTLS_Statistics_Value_Page_SMSlogin2_Click_Back      @"page_SMSlogin2_click_back"
//SMS登录第二步图片验证码弹层展示
#define LTLS_Statistics_Key_Page_SMSlogin2_Captcha     @"page_SMSlogin2_captcha"
#define LTLS_Statistics_Value_Page_SMSlogin2_Captcha    @"page_SMSlogin2_captcha"
//SMS登录第二步图片验证码正确
#define LTLS_Statistics_Key_Page_SMSlogin2_Result_CaptchaRight     @"page_SMSlogin2_result_captcharight"
#define LTLS_Statistics_Value_Page_SMSlogin2_Result_CaptchaRight    @"page_SMSlogin2_result_captcharight"
//SMS登录第二步图片验证码错误
#define LTLS_Statistics_Key_Page_SMSlogin2_Result_CaptchaWrong     @"page_SMSlogin2_result_captchawrong"
#define LTLS_Statistics_Value_Page_SMSlogin2_Result_CaptchaWrong     @"page_SMSlogin2_result_captchawrong"

//4、注册流程 - 首页

//页面统计
#define LTLS_Statistics_Key_Page_Signup1_PV         @"page_Signup1_PV"
#define LTLS_Statistics_Value_Page_Signup1_PV       @"page_Signup1_PV"

//国旗点击
#define LTLS_Statistics_Key_Page_Signup1_Click_Flag       @"page_Signup1_click_flag"
#define LTLS_Statistics_Value_Page_Signup1_Click_Flag       @"page_Signup1_click_flag"
//协议点击
#define LTLS_Statistics_Key_Page_Signup1_Click_TNC       @"page_Signup1_click_TNC"
#define LTLS_Statistics_Value_Page_Signup1_Click_TNC       @"page_Signup1_click_TNC"
//下一步点击
#define LTLS_Statistics_Key_Page_Signup1_Click_Nextstep       @"page_Signup1_click_nextstep"
#define LTLS_Statistics_Value_Page_Signup1_Click_Nextstep       @"page_Signup1_click_nextstep"
//短信注册点击
#define LTLS_Statistics_Key_Page_Signup1_Click_SMSSignup       @"page_Signup1_click_SMSsignup"
#define LTLS_Statistics_Value_Page_Signup1_Click_SMSSignup       @"page_Signup1_click_SMSsignup"
//手机号已注册
#define LTLS_Statistics_Key_Page_Signup1_Result_PhoneExist       @"page_Signup1_result_phoneexist"
#define LTLS_Statistics_Value_Page_Signup1_Result_PhoneExist       @"page_Signup1_result_phoneexist"
//手机号码格式不正确
#define LTLS_Statistics_Key_Page_Signup1_Result_phonewrong       @"page_Signup1_result_phonewrong"
#define LTLS_Statistics_Value_Page_Signup1_Result_phonewrong       @"page_Signup1_result_phonewrong"

//注册第一步其他错误提示次数
#define LTLS_Statistics_Key_Page_Signup1_Result_Other_(errorCode)     [NSString stringWithFormat:@"page_Signup1_result_other_%@",errorCode]
#define LTLS_Statistics_Value_Page_Signup1_Result_Other_(errorCode)      [NSString stringWithFormat:@"page_Signup1_result_other_%@",errorCode]
//注册第一步返回按钮点击
#define LTLS_Statistics_Key_Page_Signup1_Click_Back      @"page_Signup1_click_back"
#define LTLS_Statistics_Value_Page_Signup1_Click_Back      @"page_Signup1_click_back"

//5、注册流程 - 输入密码
//页面统计
#define LTLS_Statistics_Key_Page_Signup2_PV         @"page_Signup2_PV"
#define LTLS_Statistics_Value_Page_Signup2_PV       @"page_Signup2_PV"
//下一步点击
#define LTLS_Statistics_Key_Page_Signup2_Click_Nextstep       @"page_Signup2_click_nextstep"
#define LTLS_Statistics_Value_Page_Signup2_Click_Nextstep       @"page_Signup2_click_nextstep"
//短信验证码下发成功
#define LTLS_Statistics_Key_Page_Signup2_Result_SMSSendSuccess       @"page_Signup2_result_SMSSendSuccess"
#define LTLS_Statistics_Value_Page_Signup2_Result_SMSSendSuccess       @"page_Signup2_result_SMSSendSuccess"
//邮件验证码下发成功
#define LTLS_Statistics_Key_Page_Signup2_Result_EmailSendSuccess       @"page_Signup2_result_EmailSendSuccess"
#define LTLS_Statistics_Value_Page_Signup2_Result_EmailSendSuccess       @"page_Signup2_result_EmailSendSuccess"

//注册第二步返回按钮点击
#define LTLS_Statistics_Key_Page_Signup2_Click_Back      @"page_Signup2_click_back"
#define LTLS_Statistics_Value_Page_Signup2_Click_Back      @"page_Signup2_click_back"
//注册第二步图片验证码弹层展示
#define LTLS_Statistics_Key_Page_Signup2_Captcha      @"page_Signup2_captcha"
#define LTLS_Statistics_Value_Page_Signup2_Captcha      @"page_Signup2_captcha"
//注册第二步图片验证码正确
#define LTLS_Statistics_Key_Page_Signup2_Result_CaptchaRight     @"page_Signup2_result_captcharight"
#define LTLS_Statistics_Value_Page_Signup2_Result_CaptchaRight     @"page_Signup2_result_captcharight"
//注册第二步图片验证码错误
#define LTLS_Statistics_Key_Page_Signup2_Result_CaptchaWrong     @"page_Signup2_result_captchawrong"
#define LTLS_Statistics_Value_Page_Signup2_Result_CaptchaWrong     @"page_Signup2_result_captchawrong"

//6、注册流程 - 输入验证码
//页面统计
#define LTLS_Statistics_Key_Page_Signup3_PV         @"page_Signup3_PV"
#define LTLS_Statistics_Value_Page_Signup3_PV       @"page_Signup3_PV"
//重新获取点击
#define LTLS_Statistics_Key_Page_Signup3_Click_Resend       @"page_Signup3_click_resend"
#define LTLS_Statistics_Value_Page_Signup3_Click_Resend       @"page_Signup3_click_resend"
//短信验证码下发成功
#define LTLS_Statistics_Key_Page_Signup3_Result_SMSSendSuccess       @"page_Signup3_result_SMSSendSuccess"
#define LTLS_Statistics_Value_Page_Signup3_Result_SMSSendSuccess       @"page_Signup3_result_SMSSendSuccess"
//邮件验证码下发成功
#define LTLS_Statistics_Key_Page_Signup3_Result_EmailSendSuccess       @"page_Signup3_result_EmailSendSuccess"
#define LTLS_Statistics_Value_Page_Signup3_Result_EmailSendSuccess       @"page_Signup3_result_EmailSendSuccess"

//注册成功
#define LTLS_Statistics_Key_Page_Signup3_Result_SignupSuccess       @"page_Signup3_result_SignupSuccess"
#define LTLS_Statistics_Value_Page_Signup3_Result_SignupSuccess       @"page_Signup3_result_SignupSuccess"

//注册第三步自动校验次数
#define LTLS_Statistics_Key_Page_Signup3_Autocheck     @"page_Signup3_autocheck"
#define LTLS_Statistics_Value_Page_Signup3_Autocheck    @"page_Signup3_autocheck"
//注册第三步验证码错误
#define LTLS_Statistics_Key_Page_Signup3_Result_(errorCode)     [NSString stringWithFormat:@"page_Signup3_result_%@",errorCode]
#define LTLS_Statistics_Value_Page_Signup3_Result_(errorCode)    [NSString stringWithFormat:@"page_Signup3_result_%@",errorCode]
//注册第三步返回按钮点击
#define LTLS_Statistics_Key_Page_Signup3_Click_Back      @"page_Signup3_click_back"
#define LTLS_Statistics_Value_Page_Signup3_Click_Back      @"page_Signup3_click_back"
//注册第三步图片验证码弹层展示
#define LTLS_Statistics_Key_Page_Signup3_Captcha      @"page_Signup3_captcha"
#define LTLS_Statistics_Value_Page_Signup3_Captcha      @"page_Signup3_captcha"
//注册第三步图片验证码正确
#define LTLS_Statistics_Key_Page_Signup3_Result_CaptchaRight     @"page_Signup3_result_captcharight"
#define LTLS_Statistics_Value_Page_Signup3_Result_CaptchaRight     @"page_Signup3_result_captcharight"
//注册第三步图片验证码错误
#define LTLS_Statistics_Key_Page_Signup3_Result_CaptchaWrong     @"page_Signup3_result_captchawrong"
#define LTLS_Statistics_Value_Page_Signup3_Result_CaptchaWrong     @"page_Signup3_result_captchawrong"

//7、个人信息页面
//页面统计
#define LTLS_Statistics_Key_Page_UserInfo_PV         @"page_userinfo_PV"
#define LTLS_Statistics_Value_Page_UserInfo_PV       @"page_userinfo_PV"
//退出登录点击（dialog里确认按钮）
#define LTLS_Statistics_Key_Page_UserInfo_Click_Signout       @"page_userinfo_click_Signout"
#define LTLS_Statistics_Value_Page_UserInfo_Click_Signout       @"page_userinfo_click_Signout"
//修改密码点击
#define LTLS_Statistics_Key_Page_UserInfo_Click_ResetPwd       @"page_userinfo_click_ResetPassword"
#define LTLS_Statistics_Value_Page_UserInfo_Click_ResetPwd       @"page_userinfo_click_ResetPassword"
//修改昵称点击
#define LTLS_Statistics_Key_Page_UserInfo_Click_Nick      @"page_userinfo_click_Nickname"
#define LTLS_Statistics_Value_Page_UserInfo_Click_Nick       @"page_userinfo_click_Nickname"

//8、登录态共享页面
//页面统计
#define LTLS_Statistics_Key_Page_Share_PV         @"page_share_PV"
#define LTLS_Statistics_Value_Page_Share_PV       @"page_share_PV"
//账号点击
#define LTLS_Statistics_Key_Page_Share_Click_Login      @"page_share_click_login"
#define LTLS_Statistics_Value_Page_Share_Click_Login       @"page_share_click_login"
//登录成功
#define LTLS_Statistics_Key_Page_Share_Result_LoginSuccess      @"page_share_result_LoginSucces"
#define LTLS_Statistics_Value_Page_Share_Result_LoginSuccess       @"page_share_result_LoginSucces"

//9.二次验证登录页面
//页面统计
#define LTLS_Statistics_Key_Page_Recheck_PV         @"page_recheck_PV"
#define LTLS_Statistics_Value_Page_Recheck_PV       @"page_recheck_PV"
//返回按钮点击
#define LTLS_Statistics_Key_Page_Recheck_Click_Back         @"page_recheck_click_back"
#define LTLS_Statistics_Value_Page_Recheck_Click_Back       @"page_recheck_click_back"
//二次验证登录界面下一步
#define LTLS_Statistics_Key_Page_Recheck_Click_Nextstep         @"page_recheck_click_nextstep"
#define LTLS_Statistics_Value_Page_Recheck_Click_Nextstep       @"page_recheck_click_nextstep"
//二次验证登录成功
#define LTLS_Statistics_Key_Page_Recheck_Result_Success       @"page_recheck_result_success"
#define LTLS_Statistics_Value_Page_Recheck_Result_Success       @"page_recheck_result_success"
//二次验证登录失败
#define LTLS_Statistics_Key_Page_Recheck_Result_Fail       @"page_recheck_result_fail"
#define LTLS_Statistics_Value_Page_Recheck_Result_Fail       @"page_recheck_result_fail"
//10.绑定手机界面
//页面统计
#define LTLS_Statistics_Key_Page_BindPhone_PV       @"page_bindphone_PV"
#define LTLS_Statistics_Value_Page_BindPhone_PV       @"page_bindphone_PV"
//绑定成功
#define LTLS_Statistics_Key_Page_BindPhone_Result_Success       @"page_bindphone_result_success"
#define LTLS_Statistics_Value_Page_BindPhone_Result_Success       @"page_bindphone_result_success"
//绑定失败
#define LTLS_Statistics_Key_Page_BindPhone_Result_Fail       @"page_bindphone_result_fail"
#define LTLS_Statistics_Value_Page_BindPhone_Result_Fail       @"page_bindphone_result_fail"

typedef NS_OPTIONS(NSUInteger, LTLSLogType) {
    LTLSLogTypeUndefined = 0,
    LTLSLogTypeNone = 1 << 0,
    LTLSLogTypeInfo = 1 << 1,
    LTLSLogTypeWarning = 1 << 2,
    LTLSLogTypeError = 1 << 3,
};

/**
 *  @author wangyiping1, 16-01-15 14:01:55
 *
 *  @brief Toast显示开关
 */
typedef NS_OPTIONS(NSUInteger, LTLSToastType) {
    /**
     *  全关
     */
    LTLSToastTypeNone = 0,
    /**
     *  正确提示信息（eg：登录成功、注册成功）
     */
    LTLSToastTypeInfo = 1 << 0,
    /**
     *  客户端生成的错误提示（eg：请输入验证码）
     */
    LTLSToastTypeWarning = 1 << 1,
    /**
     *  服务器生成的错误提示（eg：用户名或密码错误）
     */
    LTLSToastTypeError = 1 << 2,
};

/**
 *  @author wangyiping1, 15-12-08 10:12:48
 *
 *  @brief  验证码操作
 */
typedef NS_ENUM(NSUInteger, LTLSSMSAction) {
    /**
     *  @author wangyiping1, 15-12-08 10:12:48
     *
     *  @brief  注册
     */
    LTLSSMSActionReg,
    /**
     *  @author wangyiping1, 15-12-08 10:12:56
     *
     *  @brief  重置密码
     */
    LTLSSMSActionResetPassword,
    /**
     *  @author wangyiping1, 15-12-08 10:12:02
     *
     *  @brief  帐号绑定
     */
    LTLSSMSActionBing,
    /**
     *  @author wangyiping1, 15-12-08 10:12:08
     *
     *  @brief  快速登录注册
     */
    LTLSSMSActionShortLoginReg,
    //激活码
    LTLSSMSActionSendCode,
    
};

/*
 *  @brief  邮箱验证码   v2.4 added
 */
typedef NS_ENUM(NSUInteger, LTLSEmailAction) {
    //注册 -- 目前邮箱就这一个
    LTLSEmailActionReg,
};

/*
 * @brief  根vc的展示样式
 */
typedef NS_ENUM(NSUInteger, LTLSRootControllerPresentationType) {
    // 默认样式
    LTLSRootControllerPresentationType_Default,
    // 根vc不展示关闭按钮
    LTLSRootControllerPresentationType_CloseButtonHidden,
};

/**
 帐号绑定类型
 */
typedef NS_ENUM(NSInteger, LTLSBindingAccountType) {
    //不绑定
    LTLSBindingAccountType_Default = 0,
    //不强制绑定
    LTLSBindingAccountType_NotForce = 1,
    //强制绑定
    LTLSBindingAccountType_Force = 2,
};

#endif /* LTLSDefination_h */
