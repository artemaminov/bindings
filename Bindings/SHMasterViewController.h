//
//  SHMasterViewController.h
//  Bindings
//
//  Created by Artem Aminov on 3/31/13.
//  Copyright (c) 2013 Spaceheads. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface SHMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
