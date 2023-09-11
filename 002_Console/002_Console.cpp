// *************************************************************
// CONSOLE.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

// color your text in Windows console mode
// colors are 0=black 1=blue 2=green and so on to 15=white  
// colorattribute = foreground + background * 16
// to get red text on yellow use 4 + 14*16 = 228
// light red on yellow would be 12 + 14*16 = 236
// a Dev-C++ tested console application by  vegaseat  07nov2004

#include <iostream>
#include <windows.h>   // WinApi header

using namespace std;    // std::cout, std::cin

int main()
{
	HANDLE  hConsole;
	int k;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	
	cout << "\n********** SET CONCOLE **********\n" << endl;

	setlocale(LC_CTYPE, "rus");		// Кодировка Russian
	SetConsoleCP(1251);				// Кодировка для ввода win-cp1251
	SetConsoleOutputCP(1251);		// Кодировка для вывода на консоль - 1251  

	// you can loop k higher to see more color choices
	for (k = 1; k < 255; k++)
	{
		// pick the colorattribute k you want
		SetConsoleTextAttribute(hConsole, k);
		cout << k << " I want to be nice today!" << endl;
	}

	SetConsoleTextAttribute(hConsole, 7);
	cout << "\n\n Press any key... \n";
	cin.get(); // Wait
	return 0;
}