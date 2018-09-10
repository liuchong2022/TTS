//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

#ifndef session_event_args_private_h
#define session_event_args_private_h

#import "session_event_args.h"

#import "common_private.h"

@interface SessionEventArgs (Private)

// Todo: better opaque pointer in obj-c, or a typedef
- (instancetype)init: (SessionEventType)eventType :(NSString *)sessionId;
- (instancetype)initWithHandle: (SessionEventType)eventType :(const SpeechImpl::SessionEventArgs&) eventArgsHandle;

@end

#endif /* session_event_args_private_h */