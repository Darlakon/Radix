/**
\file
\brief Заголовочный файл с подключением модуля работы с adb.
\author Darlakon
*/
#ifndef ADB_SLAVE_H
#define ADB_SLAVE_H

/** 
    Вызов модуля проверки состояния устройства.
*/
void adb_state();

/**
    Вызов модуля установки кастомной рекавери.
*/
void adb_flash();

/**
    Вызов модуля получения root-прав.
*/
void adb_root();

#endif // ADB_SLAVE_H
