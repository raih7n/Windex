#pragma once

#include <ntifs.h>
#include <ntstrsafe.h>

#define WINDEX_DEVICE_NAME L"Windex"
#define WINDEX_DEVICE_FILE L"\\\\.\\" WINDEX_DEVICE_NAME
#define FILE_DEVICE_WINDEX 0x8005

#define DEVICE_NAME     L"\\Device\\"     ## WINDEX_DEVICE_NAME
#define DOS_DEVICE_NAME L"\\DosDevices\\" ## WINDEX_DEVICE_NAME

#define DPRINT(format, ...) DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, format, __VA_ARGS__)

#define IOCTL_WINDEX_MAP_IMAGE (ULONG)CTL_CODE(FILE_DEVICE_WINDEX, 0x800, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

/// <summary>
/// Input for image mapping
/// </summary>
typedef struct _MAP_IMAGE
{
	wchar_t  DllPath[512];
	wchar_t  initArgs[512];
	ULONG	 pid;
	ULONG    entryRVA;
} MAP_IMAGE, *PMAP_IMAGE;