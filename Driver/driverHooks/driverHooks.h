#pragma once
#include <ntdef.h>
#include <ntifs.h>
#include <ntddk.h>
#include <windef.h>
#include <Ntstrsafe.h>

VOID DriverUnload(PDRIVER_OBJECT driver_object);