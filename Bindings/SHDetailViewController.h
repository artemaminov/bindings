//
//  SHDetailViewController.h
//  Bindings
//
//  Created by Artem Aminov on 3/31/13.
//  Copyright (c) 2013 Spaceheads. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SHDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
