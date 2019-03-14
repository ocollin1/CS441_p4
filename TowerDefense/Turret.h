//
//  Turret.h
//  TowerDefense
//
//  Created by Owen Collins on 3/13/19.
//  Copyright © 2019 Owen Collins. All rights reserved.
//

#ifndef Turret_h
#define Turret_h

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Turret : UIImageView

@property (nonatomic) float x, y;
@property (nonatomic) float angle;
@property (nonatomic) int reloadTime;
@property (nonatomic) bool reloaded;
@end

NS_ASSUME_NONNULL_END

#endif /* Turret_h */
