//
//  SpritePlayer.h
//  Sprite
//
//  Created by Rinc Liu on 28/8/2018.
//  Copyright © 2018 RINC. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SpriteView.h"

@protocol SpritePlayerDelegate<NSObject>
@optional
-(void)onSproitePlayerStarted;
@optional
-(void)onSproitePlayerPaused;
@optional
-(void)onSproitePlayerResumed;
@optional
-(void)onSproitePlayerStopped;
@end

@interface SpritePlayer : NSObject

@property(nonatomic,weak) id<SpritePlayerDelegate> delegate;

-(instancetype)initWithSpriteView:(SpriteView*)spriteView;

-(void)playResource:(NSString*)resource;

-(void)onPause;

-(void)onResume;

-(void)onDestroy;

@end