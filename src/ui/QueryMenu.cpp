/**
	\file
    \brief Модуль сообщения с вопросом для пользователя.
	\example querymenu.cpp
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

void v_querymenu_choice(size_t choice, string s);

/** Переключение пунктов меню
	\param[in] choice выбор
	\param[in] s вопрос
*/
void v_querymenu_choice(size_t choice, string s){
	// Очистка экрана консоли
    system("cls");
	cout << s << endl;
	// Вывод вопроса в консоль.  Continue?
    cout << logo::s_continue;
    /*
		Массив string с пунктами меню.
		2 пункта.
			Yes - пользователь готов продолжить, продолжить.
			No - пользователь не готов продолжить, выход из программы.
	*/
	string point[3] = { "Yes" , "No", " " };
	// Цикл для отслеживания выбранного пункта меню.
    for (size_t sz = 1; sz < 4; sz++) {
		if (sz == choice) {
			cout << menu::frame_left;
		} else if (sz - 1 == choice) {
			cout << menu::frame_right;
		} else {
			cout << menu::indentation;
		}
		cout << point[sz - 1];
	}
	// Перенос строки.
	cout << endl;
	// Вывод отступа. Используется в связке с move. {       }<- use to move ->
    cout << logo::move_indentation;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK, WHITE);
	// Вывод помощи по управлению. <- use to move ->
    cout << logo::move;
	// Установить цвет текста - серый, цвет заднего фона - чёрный.
    v_set_color(LIGHTGRAY, BLACK);
}

/** Вызов модуля сообщения с вопросом для пользователя.
	\param[in] s вопрос
    \return 0 - пользователь не готов продолжить, выход из программы. 1 - пользователь готов продолжить, продолжить.
*/
int i_querymenu(string s){
	// Переменная для отслеживания выбранного пункта меню. Выбор первого элемента меню.
    size_t choice = 1;
	bool menu = true;
    v_querymenu_choice(choice, s);
    while (menu) {
        size_t key = _getch();
		switch (key) {
            case 13: {
                switch(choice) {
                    case 1: {
                        return 1;
                        break;
                    }
                    case 2: {
                        menu = false;
                        return 0;
                        break;
                    }
                    default: {  break; }
                }
            }
            case 32: {
                switch(choice) {
                    case 1: {
                        return 1;
                        break;
                    }
                    case 2: {
                        menu = false;
                        return 0;
                        break;
                    }
                    default: {  break; }
                }
            }
            case 27: {
                return 0;
                break;
            }
            case 224: {
                key = _getch();
                if (key == 77) {
				    if (choice != 2) {
				    	choice++;
				    } else {
				    	choice = 1;
				    }
			    }
			    if (key == 75) {
				    if (choice != 1) {
				        choice--;
				    } else {
				       	choice = 2;
				    }
			    }
                if (key == 72) {
				    if (choice != 2) {
				    	choice++;
				    } else {
				    	choice = 1;
				    }
			    }
                if (key == 80) {
				    if (choice != 1) {
				    	choice--;
				    } else {
				    	choice = 2;
				    }
			    }
                v_querymenu_choice(choice, s);
                break;
            }
            default: {
                choice = 1;
                v_querymenu_choice(choice, s);
                break;
            }
		}
    }
    return 0;
}