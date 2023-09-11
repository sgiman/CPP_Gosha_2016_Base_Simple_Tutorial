// *************************************************************
// 004_MatOP.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>		
#include <cmath>

using namespace std;

int value = 15;
void func();

int main(int arc, const char* argv[])
{

	cout << "\n*********** MATH OPERATION **********" << endl;
	cout << " VALUE = " << value << endl;
	int value = 10;
	cout << " MAIN: ::value = " << ::value << endl;			// Global
	cout << " MAIN: value = " << value << endl;				// Local
	func();

	cout << "\n*********** MATH FUNCTIONS **********" << endl;
	cout << " Pow:\t" << pow(2, 2) << endl;
	cout << " Abs:\t" << abs(-23) << endl;
	cout << " Sin:\t" << sin(10) << endl;
	cout << " Cos:\t" << cos(10) << endl;
	cout << " Sqrt:\t" << sqrt(16) << endl;
	cout << " Ceil:\t" << ceil(23.67) << endl;
	cout << " Floor:\t" << floor(23.67) << endl;
	cout << " Exp:\t" << exp(1) << endl;
	cout << " Log:\t" << log(4) << endl;
	cout << " Log10:\t" << log10(4) << endl;


	// EXIT
	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}

void func() {
	cout << " FUNC: value = " << value << endl;
}