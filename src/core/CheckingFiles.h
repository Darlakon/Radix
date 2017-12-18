/**
	\file
	\brief Заголовочный файл с вызовом модуля проверки файлов для рутирования телефона.
	
	Вызов:
		\code
		void v_checking_files();
		\endcode
		
	\author SavaLione
*/
#ifndef CHEKINGFILES_H
#define CHEKINGFILES_H

/** Вызов модуля проверки файла на наличие в папке.
	\param[in] ch_file_name Путь и файл, для проверки.
    \return наличие файла.
*/
bool b_file_exists(const char *ch_file_name);

/** Вызов модуля проверки файлов.
    \return 0 - неуспешная проверка файлов. 1 - успешная проверка файлов.
*/
int i_checking_files();

#endif // CHEKINGFILES_H