//
//  PlayingCard.h
//  Matchismo
//
//  Created by Arturo Murillo on 2/17/14.
//  Copyright (c) 2014 Testing. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic)NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
