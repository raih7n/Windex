// Windex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <spdlog/spdlog.h>

int main()
{
	STARTUPINFOW si{};
	PROCESS_INFORMATION pi{};

	if(!CreateProcessW(L"C:\\Windows\\System32\\calc.exe", 
		const_cast<LPWSTR>(L""), nullptr, nullptr, 
		FALSE, CREATE_SUSPENDED, nullptr, nullptr, nullptr, &pi))
	{
		spdlog::error("Error spawning notepad.exe, Error: {}", GetLastError());
		return 0;
	}

	wil::unique_handle hNotepad;
	hNotepad.reset(pi.hProcess);

	NtResumeProcess(hNotepad.get());

	spdlog::info("Spawned notepad.exe PID: {}", GetProcessId(hNotepad.get()));



}

