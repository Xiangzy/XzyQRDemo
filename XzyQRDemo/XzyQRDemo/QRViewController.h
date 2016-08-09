//
//  QRViewController.h
//  XzyQRDemo
//
//  Created by  xiangziyan on 16/8/9.
//  Copyright © 2016年 XiangZiyan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^QRUrlBlock)(NSString *url);

@interface QRViewController : UIViewController

@property (nonatomic, copy) QRUrlBlock qrUrlBlock;

@end
