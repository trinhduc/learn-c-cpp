#include <iostream>
#include "owner-strlen.h"

using namespace std;

int main (int argc , char *argv[])
{
	char chuoi [] = "Bonjour";
	long length_str = 0;
	length_str = do_dai_chuoi(chuoi);

	SAY_HI()

	cout << "chuoi: " << chuoi << endl;
	cout << "*chuoi: " << *chuoi << endl; // Alway return first element int array
	cout << "&chuoi: " << &chuoi << endl;
	cout << "This string " << chuoi << " have length is: " << length_str << endl;
	cout << "error at line " << __LINE__ << " in file " << __FILE__ << endl;
	cout << "This file compilation on " <<__DATE__ << " at " << __TIME__ << endl;
	return 0;
}

long do_dai_chuoi(char *chuoi)
{
	long number_char =0;
	char present_char = 0;
	do{
		present_char = chuoi[number_char];
		number_char++;
	}while(present_char != '\0');
	number_char--;

	return number_char;
}