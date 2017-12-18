/**
	\file
    \brief Модуль проверки стандартных файлов программы.
	
	Модуль проверяет наличие стандартных файлов программы
	
	Файлы:
	
		logger.log - вывод логера
		
		rules.txt - правила программы, с которыми должен согласиться пользователь
		
		settings.ini - файл настроек
	\example initialization.cpp
	\author SavaLione
*/
#include <fstream>

#include "..\io\Templates.h"
#include "..\io\Logger.h"
#include "Constants.h"
#include "..\ui\LoadScale.h"

using namespace std;

void v_initialization_logger_log(); ///< Проверка файла logger.log
void v_initialization_settings_ini(); ///< Проверка файла settings.ini
void v_initialization_rules_txt(); ///< Проверка файла rules.txt

///////////////////////////////////////////////////////////////////////////////
//	Инициализация дополнительных файлов программы
///////////////////////////////////////////////////////////////////////////////
/**
	Функция проверяет наличие 3 стандартных файлов программы
	
		logger.log
		
		rules.txt
		
		settings.ini
*/
void v_initialization() {
	v_loadscale(0); // Шкала загрузки 0 положение
	v_initialization_logger_log(); // Проверка файла logger.log
	v_loadscale(10); // Шкала загрузки 10 положение
	v_initialization_settings_ini(); // Проверка файла settings.ini
	v_loadscale(20); // Шкала загрузки 20 положение
	v_initialization_rules_txt(); // Проверка файла rules.txt
	v_loadscale(24); // Шкала загрузки 24 положение
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла logger.log
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла logger.log
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_logger_log() {
	ifstream fin(radix::logger_list);
	// Если файл есть и его можно открыть
	if (fin.is_open()) {
		log("MSG", "Logger module is loaded");
	} else {
		// При отсутствии файла и отсутствии возможности прочитать файл, создание файла.
		v_templates_create_logger_log();
		log("WARN", "Logger module. logger.log file not found"); // Сообщение в лог уровня warn. Нет файла.
	}
	fin.close(); // Закрытие файла.
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла settings.ini
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла settings.ini
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_settings_ini() {
	ifstream fin(radix::settings_list);
	// Если файл есть и его можно открыть
	if (fin.is_open()) {
		log("LOG", "Settings module is loaded");
	} else {
		// При отсутствии файла и отсутствии возможности прочитать файл, создание файла.
		v_templates_create_settings_ini();
		log("WARN", "Settings module. settings.ini file not found"); // Сообщение в лог уровня warn. Нет файла.
	}
	fin.close(); // Закрытие файла.
}

///////////////////////////////////////////////////////////////////////////////
//	Проверка файла rules.txt
///////////////////////////////////////////////////////////////////////////////
/**
	Проверка файла rules.txt
	
	При отсутствии файла создаёт его
	
	При наличии файла пропуск
	
	Всё логируется
*/
void v_initialization_rules_txt() {
	ifstream fin(radix::rules_list);
	// Если файл есть и его можно открыть
	if (fin.is_open()) {
		log("LOG", "Rules module is loaded");
	} else {
		// При отсутствии файла и отсутствии возможности прочитать файл, создание файла.
		v_templates_create_rules_txt();
		log("WARN", "Rules module. rules.txt file not found"); // Сообщение в лог уровня warn. Нет файла.
	}
	fin.close(); // Закрытие файла.
}