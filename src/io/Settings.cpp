/**
	\file
    \brief Модуль настроек. Парсит переменные в файлах
	\author SavaLione
*/
#include <fstream>
#include <string>

#include "../core/Constants.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Проверка значения переменной ch_arr_value в файле settings.ini
///////////////////////////////////////////////////////////////////////////////
/** Парсинг параметров
	\param[in] ch_arr_value[] Значение, которое надо найти в файле
	\return Значение переменной
		true
		false
*/
bool b_settings(char ch_arr_value[]) {
	string s_value(ch_arr_value), s_true = (s_value + " = true"), s_false = (s_value + " = false");
	// Буфер в (radix::buff_size) символа.
	char buff[radix::buff_size];
	// Переменные для проверки начала и конца файла.
	bool b_end = true, b_start = false;
	// Открытие файла с настройками (radix::settings_list).
	ifstream fin(radix::settings_list);
	// Если файл есть и его можно открыть.
	if (fin.is_open()) {
		// Цикл до конца файла. Конец файла задаётся словом [END]
		while (b_end) {
			// Помещение строки из файла в буфер
			fin.getline(buff, radix::buff_size);
			// Создание строки s с буфером.
			string s_buff(buff);
			// Проверка. Игнорирование всего, что стоит не в блоках [START] и [END]
			if (strcmp(buff, "[START]") == 0) {
				// Поиск блока [START] Если блок найден, то можно читать константы из файла.
				b_start = true;
			} else if (strcmp(buff, "[END]") == 0) {
				// Поиск блока [END] Если блок найден, то прекратить читать константы из файла и выйти из программы.
				b_end = false, b_start = false;
			}
			// Поиск констант в файле.
			if (s_buff == s_true) {
				// Если искомая строка найдена, то закрытие файла и возвращение значения.
				fin.close();
				return true;
			} else if (s_buff == s_false) {
				// Если искомая строка найдена, то закрытие файла и возвращение значения.
				fin.close();
				return false;
			}
		}
	}
	// Закрытие файла. Если строка не найдена
	fin.close();
	// Возвращение значения true, если строка не найдена.
	return true;
}