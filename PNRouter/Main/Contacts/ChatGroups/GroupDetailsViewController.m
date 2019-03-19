//
//  GroupDetailsViewController.m
//  PNRouter
//
//  Created by Jelly Foo on 2019/3/13.
//  Copyright © 2019 旷自辉. All rights reserved.
//

#import "GroupDetailsViewController.h"
#import "GroupInfoModel.h"
#import "GroupMembersViewController.h"


@interface GroupDetailsViewController ()
@property (weak, nonatomic) IBOutlet UIButton *headImgView;
@property (nonatomic ,strong) GroupInfoModel *groupModel;
@end

@implementation GroupDetailsViewController
- (instancetype) initWithGroupInfo:(GroupInfoModel *) model
{
    if (self = [super init]) {
        self.groupModel = model;
    }
    return self;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    
}

#pragma mark - Action

- (IBAction)leaveAction:(id)sender {
    @weakify_self
    UIAlertController *alertC = [UIAlertController alertControllerWithTitle:nil message:@"You are leaving the group, the notice is only visible to the group owner. " preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *alert1 = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
    }];
    [alert1 setValue:UIColorFromRGB(0x2C2C2C) forKey:@"_titleTextColor"];
    [alertC addAction:alert1];
    UIAlertAction *alert2 = [UIAlertAction actionWithTitle:@"Leave" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
    }];
    [alert2 setValue:UIColorFromRGB(0x2C2C2C) forKey:@"_titleTextColor"];
    [alertC addAction:alert2];
    [self presentViewController:alertC animated:YES completion:nil];
}

- (IBAction)dismissAction:(id)sender {
    @weakify_self
    UIAlertController *alertC = [UIAlertController alertControllerWithTitle:nil message:@"Are you sure you want to dismiss the group?" preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *alert1 = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
    }];
    [alert1 setValue:UIColorFromRGB(0x2C2C2C) forKey:@"_titleTextColor"];
    [alertC addAction:alert1];
    UIAlertAction *alert2 = [UIAlertAction actionWithTitle:@"Dismiss" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
    }];
    [alert2 setValue:UIColorFromRGB(0x2C2C2C) forKey:@"_titleTextColor"];
    [alertC addAction:alert2];
    [self presentViewController:alertC animated:YES completion:nil];
}

- (IBAction)groupMembersAction:(id)sender {
    [self jumpToGroupMembers];
}

#pragma mark - Transition
- (void)jumpToGroupMembers {
    GroupMembersViewController *vc = [GroupMembersViewController new];
    vc.inputGId = @"";
    [self.navigationController pushViewController:vc animated:YES];
}

@end
