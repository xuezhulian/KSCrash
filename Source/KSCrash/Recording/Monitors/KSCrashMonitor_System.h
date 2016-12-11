//
//  KSCrashMonitor_System.h
//
//  Created by Karl Stenerud on 2012-02-05.
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

#ifndef KSCrashMonitor_System_h
#define KSCrashMonitor_System_h

#ifdef __cplusplus
extern "C" {
#endif

#define KSSystemField_AppStartTime "app_start_time"
#define KSSystemField_AppUUID "app_uuid"
#define KSSystemField_BootTime "boot_time"
#define KSSystemField_BundleID "CFBundleIdentifier"
#define KSSystemField_BundleName "CFBundleName"
#define KSSystemField_BundleShortVersion "CFBundleShortVersionString"
#define KSSystemField_BundleVersion "CFBundleVersion"
#define KSSystemField_CPUArch "cpu_arch"
#define KSSystemField_CPUType "cpu_type"
#define KSSystemField_CPUSubType "cpu_subtype"
#define KSSystemField_BinaryCPUType "binary_cpu_type"
#define KSSystemField_BinaryCPUSubType "binary_cpu_subtype"
#define KSSystemField_DeviceAppHash "device_app_hash"
#define KSSystemField_Executable "CFBundleExecutable"
#define KSSystemField_ExecutablePath "CFBundleExecutablePath"
#define KSSystemField_Jailbroken "jailbroken"
#define KSSystemField_KernelVersion "kernel_version"
#define KSSystemField_Machine "machine"
#define KSSystemField_Memory "memory"
#define KSSystemField_Model "model"
#define KSSystemField_OSVersion "os_version"
#define KSSystemField_ParentProcessID "parent_process_id"
#define KSSystemField_ProcessID "process_id"
#define KSSystemField_ProcessName "process_name"
#define KSSystemField_Size "size"
#define KSSystemField_Storage "storage"
#define KSSystemField_SystemName "system_name"
#define KSSystemField_SystemVersion "system_version"
#define KSSystemField_TimeZone "time_zone"
#define KSSystemField_BuildType "build_type"

/** Get the complete system info dictionary encoded to JSON.
 *
 * @return System info as JSON. Caller is responsible for calling free().
 */
const char* kssysteminfo_toJSON(void);

/** Create a copy of the current process name.
 *
 * @return The process name. Caller is responsible for calling free().
 */
char* kssysteminfo_copyProcessName(void);
    
#ifdef __cplusplus
}
#endif

#endif