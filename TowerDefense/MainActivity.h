//
//  MainActivity.m
//  TowerDefense
//
//  Created by Owen Collins on 3/12/19.
//  Copyright © 2019 Owen Collins. All rights reserved.
//

/*
 #import "ViewController.h"
 
 @interface activityMain : ViewController{
 
 IBOutlet UIImageView *tank;
 IBOutlet UIButton *LeftArrow;
 IBOutlet UIButton *RightArrow;
 IBOutlet UIImageView *ImageView;
 
 
 }
 
 @end
 */

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizerSubclass.h>
//#import "Boulder.h"

NS_ASSUME_NONNULL_BEGIN

@interface MainActivity : UIView
//@property (nonatomic, strong) UIImageView *tank;
@property (nonatomic, weak) IBOutlet UIButton* retButton;
@property float x,y,dx, dy, reloadT, newJ;
@property int timeM, timeS, jetTime;
@property (nonatomic, strong) UIImageView *base;
@property (nonatomic, strong) NSTimer *timer;
@property (nonatomic, strong) NSMutableArray  *turrets, *shots, *jets;
@property (nonatomic) BOOL is_destroyed;
//@property BOOL rotating_l, rotating_r;

//@property (nonatomic, strong) NSMutableArray *boulders;
//- (IBAction)right:(UIButton *)sender;



@end

NS_ASSUME_NONNULL_END
