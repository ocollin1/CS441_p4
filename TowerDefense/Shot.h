//
//  Shot.h
//  TowerDefense
//
//  Created by Owen Collins on 3/11/19.
//  Copyright © 2019 Owen Collins. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Shot : UIImageView

@property (nonatomic) float x, y;
@property (nonatomic) float dx, dy;
@property (nonatomic) float angle;
@property (nonatomic) BOOL is_bomb;
@end

NS_ASSUME_NONNULL_END
