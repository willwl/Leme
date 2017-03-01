//
//  GetResponse.swift
//  Moya-SwiftyJSONMapper
//
//  Created by Antoine van der Lee on 26/01/16.
//  Copyright © 2016 CocoaPods. All rights reserved.
//

import Foundation

import Moya_SwiftyJSONMapper
import SwiftyJSON

struct SomeData:ALSwiftyJSONAble {
    let login:String
    let me:String
    init?(jsonData:JSON){
        self.login = jsonData["login"].stringValue
        self.me = jsonData["me"].stringValue
    }
}

extension SomeData : CustomStringConvertible {
    var description: String {
        return "[SomeData] : \n" + "login :" + self.login + " \n"
                + "me :" + self.me
    }
}

