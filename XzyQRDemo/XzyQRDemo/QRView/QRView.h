//
//  QRView.h
//  XzyQRDemo
//
//  Created by  xiangziyan on 16/8/9.
//  Copyright © 2016年 XiangZiyan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QRMenu.h"

@protocol QRViewDelegate <NSObject>

-(void)scanTypeConfig:(QRItem *)item;

@end

@interface QRView : UIView

@property (nonatomic, weak) id<QRViewDelegate> delegate;
/**
 *  透明的区域
 */
@property (nonatomic, assign) CGSize transparentArea;

@end
