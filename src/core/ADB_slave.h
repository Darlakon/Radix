/**
\file
\brief ������������ ���� � ������������ ������ ������ � adb.
\author Darlakon
*/
#ifndef ADB_SLAVE_H
#define ADB_SLAVE_H
#include "..\core\ADB_mod.h"

/**
��������� ��������� ����������
*/
int adb_state();

/**
������ ������ ADB ��� �������� ������ �� ����������
*/
int adb_files();

/**
������ ��������� �����������
*/
int adb_root();

#endif // ADB_SLAVE_H
