// This program prints out Hello World!.
#include <iostream> // includes a standard library
using namespace std;
#include "std_lib_facilities.h"; // includes a custom header file


int main()
{
	cout << "Hello World!\n";
	keep_window_open(); // wait for character to be entered
	return 0;
}