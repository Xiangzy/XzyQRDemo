//
//  QRMenu.h
//  XzyQRDemo
//
//  Created by  xiangziyan on 16/8/9.
//  Copyright © 2016年 XiangZiyan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QRItem.h"

typedef void(^QRMenuDidSelectedBlock)(QRItem *item);

@interface QRMenu : UIView

@property (nonatomic, copy) QRMenuDidSelectedBlock didSelectedBlock;

- (instancetype)initWithFrame:(CGRect)frame;

@end
