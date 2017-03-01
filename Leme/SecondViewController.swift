//
//  SecondViewController.swift
//  Leme
//
//  Created by leeco on 2017/2/21.
//  Copyright © 2017年 leeco. All rights reserved.
//

import UIKit

class SecondViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
//        DispatchQueue.global().async {
//            DispatchQueue.main.async {
//                }
//            }
//        }
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        let root = (UIApplication.shared.delegate as! AppDelegate).window?.rootViewController

//        LemallHelper
//            .lemallSDK()
//            .openLemallPage(root, pageFlag: "PAGE_FLAG_RECOMMENDED", leTradeInfo: nil) { (result) in
//                print("result \(result)")
//        }
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

