//
//  PJBaseViewController.h
//  DiDiData
//
//  Created by PJ on 2018/4/4.
//  Copyright © 2018年 Didi.Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PJBaseViewController : UIViewController

@property (nonatomic, readwrite, strong) UINavigationBar *navBar;
@property (nonatomic, readwrite, strong) UINavigationItem *navItem;

@property (nonatomic, readwrite, copy) NSString *navTitle;
@property (nonatomic, readwrite, assign) CGFloat statusBarHeight;
@property (nonatomic, readwrite, assign) BOOL isLargeTitle;
@property (nonatomic, readwrite, assign) BOOL isBottomShadow;


- (void)leftBarButtonItemAction:(SEL)action;
- (void)leftBarBtuttonItemAction:(SEL)action imageName:(NSString *)imageName;
- (void)rightBarBtuttonItemAction:(SEL)action imageName:(NSString *)imageName;
- (void)rightBarButtonItemTitle:(NSString *)title Action:(SEL)action;

- (void)avartarBarButtonItemAction:(SEL)action imageURL:(NSString *)imageURL;

@end
