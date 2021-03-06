// Copyright 2020 ADTIMING TECHNOLOGY COMPANY LIMITED
// Licensed under the GNU Lesser General Public License Version 3

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef void(^wfCompletionHandler)(NSDictionary *_Nullable ins,  NSError *_Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface OMWaterfallRequest : NSObject

+ (void)requestDataWithPid:(NSString *)pid
                      size:(CGSize)size
                actionType:(NSInteger)actionType
              bidResponses:(NSArray*)bidResponses
                    tokens:(NSArray*)tokens
             instanceState:(NSArray*)instanceState
         completionHandler:(wfCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
