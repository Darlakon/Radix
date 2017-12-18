/**
	\file
    \brief Модуль вывода шкалы загрузки.
	\example loadscale.cpp
	\author SavaLione
*/
#include <iostream>
#include <windows.h>

#include "..\core\Color.h"
#include "..\core\Logo.h"
#include "..\core\ConstantsMenu.h"

using namespace std;

/** Переключение пунктов меню
	\param[in] position значение до которого отрисовывать шкалу.
*/
void v_loadscale(size_t position) {
	// Очистка экрана консоли
    system("cls");
	// Установить цвет текста - белый, цвет заднего фона - чёрный.
    v_set_color(BLACK,WHITE);
	// Вывод линии в консоль. ===========================
    cout << logo::border;
	// Установить цвет текста - светло-сине-зелёный, цвет заднего фона - чёрный.
    v_set_color(LIGHTCYAN,BLACK);
    cout << logo::loading;
    cout << endl;
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK,WHITE);
    cout << menu::loading_left;
    for (size_t sz = 0; sz <= 25; sz++) {
        if (sz <= 9) {
			// Установить цвет текста - красный, цвет заднего фона - чёрный.
            v_set_color(RED);
        } else if ((sz > 9) && (sz <=18)) {
			// Установить цвет текста - жёлтый, цвет заднего фона - чёрный.
            v_set_color(LIGHTYELLOW);
        } else if (sz > 19) {
			// Установить цвет текста - зелёный, цвет заднего фона - чёрный.
            v_set_color(GREEN);
        }
        if (sz <= position) {
            cout << menu::loading_progress;
        } else {
            cout << menu::loading_indenting;
        }
    }
	// Установить цвет текста - чёрный, цвет заднего фона - белый.
    v_set_color(BLACK, WHITE);
    cout << menu::loading_right;
	// Сброс к стандартным настройкам цвета консоли.
    v_color_reset();
	// Перенос строки.
    cout << endl;
	// Тестирование работы модуля вывода шкалы загрузки.
    if (menu::loading_check_module) {
		// Пауза в мс.
        Sleep(menu::loading_check_module_sleep);
    }
}