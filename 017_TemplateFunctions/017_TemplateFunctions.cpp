// *************************************************************
// TemplateFunctions.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 
#include <clocale>
#include <Windows.h>

using namespace std;

// --- ARRAY FUNCTIONS ---
// parameters: ccылка на массив - array, размерность массива - i
// "Int" Array
/*--------------------------------------------------------------------
void printArr (const int * array, int i) {
	for (int j = 0; j < i; j++)
		cout << array[j] << " ";
	cout << endl;
}

// "Float" Array
void printArr (const float * array, int i) {
	for (int j = 0; j < i; j++)
		cout << array[j] << " ";
	cout << endl;
}

// "Double" Array
void printArr (const double * array, int i) {
	for (int j = 0; j < i; j++)
		cout << array[j] << " ";
	cout << endl;
}

// "Char" Array
void printArr (const char * array, int i) {
	for (int j = 0; j < i; j++)
		cout << array[j] << " ";
	cout << endl;
}
--------------------------------------------------------------------*/

// T E M P A T E   F U N C T I O N
template < typename T1, typename T2 >
T2 printArr(const T1* array, int i) {
	int count = 0;
	for (int j = 0; j < i; j++) {
		cout << array[j] << " ";
		count++;
	}
	cout << endl;
	return count;
}


int main(int arc, const char* argv[])
{
	HANDLE  hConsole;

	setlocale(LC_CTYPE, "rus");		// Кодировка Russian
	SetConsoleCP(1251);				// Кодировка для ввода win-cp1251
	SetConsoleOutputCP(1251);		// Кодировка для вывода на консоль - 1251  
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\n********** TEMPLATE FUNCTIONS **********\n" << endl;
	SetConsoleTextAttribute(hConsole, 11);


	// Cosntants
	const int iSize = 3, fSize = 2, dSize = 3, cSize = 5;

	// -- Arrays --
	int i_arr[iSize] = { 23, 45, 78 };
	float f_arr[fSize] = { 12.2, 67.5 };
	double d_arr[dSize] = { 3.345, 7.567, 9.023 };
	char c_arr[cSize] = { "HI!!" };

	cout << "\nМассив с типом данных int: ";
	cout << " Количество элементов (int): " << printArr<int, int>(i_arr, iSize) << endl;
	//printArr (i_arr, iSize);

	cout << "\nМассив с типом данных float: ";
	cout << " Количество элементов (float): " << printArr<float, int>(f_arr, fSize) << endl;
	//printArr (f_arr, fSize);

	cout << "\nМассив с типом данных double: ";
	cout << " Количество элементов (double): " << printArr<double, int>(d_arr, dSize) << endl;
	//printArr (d_arr, dSize);

	cout << "\nМассив с типом данных char: ";
	cout << " Количество элементов (char): " << printArr<char, int>(c_arr, cSize) << endl;
	//printArr (c_arr, cSize);


	SetConsoleTextAttribute(hConsole, 15);
	cout << "\n\n Press any key... \n";
	cin.get();
	return 0;
}
