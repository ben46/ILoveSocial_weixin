//
//  LNLabelBarViewController.h
//  SocialFusion
//
//  Created by Blue Bitch on 12-1-19.
//  Copyright (c) 2012年 Tongji Apple Club. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LNLabelPageViewController.h"

@protocol LNLabelBarViewControllerDelegate;

@interface LNLabelBarViewController : UIViewController<UIScrollViewDelegate ,LNLabelPageViewControllerDelegate> {
    UIScrollView *_scrollView;
    NSMutableArray *_labelPagesStack;
    NSMutableArray *_labelInfoArrayStack;
    UIPageControl *_pageControl;
    NSUInteger _pageCount;
    NSMutableArray *_pageIndexStack;
    NSUInteger _currentParentLabelIndex;
    id<LNLabelBarViewControllerDelegate> _delegate;
}

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) IBOutlet UIPageControl *pageControl;
@property (nonatomic, readonly) NSMutableArray *labelInfoArray;
@property (nonatomic, readonly) NSMutableArray *labelPages;
@property (nonatomic, readonly) NSUInteger pageIndex;
@property (nonatomic) NSUInteger pageCount;
@property (nonatomic, assign) id<LNLabelBarViewControllerDelegate> delegate;

- (id)initWithLabelInfoArray:(NSArray *)infoArray;
- (void)createLabelWithInfo:(LabelInfo *)info;

@end

@protocol LNLabelBarViewControllerDelegate <NSObject>

- (void)labelBarView:(LNLabelBarViewController *)labelBar didSelectParentLabelAtIndex:(NSUInteger)index;
- (void)labelBarView:(LNLabelBarViewController *)labelBar didSelectChildLabelWithIndentifier:(NSString *)identifier inParentLabelAtIndex:(NSUInteger)index;

@end