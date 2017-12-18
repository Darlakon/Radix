/**
	\file
    \brief Главный файл программы
	\author SavaLione
*/

#include "Radix.h"
#include "..\io\Logger.h"

/**
	\return Код завершения программы
	Вызов программы компилятором
*/
int main() {
	log("LOG", "----------------------------[RUN RADIX]----------------------------");
	// Запуск программы
	Radix();
	log("LOG", "Exit");
	return 0;
}