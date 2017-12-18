/**
	\file
	\brief Заголовочный файл с вызовом модуля инициализации
	
	Вызов:
		\code
		void v_initialization();
		\endcode
		
	\author SavaLione
*/
#ifndef INITIALIZATION_H
#define INITIALIZATION_H

/**
	Функция проверяет наличие 3 стандартных файлов программы
	
		logger.log
		
		rules.txt
		
		settings.ini
*/
void v_initialization();

#endif // INITIALIZATION_H