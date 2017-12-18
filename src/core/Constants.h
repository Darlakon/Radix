/**
	\file
	\brief Заголовочный файл с константами.
	\example constants.h
	\author SavaLione	
*/
#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace radix {
	/** 
	    Размер буфера.
	 	В основном используется для чтения строк из файла.
	 */
	const size_t buff_size = 32;
	
	/** 
	    Размер буфера для чтения правил программы.
	 	В основном используется для чтения правил программы.
	 */
	const size_t buff_ruleslist = 256;

	/** Файл с выводом логера. */
	const char logger_list[] = "logger.log";
	
	/** Файл с настройками программы. */
	const char settings_list[] = "settings.ini";
	
	/** Файл с пользовательским соглашением. */
	const char rules_list[] = "rules.txt";

	/** Путь к прошивкам. */
	const char firmware_way[] = "\\assets\\firmware\\";
	
	/** Путь к дополнительным файлам программы. */
	const char patch[] = "\\assets\\";

	/** Расширение прошивок. */
	const char expansion_file[] = ".zip";
	
	/** Файл с прошивкой. */
	const char recovery_file[] = "recovery.img";
	
	/** Файл с su для root. */
	const char su_file[] = "su.zip";
	
	/** Сообщение о том, что файл не найден. */
	const char not_found[] = " not found.";
	
	/** Сообщение о том, что файл не найден. */
	const char found[] = " found.";
	
	/** Сообщение о том, что пользователь продолжил выполнение программы, невзирая на ошибку. */
	const char ch_user_continue[] = "The user continued the program despite the error.";
	
	/** Сообщение о том, что пользователь не продолжил выполнение программы, невзирая на ошибку. */
	const char ch_user_not_continue[] = "The user did not continue the program despite the error.";
}

#endif // CONSTANTS_H