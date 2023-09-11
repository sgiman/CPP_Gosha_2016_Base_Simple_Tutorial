// *************************************************************
// Logical.cpp
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
	cout << "\n********** CALCULATOR SUM FOR TWO NUMBERS (LOGICAL OPERATORS) **********\n" << endl;

	int num_1, num_2, result;
	bool isAway = true;

	cout << "Enter first number: ";
	cin >> num_1;

	cout << "Enter second number: ";
	cin >> num_2;

	result = num_1 + num_2;

	cout << endl;
	cout << endl;
	cout << num_1 << " + " << num_2 << " = " << result << endl;
	cout << endl;

	if (result > 62)
	{
		result++;
		cout << "\nRESULT = " << result << endl;
	}
	else if (result > 18) {
		cout << "\nResult is bigger than 18 and lower than 62" << endl;
	}
	else if (result > 10 && result < 13) {
		cout << "\nResult is bigger than 10 and lower than 13" << endl;
	}
	else if (result == 5 || result == 7) {
		result == 5 ? cout << "Result is equal 5" << endl : cout << "Result is equal 7" << endl;
	}
	else
		cout << "\nResult is lower than 62" << endl;

	switch (result) {
	case 1:
		cout << "Result is equal 1" << endl;
		break;
	case 10:
		cout << "Result is equal 10" << endl;
		break;
	default:
		cout << "Result is uknown" << endl;
	}
	cout << "\nPress any key... \n";

	cin.get();
	return 0;

}

// ==
// >
// <
// >=
// <=
// ==
// !=