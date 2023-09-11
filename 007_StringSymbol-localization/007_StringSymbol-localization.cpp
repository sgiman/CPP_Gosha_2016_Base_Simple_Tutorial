// *************************************************************
// StringSymbol.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 
#include <clocale>
#include <Windows.h>
// #include <string>

using namespace std;

int main(int arc, const char* argv[])
{
	setlocale(LC_CTYPE, "rus");		// Кодировка Russian
	SetConsoleCP(1251);				// Кодировка для ввода win-cp1251
	SetConsoleOutputCP(1251);		// Кодировка для вывода на консоль - 1251  

	cout << "\n********** STRINGS & SYMBOLS **********" << endl;
	cout << " Привет!";

	char string1[6] = "Hello";
	char string2[6] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // C нуль терминатором 
	char string3[] = "Hello World!";

	char str[500];
	cout << "Введите строку: ";
	gets_s(str);
	cout << str << endl;

	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}

// cppstudio.com
// gets_s(buf);
// fgets(buf, sizeof(buf), stdin);
