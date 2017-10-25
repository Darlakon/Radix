#include <fstream>
using namespace std;
int i_settings_create_logger_log();
int i_settings_create_template();
int i_settings_create_rules_txt();
void v_initialization_settings_ini();
void v_initialization_rules_txt();
void v_initialization_logger_log();

///////////////////////////////////////////////////////////////////////////////
//	Инициализация дополнительных файлов программы
///////////////////////////////////////////////////////////////////////////////
void v_initialization() {
	v_initialization_logger_log();
	v_initialization_rules_txt();
	v_initialization_settings_ini();
}


///////////////////////////////////////////////////////////////////////////////
//	Проверка файла settings.ini
///////////////////////////////////////////////////////////////////////////////
/*
	Проверка файла settings.ini
	При отсутствии файла создаёт его
	При наличии файла пропуск
	Всё логируется
*/
void v_initialization_settings_ini() {
	ifstream fin("settings.ini");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		if (i_settings_create_template()) {
			// log(LOG) << "Файл настроек создан";
		} else {
			// log(ERROR) << "Не получилось создать файл";
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла rules.txt
///////////////////////////////////////////////////////////////////////////////
/*
	Проверка файла rules.txt
	При отсутствии файла создаёт его
	При наличии файла пропуск
	Всё логируется
*/
void v_initialization_rules_txt() {
	ifstream fin("rules.txt");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		if (i_settings_create_rules_txt()) {
			// log(LOG) << "Файл настроек создан";
		} else {
			// log(ERROR) << "Не получилось создать файл";
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла logger.log
///////////////////////////////////////////////////////////////////////////////
/*
	Проверка файла logger.log
	При отсутствии файла создаёт его
	При наличии файла пропуск
	Всё логируется
*/
void v_initialization_logger_log() {
	ifstream fin("logger.log");
	if (!fin.is_open()) {
		// log(ERROR) << "Файла не сушествует";
		if (i_settings_create_logger_log()) {
			// log(LOG) << "Файл настроек создан";
		} else {
			// log(ERROR) << "Не получилось создать файл";
		}
	}
}