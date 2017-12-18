/**
	\file
	\brief Заголовочный файл с логотипами.
	\example logo.cpp
	\author SavaLione	
*/
#ifndef LOGO_H
#define LOGO_H

#include <string>
namespace logo {
    /** Линия. 
        \code
            ===========================
        \endcode
    */
    const std::string border = "===========================\n";
	
    /** Помощь по управлению.
        \code
            ==== <- use to move -> ====
        \endcode
    */
    const std::string little_help = "==== <- use to move -> ====\n";
	
    /** Вопрос о согласии с лицензионным соглашением.
        \code
            Do you agree with the license?
        \endcode
    */
    const std::string license = "Do you agree with the license?\n";
	
    /** Отступ. Используется в связке с move.
        \code
            {       }<- use to move ->
        \endcode
    */
    const std::string move_indentation = "       ";
	
    /** Помощь по управлению.
        \code
            <- use to move ->
        \endcode
    */
    const std::string move = "<- use to move ->\n";
	
    /** Логотип программы
        \code
             _____           _ _      
            |  __ \         | (_)     
            | |__) |__ _  __| |___  __
            |  _  // _` |/ _` | \ \/ /
            | | \ \ (_| | (_| | |>  < 
            |_|  \_\__,_|\__,_|_/_/\_\

        \endcode
    */
    const std::string radix = "  _____           _ _      \n |  __ \\         | (_)     \n | |__) |__ _  __| |___  __\n |  _  // _` |/ _` | \\ \\/ /\n | | \\ \\ (_| | (_| | |>  < \n |_|  \\_\\__,_|\\__,_|_/_/\\_\\ \n";
	
    /** Логотип загрузки
        \code
             _                     _ 
            | |                   | |
            | |     ___   __ _  __| |
            | |    / _ \ / _` |/ _` |
            | |___| (_) | (_| | (_| |
            |______\___/ \__,_|\__,_|  

        \endcode
    */
    const std::string loading = "  _                     _ \n | |                   | |\n | |     ___   __ _  __| |\n | |    / _ \\ / _` |/ _` |\n | |___| (_) | (_| | (_| |\n |______\\___/ \\__,_|\\__,_|\n";
	
    /** Выход
        \code
             ______      _ _   
            |  ____|    (_) |  
            | |__  __  ___| |_ 
            |  __| \ \/ / | __|
            | |____ >  <| | |_ 
            |______/_/\_\_|\__|

        \endcode
    */
    const std::string exit = "  ______      _ _   \n |  ____|    (_) |  \n | |__  __  ___| |_ \n |  __| \\ \\/ / | __|\n | |____ >  <| | |_ \n |______/_/\\_\\_|\\__|\n";
	
    /** Вопрос о продолжении выполнения программы.
        \code
            Continue?
        \endcode
    */
    const std::string s_continue = "Continue?\n";
	
    /** Инструкция к программе.
        \code
					Manual
			0) If necessary, install the drivers from the assets/Drivers_Universal folder.
            1) Put the file recovery.img in the root of the program.
			2) Put the file su.zip in the root of the program.
			3) Continue.
        \endcode
    */
    const std::string s_manual = "		Manual\n0) If necessary, install the drivers from the assets/Drivers_Universal folder.\n1) Put the file recovery.img in the root of the program.\n2) Put the file su.zip in the root of the program.\n3) Continue.\n";
	
    /** Продолжить выполнение программы по нажатию любой клавиши.
        \code
           Press any key to continue.
        \endcode
    */
    const std::string enter = "Press any key to continue.";
}

#endif // LOGO_H