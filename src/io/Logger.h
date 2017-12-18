/**
	\file
	\brief Заголовочный файл с подключением модуля логирования.
	\author SavaLione	
*/
#ifndef LOGGER_H
#define LOGGER_H

#include <string>
/** Логирование сообщений в файл logger.log
	\param[in] level Уровень логирования
	\param[in] s Логируемая информация
*/
void log(std::string level, std::string s);

#endif // LOGGER_H