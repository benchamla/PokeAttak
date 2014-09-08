//
//  GameViewController.h
//  PokeAttak
//
//  Created by ben on 25/07/2014.
//  Copyright (c) 2014 Ben Chamla. All rights reserved.
//

#import <UIKit/UIKit.h>

int ShipMovement;
int BulletMovement;
int BulletOnScreen;
int MonstersKilled;
int MonsterMovement;
int PoopMovement;
BOOL Monster1Hit;
BOOL Monster2Hit;
BOOL Monster3Hit;
BOOL Monster4Hit;
BOOL Monster5Hit;
BOOL Monster6Hit;
BOOL Monster7Hit;
BOOL Monster8Hit;
BOOL Monster9Hit;
BOOL Monster10Hit;



@interface GameViewController : UIViewController
{
 
    IBOutlet UIButton *Start;
    IBOutlet UIButton *Exit;
    IBOutlet UIButton *Shoot;
    
    IBOutlet UIImageView *Ship;
    IBOutlet UIImageView *Bullet;
    
    IBOutlet UIImageView *Monster1;
    IBOutlet UIImageView *Monster2;
    IBOutlet UIImageView *Monster3;
    IBOutlet UIImageView *Monster4;
    IBOutlet UIImageView *Monster5;
    IBOutlet UIImageView *Monster6;
    IBOutlet UIImageView *Monster7;
    IBOutlet UIImageView *Monster8;
    IBOutlet UIImageView *Monster9;
    IBOutlet UIImageView *Monster10;
    IBOutlet UIImageView *Poop1;
    IBOutlet UIImageView *Poop2;
    IBOutlet UIImageView *Poop3;
    IBOutlet UILabel *Winorlose;
    
    
    
    IBOutlet UILabel *Shoot1;
    IBOutlet UILabel *Shoot2;
    
    NSTimer *MovementTimer;
    
}

-(IBAction)Start:(id)sender;
-(IBAction)Shoot:(id)sender;
-(void)Movement;
-(void)Collision;
-(void)MonsterKilled;
-(void)MonsterMoveDown;
-(void)GameOver;



@end
