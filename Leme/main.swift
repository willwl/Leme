//
//  main.swift
//  main
//
//  Created by leeco on 2017/2/21.
//  Copyright © 2017年 leeco. All rights reserved.
//

import Foundation
import UIKit

let MainStartTime = CFAbsoluteTimeGetCurrent()
UIApplicationMain(CommandLine.argc,
                  UnsafeMutableRawPointer(CommandLine.unsafeArgv).bindMemory(to: UnsafeMutablePointer<Int8>.self, capacity: Int(CommandLine.argc)),
                  nil,
                  NSStringFromClass(AppDelegate.self))
