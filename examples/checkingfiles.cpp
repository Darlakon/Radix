#include "..\core\CheckingFiles.h"

int main() {
	const char ch_radix_exe[] = "Radix.exe";
	if (b_file_exists(ch_radix_exe[])) {
		// File found
	} else {
		// File not found
	}
	
	if (i_checking_files() == 1) {
		// Successful file verification
	} else {
		// Unsuccessful file check.
	}
	return 0;
}