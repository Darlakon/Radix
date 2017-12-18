/**
	\file
    \brief Модуль чтения правил.
	\example ruleslist.cpp
	\author SavaLione
*/
#include <fstream>
#include <string>

#include "../core/Constants.h"

using namespace std;

/** Чтение правил программы
	\return строка с правилами
*/
string s_ruleslist() {
	/*
		Создание двух переменных тип строка.
		s_buff - буфер, в который будет помещаться строка из файла.
		s_ret - строка, которая будет возвращена.
	*/
    string s_buff = "", s_ret = "";
	// Открытие файла с настройками (radix::rules_list).
    ifstream fin(radix::rules_list);
	// Если файл есть и его можно открыть.
    if (fin.is_open()) {
		// Цикл, который помещает в буфер строку из файла, до конца файла.
        while (getline(fin, s_buff)) {
			// Добавить к строке s_ret строку из файла и перенести строку.
            s_ret += s_buff += "\n";
        }
    }
	// Закрытие файла.
    fin.close();
	// Возвращение строки s_ret, в которой условия программы.
    return s_ret;
}