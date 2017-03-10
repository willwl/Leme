#ifndef AGNES_H_
#define AGNES_H_

#import <Foundation/Foundation.h>
#import "AGS_Enums.h"
#import "AGS_Event.h"
#import "AGS_Widget.h"
#import "AGS_App.h"
#import "AGS_MusicPlay.h"
#import "AGS_VideoPlay.h"

@interface Agnes : NSObject
-(void)dealloc;
//
+(id)sharedAgnes:(Area)areas;
+(id)sharedAgnes;
//
-(void)reportEvt:(AGS_Event*)ev;
-(void)reportApp:(AGS_App*)ap;
-(void)reportWgt:(AGS_Widget*)wgt;
-(void)reportMplay:(AGS_MusicPlay*)mp;
-(void)reportVplay:(AGS_VideoPlay*)vp;

-(AGS_App*)getAppwithStr:(NSString*)papp;
-(AGS_App*)getAppwithAEnum:(AppEnum)papp;
-(AGS_App*)getAppwithLEnum:(LeUIApp)papp;

-(void)setAppKeyWithStr:(NSString *)appid andVersion:(NSString*)version;
-(void)setAppKeyWithAEnum:(AppEnum)appid andVersion:(NSString*)version;

@end


#endif













