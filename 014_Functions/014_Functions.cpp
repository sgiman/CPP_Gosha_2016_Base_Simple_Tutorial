// Functions.cpp : Defines the entry point for the console application.
//
// *************************************************************
// Functions.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>		

using namespace std;

void MyFunc(int num);
float MySum(float x, float y);

int main(int arc, const char * argv[])
{

	cout << "\n********** FUCTIONS **********" << endl;

	int num = 123;

	MyFunc(num);
	float SumResult = MySum(23.23f, 54.1f);
	cout << "\nSumResult = " << SumResult;
	
	// EXIT
	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}

void MyFunc(int num) {
	cout << "Parametr - " << num << endl;
}

float MySum(float x, float y) {
	float result;
	result = x + y;
	return result;
}
