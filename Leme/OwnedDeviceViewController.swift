//
//  FirstViewController.swift
//  Leme
//
//  Created by leeco on 2017/2/21.
//  Copyright © 2017年 leeco. All rights reserved.
//

import UIKit
import CWStatusBarNotification
class OwnedDeviceViewController: UICollectionViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let t = "Lauched in \(CFAbsoluteTimeGetCurrent() - MainStartTime) seconds"
     //   CWStatusBarNotification().display(withMessage: t, forDuration: 3)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

