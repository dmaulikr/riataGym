//
//  Workout.h
//  Riata Gym
//
//  Created by Patrick Hagen on 12/8/12.
//  Copyright (c) 2012 Patrick Hagen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Person;

@interface Workout : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Person *person;
@property (nonatomic, retain) NSSet *exercise;
@end

@interface Workout (CoreDataGeneratedAccessors)

- (void)addExerciseObject:(NSManagedObject *)value;
- (void)removeExerciseObject:(NSManagedObject *)value;
- (void)addExercise:(NSSet *)values;
- (void)removeExercise:(NSSet *)values;

@end
