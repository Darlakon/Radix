/**
	\file
	\brief Заголовочный файл с подключением модуля сообщения с вопросом для пользователя.
	\author SavaLione	
*/
#ifndef QUERYMENU_H
#define QUERYMENU_H

#include <string>

/** Вызов модуля сообщения с вопросом для пользователя.
	\param[in] s вопрос
    \return 0 - пользователь не готов продолжить, выход из программы. 1 - пользователь готов продолжить, продолжить.
*/
int i_querymenu(std::string s);

#endif // QUERYMENU_H