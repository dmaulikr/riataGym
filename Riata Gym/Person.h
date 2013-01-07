//
//  Person.h
//  Riata Gym
//
//  Created by Patrick Hagen on 12/8/12.
//  Copyright (c) 2012 Patrick Hagen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *workout;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addWorkoutObject:(NSManagedObject *)value;
- (void)removeWorkoutObject:(NSManagedObject *)value;
- (void)addWorkout:(NSSet *)values;
- (void)removeWorkout:(NSSet *)values;

@end
