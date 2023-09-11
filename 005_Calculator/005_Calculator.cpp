// *************************************************************
// Calculator.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;

int main(int arc, const char* argv[])
{
	cout << "\n********** CALCULATOR SUM FOR TWO NUMBERS **********" << endl;

	int num_1, num_2, result;

	cout << "Enter first number: ";
	cin >> num_1;
	cout << "Enter second number: ";
	cin >> num_2;
	result = num_1 + num_2;
	cout << num_1 << " + " << num_2 << " = " << result << endl;

	// result = result * 2;
	result *= 2;
	result--;

	cout << "(RESULT * 2) -1  = " << result << endl;

	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}

//  + Сложение
//  - Вычитание
//  * Умножение
//  / Деление
//  % Остаток от деления
