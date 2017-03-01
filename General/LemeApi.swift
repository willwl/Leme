//
//  LemeApi.swift
//  Leme
//
//  Created by leeco on 2017/2/28.
//  Copyright © 2017年 leeco. All rights reserved.
//

import Foundation

import Moya
import Moya_SwiftyJSONMapper
import SwiftyJSON

let LemeProvider = RxMoyaProvider<LemeAPI>(stubClosure: MoyaProvider.immediatelyStub)

enum LemeAPI {
    case GetSomeData
    case GetArray
}

extension LemeAPI: JSONMappableTargetType {
    var baseURL: URL { return URL(string: "http://api.spottly.com")! }
    var path: String {
        switch self {
        case .GetSomeData:
            return "/index"
        case .GetArray:
            return "/index"
        }
    }
    var method: Moya.Method {
        return .get
    }
    var parameters: [String: Any]? {
        return nil
    }
    var sampleData: Data {
        switch self {
        case .GetSomeData:
            return stubbedResponseFromJSONFile(filename: "object_response")
        case .GetArray:
            return stubbedResponseFromJSONFile(filename: "array_response")
        }
    }
    var responseType: ALSwiftyJSONAble.Type {
        switch self {
        case .GetSomeData:
            return SomeData.self
        case .GetArray:
            return SomeData.self
        }
    }
    var multipartBody: [MultipartFormData]? {
        return nil
    }
    var task: Task {
        return Task.request
    }
    var parameterEncoding: ParameterEncoding {
        return URLEncoding.default
    }
    
}
protocol JSONMappableTargetType: TargetType {
    var responseType: ALSwiftyJSONAble.Type { get }
}


private func stubbedResponseFromJSONFile(filename: String, inDirectory subpath: String = "", bundle:Bundle = Bundle.main ) -> Data {
    guard let path = bundle.path(forResource: filename, ofType: "json", inDirectory: subpath) else { return Data() }
    
    if let dataString = try? String(contentsOfFile: path), let data = dataString.data(using: String.Encoding.utf8){
        return data
    } else {
        return Data()
    }
}
 
/*
extension RxMoyaProvider {
    func tryUseOfflineCacheThenRequest(token: Target) -> Observable<Moya.Response> {
        return Observable.create { [weak self] observer -> Disposable in
            let key = token.cacheKey // 缓存 Key，可以根据自己的需求来写，这里采用的是 BaseURL + Path + Parameter转化为JSON字符串
            
            // 先读取缓存内容，有则发出一个信号（onNext），没有则跳过
            if let response = HSURLCache.sharedInstance.cachedResponseForKey(key) {
                observer.onNext(response)
            }
            
            // 发出真正的网络请求
            let cancelableToken = self?.request(token) { result in
                switch result {
                case let .Success(response):
                    observer.onNext(response)
                    observer.onCompleted()
                    
                    HSURLCache.sharedInstance.cacheResponse(response, forKey: key)
                case let .Failure(error):
                    observer.onError(error)
                }
            }
            
            return AnonymousDisposable {
                cancelableToken?.cancel()
            }
        }
    }
}
*/
