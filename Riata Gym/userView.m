//
//  userView.m
//  Riata Gym
//
//  Created by Patrick Hagen on 1/6/13.
//  Copyright (c) 2013 Patrick Hagen. All rights reserved.
//

#import "userView.h"
#import "AppDelegate.h"
#import "Person.h"


@interface userView ()
    @end

@implementation userView {
    NSMutableArray *users;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Get table data from core data
    AppDelegate *appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    //Grab context to core data per Apple Example
    NSManagedObjectContext *context = [appDelegate  managedObjectContext];
    //Grab the specific entity within the core data model
    NSEntityDescription *entity = [NSEntityDescription entityForName:@"Person" inManagedObjectContext:context];
    //Create new fetch request object
    NSFetchRequest *request = [[NSFetchRequest alloc] init];
    
    //Set Entity for the fetch request
    [request setEntity:entity];
    NSError *error;
    users = ((NSMutableArray*)[context executeFetchRequest:request error:&error]);
}


- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [users count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *simpleTableIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:simpleTableIdentifier];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:simpleTableIdentifier];
    }
    cell.textLabel.text = ((Person*)[users objectAtIndex:indexPath.row]).name;
    return cell;
}

@end