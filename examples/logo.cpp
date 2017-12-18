#include "..\core\Logo.h"

#include <iostring>

using namespace std;

int main() {
	// ===========================
	cout << logo::border << endl;
	
	//  ==== <- use to move -> ====
	cout << logo::little_help << endl;
	
	//  Do you agree with the license?
	cout << logo::license << endl;
	
	// {       }<- use to move ->
	cout << logo::move_indentation << endl;
	
	// <- use to move ->
	cout << logo::move << endl;
	
	/*
         _____           _ _      
        |  __ \         | (_)     
        | |__) |__ _  __| |___  __
        |  _  // _` |/ _` | \ \/ /
        | | \ \ (_| | (_| | |>  < 
        |_|  \_\__,_|\__,_|_/_/\_\
	*/
	cout << logo::radix << endl;
	
	/*
         _                     _ 
        | |                   | |
        | |     ___   __ _  __| |
        | |    / _ \ / _` |/ _` |
        | |___| (_) | (_| | (_| |
        |______\___/ \__,_|\__,_|  
	*/
	cout << logo::loading << endl;
	
	/*
         ______      _ _   
        |  ____|    (_) |  
        | |__  __  ___| |_ 
        |  __| \ \/ / | __|
        | |____ >  <| | |_ 
        |______/_/\_\_|\__|
	*/
	cout << logo::exit << endl;
	return 0;
}