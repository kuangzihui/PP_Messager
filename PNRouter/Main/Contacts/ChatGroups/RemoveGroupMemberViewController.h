//
//  ChooseContactViewController.h
//  PNRouter
//
//  Created by 旷自辉 on 2018/9/21.
//  Copyright © 2018年 旷自辉. All rights reserved.
//

#import "PNBaseViewController.h"

@class FriendModel,GroupInfoModel;

typedef void(^RemoveGroupMemberCompleteBlock)(NSArray *memberArr);

typedef enum : NSUInteger {
    RemoveGroupMemberTypeInCreate, // 创建时删除
    RemoveGroupMemberTypeInGroupDetail, // 群聊详情中删除
} RemoveGroupMemberType;

@interface RemoveGroupMemberViewController : PNBaseViewController

@property (nonatomic, copy) RemoveGroupMemberCompleteBlock removeCompleteB;
@property (nonatomic, strong) GroupInfoModel *groupInfoM;

- (instancetype)initWithMemberArr:(NSArray<FriendModel *> *)arr type:(RemoveGroupMemberType)type;

@end
