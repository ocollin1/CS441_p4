//
//  Turret.m
//  TowerDefense
//
//  Created by Owen Collins on 3/13/19.
//  Copyright © 2019 Owen Collins. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Turret.h"
@implementation Turret

-(id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self)
    {
        self.reloaded = true;
        self.reloadTime = 5;
    }
    
    return self;
}

@end
