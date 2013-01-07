//
//  Person.m
//  Riata Gym
//
//  Created by Patrick Hagen on 12/8/12.
//  Copyright (c) 2012 Patrick Hagen. All rights reserved.
//

#import "Person.h"
#import "Workout.h" 


@implementation Person

@dynamic name;
@dynamic workout;

- (void)addWorkoutObject:(NSManagedObject *)value
{
    self.workout = [self.workout setByAddingObject:value];
    //Workout *test = nil;
    NSArray *array = nil;
    array = [self.workout allObjects];
    NSLog(@"%@",((Workout*)[array objectAtIndex:0]));
}
- (void)addWorkout:(NSSet *)values
{
    
}

@end
