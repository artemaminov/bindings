//
//  SHAppDelegate.h
//  Bindings
//
//  Created by Artem Aminov on 3/31/13.
//  Copyright (c) 2013 Spaceheads. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SHAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
