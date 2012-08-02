//
//  Book.m
//  Inventory
//
//  Created by iOS Camp on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Book.h"

@implementation Book
@synthesize author = _author;
@synthesize title = _title;

- (NSString *)description
{
    return [NSString stringWithFormat:@"Book: %@",self.title];
}

@end
