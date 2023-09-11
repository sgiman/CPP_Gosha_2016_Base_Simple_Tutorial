// *************************************************************
// Rand.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 
#include <string> 

using namespace std;

int main(int arc, const char* argv[])
{
	cout << "\n********** RANDOM GENERATOR **********\n" << endl;
	//cout << "1-random number = " << 1 + rand() % 80 << endl; /* diapazon: 1 - 80 */

	string name_1, name_2;

	/*
	cout << "Enter yur name_1: ";
	getline(cin, name_1);
	if (name_1.length() != 0)
		cout << "Your name is " << name_1;
	else
		cout << "Error";
	*/

	cout << "Enter yur name_1: ";
	getline(cin, name_1);

	cout << "Enter yur name_2: ";
	getline(cin, name_2);

	if (name_1 == name_2)
		cout << "equal";
	else
		cout << "not equal";

	cout << "\n\n*********************\n";
	cout << " " + name_1 + " " + name_2;
	cout << "\n*********************";

	cout << "\n\nPress any key... \n";
	cin.get();
	return 0;

}


