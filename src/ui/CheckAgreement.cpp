/**
	\file
    \brief Модуль проверки согласия пользователя с правилами.
	\example checkagreement.cpp
	\author SavaLione
*/
#include <iostream>
#include <conio.h>
#include <string>

#include "..\core\Color.h"
#include "..\core\Logo.h"
#include "..\core\ConstantsMenu.h"
#include "..\io\RulesList.h"

using namespace std;

/** Переключение пунктов меню
	\param[in] choice выбор
*/
void v_checkagreement_choice(size_t choice);

/** Переключение пунктов меню
	\param[in] choice выбор
*/
void v_checkagreement_choice(size_t choice){
	// Очистка экрана консоли
    system("cls");
	// Вывод пользовательского соглашения в консоль
    cout << s_ruleslist() << endl;
	// Вывод вопроса в консоль. Do you agree with the license?
    cout << logo::license;
    /*
		Массив string с пунктами меню.
		2 пункта.
			Yes - пользователь согласен с условиями программы, продолжить выполнение программы
			No - пользователь не согласен с условиями программы, выход из программы.
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

/** Вызов модуля проверки согласия пользователя с правилами.
    \return 0 - пользователь не согласен с условиями программы, выход из программы. 1 - пользователь согласен с условиями программы, запуск программы.
*/
int i_checkagreement(){
	// Переменная для отслеживания выбранного пункта меню. Выбор первого элемента меню.
    size_t choice = 1;
	bool menu = true;
    v_checkagreement_choice(choice);
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
                v_checkagreement_choice(choice);
                break;
            }
            default: {
                choice = 1;
                v_checkagreement_choice(choice);
                break;
            }
		}
    }
    return 0;
}