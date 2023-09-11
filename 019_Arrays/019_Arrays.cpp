// *************************************************************
// Arrays.cpp
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
	cout << "\n********** ARRAYS **********" << endl;

	int arr[] = { 22, 27, 35 };  // Одномерный

	/*
	int arr[3];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	*/

	for (int i = 0; i < 3; i++)
		cout << " " << arr[i];

	cout << endl;
	cout << "\n****************************\n";

	int arr_m[3][2] = { { 3, 4 }, { 1, 2 }, { 5, 7 } }; // Многомерный

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << " " << arr_m[i][j];
		}
		cout << endl;
	}

	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}
