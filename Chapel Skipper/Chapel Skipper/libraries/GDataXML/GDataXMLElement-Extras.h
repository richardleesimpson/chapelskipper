//
//  GDataXMLElement-Extras.h
//  Chapel Skipper
//
//  Created by Richard Simpson on 9/16/12.
//  Copyright (c) 2013 Richard Simpson. All rights reserved.
//

#import "GDataXMLNode.h"

@interface GDataXMLElement(Extras)

- (GDataXMLElement *)elementForChild:(NSString *)childName;
- (NSString *)valueForChild:(NSString *)childName;

@end
