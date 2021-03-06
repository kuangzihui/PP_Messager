//
//  FileListModel.h
//  PNRouter
//
//  Created by Jelly Foo on 2019/1/25.
//  Copyright © 2019 旷自辉. All rights reserved.
//


NS_ASSUME_NONNULL_BEGIN

@interface FileListModel : BBaseModel

@property (nonatomic ,strong) NSNumber *MsgId;
@property (nonatomic ,strong) NSNumber *Timestamp;
@property (nonatomic ,strong) NSNumber *FileType;
@property (nonatomic ,strong) NSString *FileName;
@property (nonatomic ,strong) NSString *FilePath;
@property (nonatomic ,strong) NSString *FileMD5;
@property (nonatomic ,strong) NSString *FileInfo;
@property (nonatomic ,strong) NSNumber *FileSize;
@property (nonatomic ,strong) NSString *UserKey;
@property (nonatomic ,strong) NSString *Sender;
@property (nonatomic ,strong) NSString *SenderKey;
@property (nonatomic ,assign) int FileFrom; //1 :发出 2: 接受 3:上传

@property (nonatomic) BOOL showSelect;
@property (nonatomic) BOOL isSelect;
@property (nonatomic, strong) NSString *localPath;

@end

NS_ASSUME_NONNULL_END
