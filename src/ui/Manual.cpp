/**
	\file
    \brief Модуль инструкции.
	\example manual.cpp
	\author SavaLione
*/
#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "..\core\Color.h"
#include "..\core\Logo.h"
#include "..\core\ConstantsMenu.h"

using namespace std;

/**
	Вызов модуля инструкции.
	Вывод инструкции в консоль.
*/
void v_manual(){
	bool menu = true;
	system("cls");
	cout << logo::s_manual;
	cout << logo::move_indentation << logo::move_indentation;
	cout << endl;
	cout << logo::move_indentation;
	v_set_color(BLACK, WHITE);
	cout << logo::enter;
	v_set_color(WHITE, BLACK);
	cout << endl;
    while (menu) {
        size_t key = _getch();
		switch (key) {
            default: {
				menu = false;
                break;
            }
		}
    }
}