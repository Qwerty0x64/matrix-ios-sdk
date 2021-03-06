// 
// Copyright 2020 The Matrix.org Foundation C.I.C
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import "MXJSONModel.h"

@class MXSyncResponse;


NS_ASSUME_NONNULL_BEGIN

/// A cached MXSyncResponse
@interface MXCachedSyncResponse : MXJSONModel

/**
 The sync token that generated `syncResponse`.
 
 It is different from syncResponse.nextBatch which represents the next sync token to use for the next /sync request.
 */
@property (nonatomic, readonly) NSString *syncToken;

/**
 The sync response starting from the prevBatch.
 */
@property (nonatomic, readonly) MXSyncResponse *syncResponse;


- (instancetype)initWithSyncToken:(NSString*)syncToken syncResponse:(MXSyncResponse*)syncResponse;

@end

NS_ASSUME_NONNULL_END
