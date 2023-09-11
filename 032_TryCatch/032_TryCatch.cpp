// *************************************************************
// TryCatch.cpp
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
	cout << "\n********** TRY-CATCH **********" << endl;

	int num1, num2, result;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	result = num1 + num2;
	cout << num1 << " + " << num2 << " = " << result << endl;

	cout << endl;

	try {
		if (num2 == 0) throw 123; // code error if divide on zero
		cout << num1 << " / " << num2 << " = " << result << endl;
	}
	catch (int i) { // отловленный код ошибки - завершить!
		cout << "Error N" << i << " - divide by 0!!!" << endl;
	}

	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}

//  + Сложение
//  - Вычитание
//  * Умножение
//  / Деление
//  % Остаток от деления
