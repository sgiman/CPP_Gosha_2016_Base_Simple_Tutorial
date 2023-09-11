// *************************************************************
// FunctionOverload.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>		

using namespace std;

float perimeter(float x, float y, float z);
float perimeter(float a, float b, float c, float d);

int main(int arc, const char* argv[])
{

	cout << "\n********** FUNCTIONS OVERLOAD **********" << endl;

	cout << "PERIMETER 1 (3 parameters) = " << perimeter(12.23, 23.1, 12.2);
	cout << endl;
	cout << "PERIMETER 2 (4 parameters) = " << perimeter(12.23, 23.1, 12.2, 28.2);

	// EXIT
	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}


float perimeter(float x, float y, float z) {
	return x + y + z;
}

float perimeter(float a, float b, float c, float d) {
	return a + b + c + d;
}
