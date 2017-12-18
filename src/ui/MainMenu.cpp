/**
	\file
    \brief Модуль вывода главного меню программы.
	\example mainmenu.cpp
	\author SavaLione
*/
#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "..\core\Color.h"
#include "..\core\ConstantsMenu.h"
#include "..\core\Logo.h"
#include "..\core\ADB_slave.h"
#include "..\core\CheckingFiles.h"

using namespace std;

void v_menu_choice(size_t choice);
void root();

/** Переключение пунктов меню
	\param[in] choice выбор
*/
void v_menu_choice(size_t choice){
	// Очистка экрана консоли
    system("cls");
	// Установить цвет текста - белый, цвет заднего фона - чёрный.
    v_set_color(BLACK, WHITE);
	// Вывод линии в консоль. ===========================
    cout << logo::border;
	// Установить цвет текста - зелёный, цвет заднего фона - чёрный.
    v_set_color(GREEN, BLACK);
	// Ascii графика. Вывод логотипа в консоль.
    cout << logo::radix;
	// Перенос строки.
    cout << endl;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK, WHITE);
	// Справка по управлению. ==== <- use to move -> ====
    cout << logo::little_help;
	// Установить цвет текста - белый, цвет заднего фона - чёрный.
    v_set_color(WHITE, BLACK);
	// Массив string с пунктами меню. 2 пункта Root - рутировать устройство и Exit - выход из программы.
    string point[3] = { "Root" , "Exit", " " };
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
}

/** Вызов модуля главного меню.
    \return 0 - Выход из программы.
*/
int i_mainmenu(){
	// Переменная для отслеживания выбранного пункта меню. Выбор первого элемента меню.
    size_t choice = 1;
	bool menu = true;
    v_menu_choice(choice);
    while (menu) {
        size_t key = _getch();
		switch (key) {
            case 13: {
                switch(choice) {
                    case 1: {
                        root();
						return 0;
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
                        root();
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
                v_menu_choice(choice);
                break;
            }
            default: {
                choice = 1;
                v_menu_choice(choice);
                break;
            }
		}
    }
    return 0;
}

/** Пункт рутирования телефона. */
void root() {
	if (i_checking_files()) {
	// Очистка экрана консоли
	system("cls");
	adb_state();
	adb_flash();
	adb_root();
	// Очистка экрана консоли
	system("cls");
	} else {
		// Выход.
	}
}