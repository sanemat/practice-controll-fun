//
//  Control_FunViewController.h
//  Control Fun
//
//  Created by sanemat on 11/04/22.
//  Copyright 2011 na. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Control_FunViewController : UIViewController {
    UITextField *nameField;
    UITextField *numberField;
}
@property (nonatomic, retain) IBOutlet UITextField *nameField;
@property (nonatomic, retain) IBOutlet UITextField *numberField;
@end

