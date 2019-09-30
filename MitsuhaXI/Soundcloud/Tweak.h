//
//  Tweak.h
//  Mitsuha2
//
//  Created by c0ldra1n on 12/10/17.
//  Copyright © 2017 c0ldra1n. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../MSHJelloView.h"

@interface PlayerArtworkView : UIView {
}
@property (retain, nonatomic) UIImage *artworkImage;
-(void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context;
-(void)readjustWaveColor;

@end

@interface UIViewWithDelegate : UIView {
}

@property (retain,nonatomic) UIViewController *viewDelegate;

@end

@interface TrackPlayerViewController : UIViewController {
}
@property (retain,nonatomic) MSHJelloView *mitsuhaJelloView;

@end