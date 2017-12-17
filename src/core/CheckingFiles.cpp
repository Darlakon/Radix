/**
	\file
    \brief Модуль проверки файлов для рутирования телефона.
	
	Модуль проверяет наличие файлов для рутирования телефона.
	
	\author SavaLione
*/
#include <string>
#include <io.h>

#include "..\core\Constants.h"
#include "..\core\CheckingFiles.h"
#include "..\io\Logger.h"
#include "..\ui\LoadScale.h"
#include "..\ui\QueryMenu.h"

/** Вызов модуля проверки файла.
    \return наличие файла.
*/
bool b_file_exists(const char *ch_file_name){
	return access(ch_file_name, 0) != -1;
}

int i_checking_files() {
	std::string s_recovery_file = radix::recovery_file, s_su_file = radix::su_file;
	v_loadscale(0); // Шкала загрузки 0 положение
	if (b_file_exists(radix::recovery_file)) {
		s_recovery_file += radix::found;
		log("LOG", s_recovery_file);
	} else {
		s_recovery_file += radix::not_found;
		log("WARN", s_recovery_file);
		if (i_querymenu(s_recovery_file) == 1) {
			log("WARN", radix::ch_user_continue); // ch_user_not_continue
		} else {
			log("LOG", radix::ch_user_not_continue);
			return 0;
		}
	}
	v_loadscale(12); // Шкала загрузки 12 положение
	if (b_file_exists(radix::su_file)) {
		s_su_file += radix::found;
		log("LOG", s_su_file);
	} else {
		s_su_file += radix::not_found;
		log("WARN", s_su_file);
		if (i_querymenu(s_su_file) == 1) {
			log("WARN", radix::ch_user_continue);
		} else {
			log("LOG", radix::ch_user_not_continue);
			return 0;
		}
	}
	v_loadscale(24); // Шкала загрузки 24 положение
	return 1;
}