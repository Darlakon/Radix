/*
===========================================================================
Radix
		������ ����:
			0 - MSG �������. ����� ������ ��� �������
			1 - LOG �������. ����������� ��������� ��������, �����������, ���������� �������. ������ �������
			2 - WARN �������. ��������� ������
			3 - CRASH �������. ����� �� ���������. ��������� ������
2017
===========================================================================
*/
#include <string>
#include <fstream>
#include <thread>
#include <windows.h>
#include <stdio.h>
using namespace std;
void MAGE_thr(string &s);
void LOG_thr(string &s);
void WARN_thr(string &s);
void CRASH_thr(string &s);

///////////////////////////////////////////////////////////////////////////////
//	Logger. MSG
///////////////////////////////////////////////////////////////////////////////
/*
	������
	������� ���� - 0
	������������ ��������� � ���� logger.log
	����� ��������� ����:
		[				    ] {MESSAGE}
*/
void MAGE(string s) {
	thread thr(MAGE_thr, ref(s));
	thr.join();
}
void MAGE_thr(string &s) {
	ofstream fout("logger.log", ios_base::app);
	fout << "[				    ] " << s << "\n";
	fout.close();
}

///////////////////////////////////////////////////////////////////////////////
//	Logger. LOG
///////////////////////////////////////////////////////////////////////////////
/*
	������
	������� ���� - 1
	������������ ��������� � ���� logger.log
	����� ��������� ����:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[LOG] {MESSAGE}
*/
void LOG(string s) {
	thread thr(LOG_thr, ref(s));
	thr.join();
}
void LOG_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [LOG]	" << s << "\n";
	fout.close();
}

///////////////////////////////////////////////////////////////////////////////
//	Logger. WARN
///////////////////////////////////////////////////////////////////////////////
/*
	������
	������� ���� - 2
	������������ ��������� � ���� logger.log
	����� ��������� ����:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[WARN] {MESSAGE}
*/
void WARN(string s) {
	thread thr(WARN_thr, ref(s));
	thr.join();
}
void WARN_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [WARN]	" << s << "\n";
	fout.close();
}

///////////////////////////////////////////////////////////////////////////////
//	Logger. CRASH
///////////////////////////////////////////////////////////////////////////////
/*
	������
	������� ���� - 2
	������������ ��������� � ���� logger.log
	����� ��������� ����:
		[{YEAR}/{MONTH}/{DAY} {HOUR}:{MINUTE}:{SECOND}]	[CRASH] {MESSAGE}
*/
void CRASH(string s) {
	thread thr(CRASH_thr, ref(s));
	thr.join();
}
void CRASH_thr(string &s){
	SYSTEMTIME time;
	GetLocalTime(&time);
	ofstream fout("logger.log", ios_base::app);
	fout << "[" << time.wYear << "/" << time.wMonth << "/" << time.wDay << " " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << "] [CRASH]	" << s << "\n";
	fout.close();
}