//
//  CustomMacro.h
//  PNRouter
//
//  Created by 旷自辉 on 2018/9/10.
//  Copyright © 2018年 旷自辉. All rights reserved.
//

#ifndef NotiMacro_h
#define NotiMacro_h

#pragma mark - 通知
static NSString *SOCKET_ON_DISCONNECT_NOTI = @"SOCKET_ON_DISCONNECT_NOTI";
static NSString *SOCKET_ON_CONNECT_NOTI = @"SOCKET_ON_CONNECT_NOTI";
static NSString *SOCKET_DISCONNECT_NOTI =  @"SOCKET_DISCONNECT_NOTI";
// 头像更改通知
static NSString *USER_HEAD_CHANGE_NOTI = @"USER_HEAD_CHANGE_NOTI";
// 正在下载
static NSString *DID_DOWN_FILE_NOTI = @"DID_DOWN_FILE_NOTI";
// 正在下载
static NSString *DID_UPLOAD_FILE_NOTI = @"DID_UPLOAD_FILE_NOTI";
// touch 验证成功
static NSString *TOUCH_MODIFY_SUCCESS_NOTI = @"TOUCH_MODIFY_SUCCESS_NOTI";
#define SOCKET_LOGIN_SUCCESS_NOTI @"SOCKET_LOGIN_SUCCESS_NOTI"
// 处理同意还是拒绝通知
#define DEAL_FRIEND_NOTI @"DEAL_FRIEND_NOTI"
// 好友状态改变通知
#define FRIENT_ONLINE_CHANGE_NOTI @"FRIENT_ONLINE_CHANGE_NOTI"
// 好友列表改变通知
#define FRIEND_LIST_CHANGE_NOTI @"FRIENT_LIST_CHANGE_NOTI"
// 添加好友通知
#define ADD_FRIEND_NOTI @"ADD_FRIEND_NOTI"
// 删除好友成功通知
#define SOCKET_DELETE_FRIEND_SUCCESS_NOTI @"SOCKET_DELETE_FRIEND_SUCCESS_NOTI"
// 好友删除您的通知
#define FRIEND_DELETE_MY_NOTI @"FRIEND_DELETE_MY_NOTI"
// 拉取好友成功通知
#define GET_FRIEND_LIST_NOTI @"GET_FRIEND_LIST_NOTI"
// 添加聊天消息通知
#define ADD_MESSAGE_NOTI @"ADD_MESSAGE_NOTI"
// 添加聊天消息通知
#define RECEIVE_MESSAGE_NOTI @"RECEIVE_MESSAGE_NOTI"
// 聊天消息发送成功通知
#define SEND_CHATMESSAGE_SUCCESS_NOTI @"SEND_CHATMESSAGE_SUCCESS_NOTI"
// 下拉增加聊天消息通知
#define ADD_MESSAGE_BEFORE_NOTI @"ADD_MESSAGE_BEFORE_NOTI"
// 删除消息成功通知
#define DELET_MESSAGE_SUCCESS_NOTI @"DELET_MESSAGE_SUCCESS_NOTI"
// 收到删除某条消息通知
#define RECEIVE_DELET_MESSAGE_NOTI @"RECEIVE_DELET_MESSAGE_NOTI"
// 有人请求加好友通知
#define REQEUST_ADD_FRIEND_NOTI @"REQEUST_ADD_FRIEND_NOTI"
// 对方同意加你为好友通知
#define FRIEND_ACCEPED_NOTI @"FRIEND_ACCEPED_NOTI"
// tabbar Contact 红点通知
#define TABBAR_CONTACT_HD_NOTI @"TABBAR_CONTACT_HD_NOTI"
// tabbar Chats 红点通知
#define TABBAR_CHATS_HD_NOTI @"TABBAR_CHATS_HD_NOTI"
// 自己是否在线的通知
#define OWNER_ONLINE_NOTI @"OWNER_ONLINE_NOTI"
// 选择好友通知
#define CHOOSE_FRIEND_NOTI @"CHOOSE_FRIEND_NOTI"
// 文件发送通知
#define FILE_SEND_NOTI @"FILE_SEND_NOTI"
// 文件发送中通知
#define FILE_SENDING_NOTI @"FILE_SENDING_NOTI"
// 上传文字文件发送通知
#define FILE_UPLOAD_NOTI @"FILE_UPLOAD_NOTI"
// 上传头像发送通知
#define UPLOAD_HEAD_DATA_NOTI @"UPLOAD_HEAD_DATA_NOTI"
// 收到文件发送通知
#define RECEVIE_FILE_NOTI @"RECEVIE_FILE_NOTI"
// 用户找回通知
#define USER_FIND_RECEVIE_NOTI @"USER_FIND_RECEVIE_NOTI"
// 用户注册通知
#define USER_REGISTER_RECEVIE_NOTI @"USER_REGISTER_RECEVIE_NOTI"
// 组禾播接受完通知
#define GB_FINASH_NOTI @"GB_FINASH_NOTI"
// 重连失败通知
#define RELOAD_SOCKET_FAILD_NOTI @"RELOAD_SOCKET_FAILD_NOTI"
// 路由用户列表拉取成功
#define USER_PULL_SUCCESS_NOTI @"USER_PULL_SUCCESS_NOTI"
// tox添加路由好友成功
#define TOX_ADD_ROUTER_SUCCESS_NOTI @"TOX_ADD_ROUTER_SUCCESS_NOTI"
// tox重连成功
#define TOX_RECONNECT_SUCCESS_NOTI @"TOX_RECONNECT_SUCCESS_NOTI"
// 创建普通用户成功
#define CREATE_USER_SUCCESS_NOTI @"TOX_ADD_ROUTER_SUCCESS_NOTI"
// push已读消息
#define REVER_RED_MSG_NOTI @"REVER_RED_MSG_NOTI"
// logout 成功
#define REVER_LOGOUT_SUCCESS_NOTI @"REVER_LOGOUT_SUCCESS_NOTI"
// 修改昵称 成功
#define REVER_UPDATE_NICKNAME_SUCCESS_NOTI @"REVER_UPDATE_NICKNAME_SUCCESS_NOTI"
// 修改好友昵称 成功
#define REVER_UPDATE_FRIEND_NICKNAME_SUCCESS_NOTI @"REVER_UPDATE_FRIEND_NICKNAME_SUCCESS_NOTI"
// 文件发送失败
#define REVER_FILE_SEND_FAIELD_NOTI @"REVER_FILE_SEND_FAIELD_NOTI"
// toxpull文件
#define REVER_FILE_PULL_NOTI @"REVER_FILE_PULL_NOTI"
// toxpull文件完成
#define REVER_FILE_PULL_SUCCESS_NOTI @"REVER_FILE_PULL_SUCCESS_NOTI"
// 注册推送通知
#define REGISTER_PUSH_NOTI @"REGISTER_PUSH_NOTI"
#define REVER_QUERY_FRIEND_NOTI @"REVER_QUERY_FRIEND_NOTI"
// app登出通知
#define REVER_APP_LOGOUT_NOTI @"REVER_APP_LOGOUT_NOTI"
// 设备登录成功通知
#define DEVICE_LOGIN_SUCCESS_NOTI @"DEVICE_LOGIN_SUCCESS_NOTI"
// 修改管理密码成功通知
#define ResetRouterKey_SUCCESS_NOTI @"ResetRouterKey_SUCCESS_NOTI"
// 修改账户激活码成功通知
#define ResetUserIdcode_SUCCESS_NOTI @"ResetUserIdcode_SUCCESS_NOTI"
// 取消登陆mac
#define CANCEL_LOGINMAC_NOTI @"CANCEL_LOGINMAC_NOTI"
// 拉取文件列表完成通知
#define PullFileList_Complete_Noti @"PullFileList_Complete_Noti"
// 上传文件请求完成通知
#define UploadFileReq_Success_Noti @"UploadFileReq_Success_Noti"
// 选择分享好友列表完成通知
#define CHOOSE_Share_FRIEND_NOTI @"CHOOSE_Share_FRIEND_NOTI"
// 拉取可分享文件好友列表成功通知
#define PullSharedFriend_Noti @"PullSharedFriend_Noti"
// 获取设备磁盘统计信息成功通知
#define GetDiskTotalInfo_Noti @"GetDiskTotalInfo_Noti"
// 获取设备磁盘详细信息成功通知
#define GetDiskDetailInfo_Noti @"GetDiskDetailInfo_Noti"
// 设备磁盘模式配置成功通知
#define FormatDisk_Success_Noti @"FormatDisk_Success_Noti"
#define FormatDisk_Fail_Noti @"FormatDisk_Fail_Noti"
// 设备重启成功通知
#define Reboot_Success_Noti @"Reboot_Success_Noti"
#define Reboot_Fail_Noti @"Reboot_Fail_Noti"
// 设备管理员修改设备昵称 修改成功通知
#define ResetRouterName_Success_Noti @"ResetRouterName_Success_Noti"
// 文件重命名
#define FileRename_Success_Noti @"FileRename_Success_Noti"
// 用户上传头像
#define UploadAvatar_Success_Noti @"UploadAvatar_Success_Noti"
// 更新用户头像
#define UpdateAvatar_Success_Noti @"UpdateAvatar_Success_Noti"
// 更新用户头像：头像不存在
#define UpdateAvatar_FileNotExist_Noti @"UpdateAvatar_FileNotExist_Noti"
// ---------------------群组----------------------
#define CREATE_GROUP_SUCCESS_NOTI  @"CREATE_GROUP_SUCCESS_NOTI"
#define CREATE_GROUP_SUCCESS_JUMP_NOTI  @"CREATE_GROUP_SUCCESS_JUMP_NOTI"
#define PULL_GROUP_SUCCESS_NOTI @"PULL_GROUP_SUCCESS_NOTI"


// 删除文件成功通知
#define Delete_File_Noti @"Delete_File_Noti"
// 文件上传进度通知
#define File_Progess_Noti @"File_Progess_Noti"
// tox下载进度通知
#define Tox_Down_File_Progess_Noti @"Tox_Down_File_Progess_Noti"
// 文件上传成功通知
#define File_Upload_Finsh_Noti @"File_Upload_Finsh_Noti"
// 文件上传失败通知
#define File_Upload_Faield_Noti @"File_Upload_Faield_Noti"
// 任务列表tox拉取文件
#define TOX_PULL_FILE_FAIELD_NOTI @"TOX_PULL_FILE_FAIELD_NOTI"
#define TOX_PULL_FILE_SUCCESS_NOTI @"TOX_PULL_FILE_SUCCESS_NOTI"
// tox 断线状态通知
#define TOX_CONNECT_STATUS_NOTI  @"TOX_CONNECT_STATUS_NOTI"
// 头像下载成功通知
#define USER_HEAD_DOWN_SUCCESS_NOTI  @"USER_HEAD_DOWN_SUCCESS_NOTI"



#endif /* CustomMacro_h */
