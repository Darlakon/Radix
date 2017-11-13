/**
	\file
    \brief Главный файл программы
	\author SavaLione
*/
//-----------------------------------------------------------------------------
#include <Windows.h>
#include <iostream>
#include <cstring>

#include <string>
#include "..\io\Settings.h"

#include "../io/Download.h"

using namespace std;
//-----------------------------------------------------------------------------
#include "Radix.h"

/**
	\return Код завершения программы
	Вызов программы компилятором
*/
int main() {
	Radix(); ///< Запуск программы
	///-----------------------------------------------------------------------------
	v_download_file("0123");
	system("pause"); ///< Пауза до нажатия любой клавиши
	///-----------------------------------------------------------------------------
	return 0;
}