//
//  ChapelQuotes.h
//  Chapel Skipper
//
//  Created by Richard Simpson on 10/6/12.
//  Copyright (c) 2013 Richard Simpson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Quote.h"

@interface ChapelQuotes : NSObject

@property (strong, nonatomic) NSMutableArray *quotes;
@property (strong, nonatomic) NSMutableArray *celebrityQuotes;
@property BOOL celebrityEnabled;

- (Quote *)generateRandomQuote;

@end
