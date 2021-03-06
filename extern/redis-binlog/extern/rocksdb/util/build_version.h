//  Copyright (c) 2013, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//
#pragma once
#if !defined(IOS_CROSS_COMPILE)
// if we compile with Xcode, we don't run build_detect_vesion, so we don't
// generate these variables
// these variables tell us about the git config and time
extern const char* rocksdb_build_git_sha;

// these variables tell us when the compilation occurred
extern const char* rocksdb_build_compile_time;
extern const char* rocksdb_build_compile_date;
#endif
