#include <fstream>
using namespace std;
int i_settings_create_template();
int i_settings_create_rules_txt();
int i_initialization_settings_ini();
int i_initialization_rules_txt();

///////////////////////////////////////////////////////////////////////////////
//	������������� �������������� ������ ���������
///////////////////////////////////////////////////////////////////////////////
void v_initialization() {
	if (i_initialization_rules_txt()) {
		// log(LOG) << "���� ���� ����������";
	} else {
		// log(LOG) << "���� ���� �� ����������";
	}

	if (i_initialization_settings_ini()) {
		// log(LOG) << "���� �������� ����������";
	} else {
		// log(LOG) << "���� �������� �� ����������";
	}
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
int i_initialization_settings_ini() {
	ifstream fin("settings.ini");
	if (!fin.is_open()) {
		// log(ERROR) << "����� �� ����������";
		if (i_settings_create_template()) {
			// log(LOG) << "���� �������� ������";
			return 1;
		} else {
			// log(ERROR) << "�� ���������� ������� ����";
			return 0;
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
int i_initialization_rules_txt() {
	ifstream fin("rules.txt");
	if (!fin.is_open()) {
		// log(ERROR) << "����� �� ����������";
		if (i_settings_create_rules_txt()) {
			// log(LOG) << "���� �������� ������";
			return 1;
		} else {
			// log(ERROR) << "�� ���������� ������� ����";
			return 0;
		}
	}
}