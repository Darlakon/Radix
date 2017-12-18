/**
	\file
	\brief Главный файл программы
	\example radix.cpp
	\author SavaLione	
*/
#include "Initialization.h"

#include "..\ui\MainMenu.h"
#include "..\ui\CheckAgreement.h"
#include "..\ui\Manual.h"
#include "..\ui\Exit.h"
#include "..\io\Logger.h"

/** Запуск программы */
void Radix() {
	// Запуск модуля инициализации
	v_initialization();
	// Проверка. Согласен ли пользователь с условиями программы.
	if (i_checkagreement()) {
		v_manual();
		/* 
			Вызов модуля главного меню.
			Если модуль в результате работы вернул код 0, то он корректно завершил свою работу.
			Если модуль в результате работы вернул код отличный от 0, то в работе модуля произошла ошибка.
			
		*/
		if (i_mainmenu() == 0) {
			// Вывод сообщения в консоль о том, что модуль корректно завершил свою работу.
			log("LOG", "Main Menu Module correctly completed work.");
		} else {
			// Вывод сообщения в консоль о том, что в работе модуля произошла ошибка.
			log("WARN", "Main Menu Module error");
		}
	} else {
		// Вывод сообщения в консоль о том, что пользователь не согласен с условими программы.
		log("WARN", "User does not agree with the terms of the program.");
	}
	// Вывод ascii графики в консоль с сообщением о выходе из программы.
	v_exit();
}