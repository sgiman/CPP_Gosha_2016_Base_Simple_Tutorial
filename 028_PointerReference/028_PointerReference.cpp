// PointerReference.cpp : Defines the entry point for the console application.
//

// *************************************************************
// PointerReference.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
//**************************************************************

#include <iostream> 

using namespace std;

int main(int arc, const char* argv[])
{
	cout << "\n********** POINTER AND REFERENCE **********" << endl;

	cout << "\n********** CONSTANT **********" << endl;
	const float pi = 3.14;			// Костантанта
	cout << pi << endl;

	cout << "\n********** POINTER **********" << endl;
	int value = 8;
	int* ptrvalue = &value;			// Указатель 
	int** ptr_ptrvalue = &ptrvalue; // Указатель на указатель 
	cout << *ptrvalue << endl;
	cout << &value << " - " << ptrvalue << endl; // Aдрес
	cout << endl;
	cout << "Input **ptr_ptrvalue: ";
	cin >> **ptr_ptrvalue;
	cout << "value = " << value << endl;

	cout << "\n********** REFERENCE **********" << endl;
	int& ref = value;
	cout << "Input ref: ";
	cin >> ref;
	cout << value << " - " << ref << endl;


	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}
