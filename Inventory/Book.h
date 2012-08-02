//
//  Book.h
//  Inventory
//
//  Created by iOS Camp on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Item.h"

@interface Book : Item

@property (nonatomic,strong)NSString *author;
@property (nonatomic,strong)NSString *title;

@end
