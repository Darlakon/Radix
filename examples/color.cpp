#include "..\core\Color.h"

int main() {
	/// Blue text and White background
	v_set_color(BLUE, WHITE);
	
	/// GREEN text and BLACK background
	v_set_color(GREEN);
	
	/// Standard text and background
	v_set_color();
	
	return 0;
}