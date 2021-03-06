//
//  CLRecorder.h
//  CLDemo
//
//  Created by JmoVxia on 2020/6/24.
//  Copyright © 2020 JmoVxia. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLRecorder : NSObject

@property (nonatomic, copy) NSString  *mp3Path;

- (void)startRecorder;

- (void)stopRecorder;

@end

NS_ASSUME_NONNULL_END
