#include <fstream>
using namespace std;
int i_settings_create_logger_log();
int i_settings_create_template();
int i_settings_create_rules_txt();
void v_initialization_settings_ini();
void v_initialization_rules_txt();
void v_initialization_logger_log();

///////////////////////////////////////////////////////////////////////////////
//	������������� �������������� ������ ���������
///////////////////////////////////////////////////////////////////////////////
void v_initialization() {
	v_initialization_logger_log();
	v_initialization_rules_txt();
	v_initialization_settings_ini();
}


///////////////////////////////////////////////////////////////////////////////
//	�������� ����� settings.ini
///////////////////////////////////////////////////////////////////////////////
/*
	�������� ����� settings.ini
	��� ���������� ����� ������ ���
	��� ������� ����� �������
	�� ����������
*/
void v_initialization_settings_ini() {
	ifstream fin("settings.ini");
	if (!fin.is_open()) {
		// log(ERROR) << "����� �� ����������";
		if (i_settings_create_template()) {
			// log(LOG) << "���� �������� ������";
		} else {
			// log(ERROR) << "�� ���������� ������� ����";
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//	�������� ����� rules.txt
///////////////////////////////////////////////////////////////////////////////
/*
	�������� ����� rules.txt
	��� ���������� ����� ������ ���
	��� ������� ����� �������
	�� ����������
*/
void v_initialization_rules_txt() {
	ifstream fin("rules.txt");
	if (!fin.is_open()) {
		// log(ERROR) << "����� �� ����������";
		if (i_settings_create_rules_txt()) {
			// log(LOG) << "���� �������� ������";
		} else {
			// log(ERROR) << "�� ���������� ������� ����";
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//	�������� ����� logger.log
///////////////////////////////////////////////////////////////////////////////
/*
	�������� ����� logger.log
	��� ���������� ����� ������ ���
	��� ������� ����� �������
	�� ����������
*/
void v_initialization_logger_log() {
	ifstream fin("logger.log");
	if (!fin.is_open()) {
		// log(ERROR) << "����� �� ����������";
		if (i_settings_create_logger_log()) {
			// log(LOG) << "���� �������� ������";
		} else {
			// log(ERROR) << "�� ���������� ������� ����";
		}
	}
}