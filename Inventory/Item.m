//
//  Item.m
//  Inventory
//
//  Created by iOS Camp on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Item.h"

@implementation Item

@synthesize price = _price;
@synthesize releaseDate = _releaseDate;

- (void)sell
{
    NSLog(@"The Item has been sold for %f", self.price);
}

+ (id)itemWithPrice:(float)price date:(NSDate *)releaseDate 
{
    Item *returnItem;
    
    returnItem.price = price;
    returnItem.releaseDate = releaseDate;
    
    return returnItem;
}

- (id)initWithPrice:(float)price date:(NSDate *)releaseDate
{
    self = [super init];
    if (self) {
        //Initialize Class Here
        self.price = price;
        self.releaseDate = releaseDate;
    }
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"Item at price: %.2f", self.price];
}

@end
