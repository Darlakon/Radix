/**
	\file
    \brief Модуль работы с adb.
	\author Darlakon
*/
#include <Windows.h>
#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

/** Вызов adb-интерфейса.
    \param[in] cmdArgs - команда для adb вида "adb X".
*/
void adb(LPSTR cmdArgs)
{
	PROCESS_INFORMATION ProcessInfo;

	STARTUPINFO StartupInfo;

	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof StartupInfo;

	LPCSTR cmdPath = "assets\\platform-tools\\adb.exe";

	if (CreateProcess(cmdPath, cmdArgs,
		NULL, NULL, FALSE, 0, NULL,
		NULL, &StartupInfo, &ProcessInfo))
	{
		WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
		CloseHandle(ProcessInfo.hThread);
		CloseHandle(ProcessInfo.hProcess);
	}
}

/** Вызов fastboot-интерфейса.
    \param[in] cmdArgs - команда для fastboot вида "fastboot X".
*/
void fastboot(LPSTR cmdArgs)
{
	PROCESS_INFORMATION ProcessInfo;

	STARTUPINFO StartupInfo;

	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof StartupInfo;

	LPCSTR cmdPath = "assets\\platform-tools\\fastboot.exe";

	if (CreateProcess(cmdPath, cmdArgs,
		NULL, NULL, FALSE, 0, NULL,
		NULL, &StartupInfo, &ProcessInfo))
	{
		WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
		CloseHandle(ProcessInfo.hThread);
		CloseHandle(ProcessInfo.hProcess);
	}
}
