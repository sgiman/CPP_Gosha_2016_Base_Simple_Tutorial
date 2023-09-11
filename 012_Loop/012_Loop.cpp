// *************************************************************
// Loop.cpp
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

	int counter, vrand;

	cout << "\n********** FOR **********\n" << endl;
	cout << " VRAND: " << endl;

	for (int i = 0; i < 10; i++) {
		vrand = 1 + rand() % 80;				/* diapazon: 1 - 80 */
		cout << " " << vrand;
	}

	cout << "\n\n COUNTER: " << endl;

	for (int counter = 1; counter <= 10; counter++) {
		cout << " " << counter;
	}

	cout << endl;

	for (counter = 10; counter > 0; counter--) {
		cout << " " << counter;
	}

	cout << endl;

	for (counter = 10; counter >= 0; counter -= 2) {
		cout << " " << counter;
	}

	cout << endl;

	for (counter = 0; counter < 10; counter++) {
		cout << " " << counter;
	}

	cout << endl;

	cout << "\n********** WHILE **********\n" << endl;
	int i = 0;
	while (i < 20) {
		cout << " " << i;
		i++;
	}
	cout << endl;
	while (i > 0) {
		cout << " " << i;
		i /= 3;
	}

	cout << endl;

	cout << "\n********** DO-WHILE **********\n" << endl;
	int j = 0;
	do {
		cout << " " << j;
		j++;
	} while (j < 0);

	cout << endl;

	cout << "\n********** CONTINUE-BREAK **********\n" << endl;

	cout << " BREAK:" << endl;
	for (int counter = 1; counter <= 10; counter++) {
		cout << " " << counter;
		if (counter % 5 == 0)
			break;
	}

	cout << endl;
	cout << " CONTINUE:" << endl;
	for (int counter = 1; counter <= 10; counter++) {
		if (counter % 5 == 0)
			continue;
		cout << " " << counter;
	}


	cout << endl;
	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}

