//
//  Card.h
//  Matchismo
//
//  Created by Arturo Murillo on 2/17/14.
//  Copyright (c) 2014 Testing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMathed) BOOL matched;

- (int) match:(NSArray *)otherCards;

@end
