//
//  RPAverage.h
//  Ripple Report
//
//  Created by Kevin Johnson on 10/22/13.
//  Copyright (c) 2013 Ripple Labs Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RPAverage : NSObject

@property (strong, nonatomic) NSString * currency;
@property (strong, nonatomic) NSNumber * total_volume;
@property (strong, nonatomic) NSNumber * weighted;
@property (strong, nonatomic) NSNumber * weighted_reverse;

@property (strong, nonatomic) NSMutableArray  * tickers;

@end
