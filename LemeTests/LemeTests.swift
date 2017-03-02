//
//  LemeTests.swift
//  LemeTests
//
//  Created by leeco on 2017/2/21.
//  Copyright © 2017年 leeco. All rights reserved.
//

import XCTest
import RxSwift
import RxCocoa
import Moya
import Moya_SwiftyJSONMapper
import SwiftyJSON
import Nimble
import RxNimble

@testable import Leme

class LemeTests: XCTestCase {
    
    var api : RxMoyaProvider<LemeAPI>!
    var disposeBag = DisposeBag()
    override func setUp() {
        super.setUp() //为开始测试准备环境
        api = RxMoyaProvider<LemeAPI>(stubClosure: MoyaProvider.neverStub)
    }
    override func tearDown() {
        super.tearDown()//测试结束释放资源
    }
    
    func testGetSomeData() {
        let e = expectation(description: "GetSomeData Error")
        self.api
            .request(LemeAPI.GetSomeData)
            .map(to: SomeData.self)
            .subscribe(onNext: { (someData) -> Void in
                XCTAssertEqual(someData.login, "http://api.spottly.com/login")
                e.fulfill()
            }, onError: { (error) -> Void in
                print(error)
                XCTFail("Error")
            }).addDisposableTo(self.disposeBag)
        
        waitForExpectations(timeout: 10) { (error) in
            print(error)
        }
    }
    func testGetSomeData2() {
        let subject = Variable("Hi")
        expect(subject) == "Hi"
    }

    func testPerformanceExample() {
        // This is an example of a performance test case.
        self.measure {
            // Put the code you want to measure the time of here.
        }
    }
    
}
/*
 //断言,最基本的测试，如果expression为true则通过，否则打印后面格式化字符串
 XCTAssert(expression, format...)
 
 //Bool测试:
 XCTAssertTrue(expression, format...)
 XCTAssertFalse(expression, format...)
 
 //相等测试
 XCTAssertEqual(expression1, expression2, format...)
 XCTAssertNotEqual(expression1, expression2, format...)
 
 //double float 对比数据测试使用
 XCTAssertEqualWithAccuracy(expression1, expression2, accuracy, format...)
 XCTAssertNotEqualWithAccuracy(expression1, expression2, accuracy, format...)
 
 //Nil测试，XCTAssert[Not]Nil断言判断给定的表达式值是否为nil
 XCTAssertNil(expression, format...)
 XCTAssertNotNil(expression, format...)
 
 //失败断言
 XCTFail(format...)
 */
