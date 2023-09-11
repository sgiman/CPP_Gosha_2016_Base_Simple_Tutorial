// TEST.cpp : Defines the entry point for the console application.
// *************************************************************
// TEST.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>

using namespace std;

int main(int arc, char* argv[])
{

	printf("\n************* C++ ************\n");
	cout << "Hello World!" << endl;
	cout << "\n************* END ************\n";

	cout << "\nRAND: " << endl;
	for (int i = 0; i <= 10; i++) {
		cout << 1 + rand() % 100 << " ";
	}
	cout << endl;

	cout << "\ni+100: " << endl;
	for (int i = 0; i <= 10; i++) {
		cout << i + 100 << " ";
	}

	printf("\n\nPress any key");
	getchar();

	return 0;
}