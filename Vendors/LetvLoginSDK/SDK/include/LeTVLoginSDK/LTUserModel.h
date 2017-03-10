//
//  LTUserModel.h
//  LeTVLoginSDK
//
//  Created by 王易平 on 15/12/3.
//  Copyright © 2015年 LeTV. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LTUserGender) {
    LTUserGenderNone,
    LTUserGenderMale,
    LTUserGenderFemale,
};

@interface LTUserModel : NSObject <NSCoding>

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, assign) LTUserGender gender;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, strong) NSDate *birthday;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *education;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *income;
@property (nonatomic, copy) NSString *industry;
@property (nonatomic, assign) BOOL isIdentify;
@property (nonatomic, copy) NSString *job;
@property (nonatomic, copy) NSString *mobile;
@property (nonatomic, copy) NSString *msn;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *picture;
@property (nonatomic, copy) NSString *avatar300;
@property (nonatomic, copy) NSString *avatar200;
@property (nonatomic, copy) NSString *avatar70;
@property (nonatomic, copy) NSString *avatar50;
@property (nonatomic, copy) NSString *postCode;
@property (nonatomic, copy) NSString *province;
@property (nonatomic, copy) NSString *qq;

@property (nonatomic, copy) NSString *ssoToken;
@property (nonatomic, copy) NSString *tvToken;
@property (nonatomic, strong) NSDictionary *userConnect;

- (BOOL)isThirdParty;
- (BOOL)canEditPassword;

@end


//这个类后台给得跟LTLSCountryCodeModel高度雷同
@interface LTLSCountryInfoModel : NSObject

@property (nonatomic, copy) NSString *countryId;
@property (nonatomic, copy) NSString *countryName;
@property (nonatomic, copy) NSString *countryCode;
@property(nonatomic, copy)  NSString *sso_url;

@end

@interface LTLSCountryCodeModel : NSObject

@property (nonatomic, copy) NSString *countryName;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *countryFlag;
@property (nonatomic, copy) NSString *countryId;
@property(nonatomic, copy)  NSString *sso_url;

@end

@interface LTLSContinentCountryCodeModel : NSObject

@property (nonatomic,copy) NSString     *continetName;
@property (nonatomic, strong) NSArray   *countries;

@end

@interface LTLSRegionModel : NSObject

@property (nonatomic, copy) NSString        *province;
@property (nonatomic, strong) NSArray       *cities;

@end

@interface LTLSLiteUserInKeychain : NSObject

@property(nonatomic,copy) NSString                      *uid;
@property(nonatomic,copy) NSString                      *userName;
@property(nonatomic,copy) NSString                      *nickName;
@property(nonatomic,copy) NSString                      *mobile;
@property(nonatomic,copy) NSString                      *email;
@property(nonatomic,copy) NSString                      *token;
@property(nonatomic,copy) NSString                      *touchIdTag;

//! 通过字典初始化
- (id)initWithDictionary:(NSDictionary*)dic;

//！将对象转为字典
- (NSDictionary*)returnDictionary;

//! 从LTUserModel构造LTLSLiteUserInKeychain对象
- (id)initWithLTUserModel:(LTUserModel*)userModel;
@end

