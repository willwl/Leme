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
        
    }
    @IBAction func gogogo(_ sender: Any) {
        
        LemallHelper
            .lemallSDK()
            .openLemallPage(self,
                            pageFlag: PAGE_FLAG_RECOMMENDED,
                            leTradeInfo: nil)
            { (result) in
                print("result \(result)")
        }
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
       /*
        let root = (UIApplication.shared.delegate as! AppDelegate).window?.rootViewController
        DispatchQueue.global().async {
            DispatchQueue.main.async {
        }
 */

    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

