//
//  IBKWidgetTopBase.h
//  curago
//
//  Created by Matt Clarke on 01/03/2015.
//
//

#import <UIKit/UIKit.h>

/*
 * iOS icon view's are weird, so if we want to block touch input for launching, we
 * have to use something that expects touch, like an UIButton. UIView doesn't work 
 * for this purpose, which is baffling.
*/

@interface UIView (DelegateHelper)
@property (getter=_viewDelegate, setter=_setViewDelegate:, nonatomic) UIViewController *viewDelegate;
@end

@interface IBKWidgetTopBase : UIButton

@end

@interface UIButton (PrivateStuff)
- (UIView *)superviewOfClass:(Class)thing;
@end 
