// *************************************************************
// Structures.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;

struct Date {
	int year;
};

struct Auto {
	int wheels;
	float speed;
	char color;
	Date issue;       // Вложенная структура - год созданмя авто 
};

int main(int arc, const char* argv[])
{

	cout << "\n********** STRUTURES **********" << endl;

	Auto shkoda;
	shkoda.color = 'r';
	shkoda.speed = 315.23f;
	shkoda.wheels = 4;
	shkoda.issue.year = 1999;

	Auto audi = { 4, 300.23, 'b' };

	cout << "Audi speed = " << audi.speed << "\n" << "Shkoda speed = " << shkoda.speed << "\nShkoda issue: " << shkoda.issue.year << endl;

	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}


