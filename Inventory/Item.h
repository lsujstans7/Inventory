//
//  Item.h
//  Inventory
//
//  Created by iOS Camp on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject


@property (nonatomic) float price;
@property (nonatomic, strong) NSDate *releaseDate;

+ (id)itemWithPrice:(float)price date:(NSDate *)releaseDate;
- (id)initWithPrice:(float)price date:(NSDate *)releaseDate;

- (void)sell;

@end
