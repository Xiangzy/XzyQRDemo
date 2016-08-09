//
//  QRItem.h
//  XzyQRDemo
//
//  Created by  xiangziyan on 16/8/9.
//  Copyright © 2016年 XiangZiyan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, QRItemType) {
    QRItemTypeQRCode,
    QRItemTypeOther,
};


@interface QRItem : UIButton

@property (nonatomic, assign) QRItemType type;

- (instancetype)initWithFrame:(CGRect)frame
                       titile:(NSString *)titile;

@end
