// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#pragma once

// Windows headers
#define WIN32_LEAN_AND_MEAN
#define WIN32_NO_STATUS
#include <windows.h>
#undef WIN32_NO_STATUS
#include <ntstatus.h>
#include <winioctl.h>

// C includes
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <ctime>

// C++ includes
#include <iostream>
#include <fstream>
#include <algorithm>
#include <thread>
#include <exception>
#include <vector>
#include <string>
#include <mutex>

// wil 
#include <wil/common.h>
#include <wil/stl.h>
#include <wil/result.h>
#include <wil/resource.h>

// phnt 
#define PHNT_VERSION PHNT_THRESHOLD
#include <phnt_windows.h>
#include <phnt.h>
#include <ntpsapi.h>
#include <ntrtl.h>
#include <ntpebteb.h>

