//
//  RequestService.m
//  Qlink
//
//  Created by Jelly Foo on 2018/3/26.
//  Copyright © 2018年 pan. All rights reserved.
//

#import "RequestService.h"
#import "NSString+UrlEncode.h"
#import "NSDate+Category.h"
#import "AFHTTPClientV2.h"
#import "SystemUtil.h"

@interface RequestService ()

@property (nonatomic, strong) NSString *prefix_Url;

@end

@implementation RequestService

+ (instancetype)getInstance {
    static dispatch_once_t pred = 0;
    __strong static id shareObject = nil;
    dispatch_once(&pred, ^{
        shareObject = [[self alloc] init];
    });
    return shareObject;
}

- (NSString *)prefix_Url {
//    if (!_prefix_Url) {
        _prefix_Url = [SystemUtil connectUrl];
//    }
    return _prefix_Url;
}

+ (NSString *)getPrefixUrl {
    return [RequestService getInstance].prefix_Url;
}

+ (void)cancelAllOperations {
    [AFHTTPClientV2 cancelAllOperations];
}

+ (NSURLSessionDataTask *)requestWithUrl:(NSString *)url params:(id)params httpMethod:(HttpMethod)httpMethod isSign:(BOOL)isSign successBlock:(HTTPRequestV2SuccessBlock)successReqBlock failedBlock:(HTTPRequestV2FailedBlock)failedReqBlock {
    
    NSString *requestUrl = [NSString stringWithFormat:@"%@%@",[RequestService getInstance].prefix_Url,url];
    id inputParams = params;
    NSURLSessionDataTask *dataTask = [AFHTTPClientV2 requestWithBaseURLStr:requestUrl params:inputParams httpMethod:httpMethod successBlock:successReqBlock failedBlock:failedReqBlock];
    
    return dataTask;
}

+ (NSURLSessionDataTask *)requestWithUrl:(NSString *)url params:(id)params httpMethod:(HttpMethod)httpMethod successBlock:(HTTPRequestV2SuccessBlock)successReqBlock failedBlock:(HTTPRequestV2FailedBlock)failedReqBlock {
    
    NSURLSessionDataTask *dataTask = [RequestService requestWithUrl:url params:params httpMethod:httpMethod isSign:YES successBlock:successReqBlock failedBlock:failedReqBlock];
    
    return dataTask;
}

+ (NSURLSessionDataTask *)postImage:(NSString *)url
                   parameters:(id)parameters
    constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))bodyBlock
                      success:(HTTPRequestV2SuccessBlock)successReqBlock
                      failure:(HTTPRequestV2FailedBlock)failedReqBlock {
    
    NSString *requestUrl = [NSString stringWithFormat:@"%@%@",[RequestService getInstance].prefix_Url,url];
    
    NSURLSessionDataTask *dataTask = [AFHTTPClientV2 requestWithBaseURLStr:requestUrl parameters:parameters userInfo:nil constructingBodyWithBlock:bodyBlock success:successReqBlock failure:failedReqBlock];
    
    return dataTask;
}

+ (NSURLSessionDataTask *)postImage7:(NSString *)url
                   parameters:(id)parameters
    constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))bodyBlock
                      success:(HTTPRequestV2SuccessBlock)successReqBlock
                      failure:(HTTPRequestV2FailedBlock)failedReqBlock {


    NSString *requestUrl = url;//[NSString stringWithFormat:@"%@%@",Feedback_Url,url];
    
    
    NSURLSessionDataTask *dataTask = [AFHTTPClientV2 requestWithConfidantCSURLStr:requestUrl parameters:parameters userInfo:nil constructingBodyWithBlock:bodyBlock success:successReqBlock failure:failedReqBlock];
    
    return dataTask;
}

+ (NSURLSessionDataTask *)requestWithJsonUrl:(NSString *)url params:(id)params httpMethod:(HttpMethod)httpMethod successBlock:(HTTPRequestV2SuccessBlock)successReqBlock failedBlock:(HTTPRequestV2FailedBlock)failedReqBlock
{
    NSURLSessionDataTask *dataTask = [AFHTTPClientV2 requestWithBaseURLStr:url params:params httpMethod:httpMethod successBlock:successReqBlock failedBlock:failedReqBlock];
    return dataTask;
}

+ (void) downFileWithBaseURLStr:(NSString *) url fileName:(NSString *) fileName friendid:(NSString *) friendid
                           progressBlock:(void(^)(CGFloat progress)) progressBlock
                                 success:(void (^)(NSURLSessionDownloadTask *dataTask, NSString *filePath)) success
                                 failure:(void (^)(NSURLSessionDownloadTask *dataTask, NSError *error))failure
{
    NSString *requestUrl = [NSString stringWithFormat:@"%@%@",[RequestService getInstance].prefix_Url,url];
    [AFHTTPClientV2 downFileWithBaseURLStr:requestUrl fileName:fileName friendid:friendid progressBlock:^(CGFloat progress) {
        if (progressBlock) {
            progressBlock(progress);
        }
    } success:^(NSURLSessionDownloadTask *dataTask , NSString *filePath) {
        if (success) {
            success(dataTask,filePath);
        }
    } failure:^(NSURLSessionDownloadTask *dataTask, NSError *error) {
        if (failure) {
            failure(dataTask,error);
        }
    }];
}

+ (NSURLSessionDownloadTask *)downFileWithBaseURLStr:(NSString *)url
                      filePath:(NSString *)filePath
                  progressBlock:(void(^)(CGFloat progress)) progressBlock
                        success:(void (^)(NSURLSessionDownloadTask *dataTask, NSString *filePath)) success
                        failure:(void (^)(NSURLSessionDownloadTask *dataTask, NSError *error))failure {
    
    NSString *requestUrl = [NSString stringWithFormat:@"%@%@",[RequestService getInstance].prefix_Url,url];
    if ([SystemUtil filePathisExist:filePath]) {
        [SystemUtil removeDocmentFilePath:filePath];
    }
    NSURLSessionDownloadTask *downloadTask = [AFHTTPClientV2 downFileWithBaseURLStr:requestUrl filePath:filePath progressBlock:^(CGFloat progress) {
        if (progressBlock) {
            progressBlock(progress);
        }
    } success:^(NSURLSessionDownloadTask *dataTask , NSString *filePath) {
        if (success) {
            success(dataTask,filePath);
        }
    } failure:^(NSURLSessionDownloadTask *dataTask, NSError *error) {
        if (failure) {
            failure(dataTask,error);
        }
    }];

    return downloadTask;
}

@end
