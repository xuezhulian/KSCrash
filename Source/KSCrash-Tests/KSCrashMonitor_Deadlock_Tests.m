//
//  KSCrashMonitor_Deadlock_Tests.m
//
//  Created by Karl Stenerud on 2013-01-26.
//
//  Copyright (c) 2012 Karl Stenerud. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//


#import <XCTest/XCTest.h>

#import "KSCrashMonitorContext.h"
#import "KSCrashMonitor_Deadlock.h"


@interface KSCrashMonitor_Deadlock_Tests : XCTestCase @end


@implementation KSCrashMonitor_Deadlock_Tests

- (void) testInstallAndRemove
{
    bool success;
    KSCrash_MonitorContext context;
    kscrashmonitor_setDeadlockHandlerWatchdogInterval(10);
    success = kscrashmonitor_installDeadlockHandler(&context);
    XCTAssertTrue(success, @"");
    [NSThread sleepForTimeInterval:0.1];
    kscrashmonitor_uninstallDeadlockHandler();
}

- (void) testDoubleInstallAndRemove
{
    bool success;
    KSCrash_MonitorContext context;
    success = kscrashmonitor_installDeadlockHandler(&context);
    XCTAssertTrue(success, @"");
    success = kscrashmonitor_installDeadlockHandler(&context);
    XCTAssertTrue(success, @"");
    kscrashmonitor_uninstallDeadlockHandler();
    kscrashmonitor_uninstallDeadlockHandler();
}

@end