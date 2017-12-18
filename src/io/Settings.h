/**
	\file
	\brief Заголовочный файл с подключением модуля настроек.
	\example settings.cpp
	\author SavaLione	
*/
#ifndef SETTINGS_H
#define SETTINGS_H

/** Парсинг параметров
	\param[in] ch_arr_value[] Значение, которое надо найти в файле
	\return Значение переменной
		true
		false
*/
bool b_settings(char ch_arr_value[]);

#endif // SETTINGS_H