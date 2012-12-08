//
//  Exercise.h
//  Riata Gym
//
//  Created by Patrick Hagen on 12/8/12.
//  Copyright (c) 2012 Patrick Hagen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Workout;

@interface Exercise : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) id muscleGroup;
@property (nonatomic, retain) Workout *workout;
@property (nonatomic, retain) NSSet *set;
@end

@interface Exercise (CoreDataGeneratedAccessors)

- (void)addSetObject:(NSManagedObject *)value;
- (void)removeSetObject:(NSManagedObject *)value;
- (void)addSet:(NSSet *)values;
- (void)removeSet:(NSSet *)values;

@end
