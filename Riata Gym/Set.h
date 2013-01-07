//
//  Set.h
//  Riata Gym
//
//  Created by Patrick Hagen on 12/9/12.
//  Copyright (c) 2012 Patrick Hagen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Exercise;

@interface Set : NSManagedObject

@property (nonatomic, retain) NSNumber * reps;
@property (nonatomic, retain) NSNumber * weight;
@property (nonatomic, retain) NSNumber * number;
@property (nonatomic, retain) Exercise *exercise;

@end
