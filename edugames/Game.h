//
//  Game.h
//  edugames
//
//  Created by Gregory Rose on 2/15/14.
//  Copyright (c) 2014 Angela Zhang, Lucy Guo, Ivan Wang, Gregory Rose. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Firebase/Firebase.h>
#import "ConquerViewController.h"

#define firebaseURL @"https://edugames.firebaseio.com/"

@interface Game : NSObject

@property (nonatomic, strong) Firebase *firebase;

- (id) initWithKey:(NSString *)key andController:(ConquerViewController*)cvc;

@end
