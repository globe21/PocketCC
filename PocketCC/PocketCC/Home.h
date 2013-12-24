//
//  Home.h
//  PocketCC
//
//  Created by Ian Zhang on 12/23/13.
//  Copyright (c) 2013 Ian Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface Home : UIViewController
{
    AVAudioPlayer *audioPlayer;
}

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;

- (IBAction)clickSocial:(id)sender;

- (IBAction)goToWiki:(id)sender;

@end
