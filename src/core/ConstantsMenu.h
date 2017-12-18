/**
	\file
	\brief Заголовочный файл с константами меню.
	\author SavaLione	
*/
#ifndef CONSTANTSMENU_H
#define CONSTANTSMENU_H

#include <string>
namespace menu {
    /** Отступ между пунктами меню. */
    const std::string indentation = "       ";
	
    /** Левая скобка и отступ слева. */
    const std::string frame_left = "       <";
	
    /** Правая скобка и отступ справа. */
    const std::string frame_right = ">       ";

    /** Размер шкалы модуля загрузки. */
    const size_t loading_size = 25;
	
    /** Включение задержки, для проверки работоспособности модуля загрузки. */
    const bool loading_check_module = false;
	
    /** Пауза в мс для проверки работоспособности модуля загрузки .*/
    const size_t loading_check_module_sleep = 1000;
	
    /** Модуль загрузки. Левая скобка. */
    const char loading_left = '[';
	
    /** Модуль загрузки. Правая скобка. */
    const char loading_right = ']';
	
    /** Модуль загрузки. Шкала прогресса. */
    const char loading_progress = '|';
	
    /** Модуль загрузки. Значение после шкалы прогресса. */
    const char loading_indenting = ' ';
}

#endif // CONSTANTSMENU_H