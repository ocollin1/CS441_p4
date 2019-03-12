//
//  Jet.m
//  TowerDefense
//
//  Created by Owen Collins on 3/12/19.
//  Copyright © 2019 Owen Collins. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Jet.h"
@implementation Jet

-(id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self)
    {
        
        self.dropTime = rand() % 30;
        self.notHit = true;
        self.dx = 0;
        self.dy = 0;
    }
    
    return self;
}

@end
