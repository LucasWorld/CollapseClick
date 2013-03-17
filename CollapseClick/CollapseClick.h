//
//  CollapseClick.h
//  CollapseClick
//
//  Created by Ben Gordon on 2/28/13.
//  Copyright (c) 2013 Ben Gordon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CollapseClickCell.h"

#define kCCPad 10

  //////////////
 // Delegate //
//////////////
@protocol CollapseClickDelegate
@required
-(int)numberOfCellsForCollapseClick;
-(NSString *)titleForCollapseClickAtIndex:(int)index;
-(UIView *)viewForCollapseClickContentViewAtIndex:(int)index;

@optional
-(UIColor *)colorForCollapseClickTitleViewAtIndex:(int)index;
-(UIColor *)colorForTitleLabelAtIndex:(int)index;
-(UIColor *)colorForTitleArrowAtIndex:(int)index;

@end




  ///////////////
 // Interface //
///////////////
@interface CollapseClick : UIScrollView <UIScrollViewDelegate>  {
    __weak id <CollapseClickDelegate> CollapseClickDelegate;
}

// Delegate
@property (weak) id <CollapseClickDelegate> CollapseClickDelegate;

// Properties
@property (nonatomic, retain) NSMutableArray *isClickedArray;
@property (nonatomic, retain) NSMutableArray *dataArray;

// Methods
-(void)reloadCollapseClick;
-(CollapseClickCell *)collapseClickCellForIndex:(int)index;
-(void)scrollToCollapseClickCellAtIndex:(int)index animated:(BOOL)animated;
-(void)insertNewCellWithTitle:(NSString *)title viewForContent:(UIView *)content atIndex:(int)index;

@end
