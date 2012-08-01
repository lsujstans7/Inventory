//
//  Item.h
//  Inventory
//
//  Created by iOS Camp on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject
//{
//    float price;
//    NSDate *releaseDate;
//}
//
//- (float)price;
//- (void)setPrice:(float)newPrice;
//
//- (NSDate *) releaseDate;
//- (void)setReleaseDate: (NSDate *)newDate;

@property (nonatomic) float price;
@property (nonatomic, strong) NSDate *releaseDate;
@end
