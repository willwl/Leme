//
//  AppDelegate.swift
//  Leme
//
//  Created by leeco on 2017/2/21.
//  Copyright © 2017年 leeco. All rights reserved.
//

import UIKit
import RxSwift
import RxCocoa
//import Alamofire

//@UIApplicationMain

class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
        self.configureThirdSDKs(application: application ,launchOptions:launchOptions)
        
        return true
    }

    func configureThirdSDKs(application: UIApplication, launchOptions: [UIApplicationLaunchOptionsKey: Any]?){
        LemallHelper
            .lemallSDK()
            .initLemallAppID("0c7156617fcd3fcde70f01dddf80f231", leEco: true)
        
        let conf = LTLSUserManagerConfiguration()
        conf.logType = [LTLSLogType.error,LTLSLogType.info,LTLSLogType.warning]
        conf.toastType = [LTLSToastType.error,LTLSToastType.info,LTLSToastType.warning]
        conf.plagform = "test_p";
        conf.language = "zh-cn"
        conf.region = "CN"
        let thirdConf = LTLSUserManagerThirdPartyConfiguration()
        thirdConf.qqAppKey = "1105038523"
        thirdConf.wechatAppKey = "wxe84a6523779f18de";
        thirdConf.wechatAppSecret = "1a944b307ecca5d6d4dffaf901948be9";
        conf.thirdPartyConfig = thirdConf
        LTLSUserManager.register(with: conf, application: application, launchOption: (launchOptions ?? [:]))

    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
    }

    func applicationDidEnterBackground(_ application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }

    func applicationWillEnterForeground(_ application: UIApplication) {
        // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    }

    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }


}

