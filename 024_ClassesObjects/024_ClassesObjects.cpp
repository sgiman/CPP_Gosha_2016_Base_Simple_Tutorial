// *************************************************************
// ClassesObjects.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>

using namespace std;

/*
class Auto {
public:               // Модификатор доступа "public". Везде.
	int value1 = 10;
private:              // Модификатор доступа "private". Только в текущем классе.
	int value2 = 10;
protected:            // Модификатор доступа "protected". В классе и в наследнике.
	int value3 = 10;
}
*/

// --- Class Auto ---
class Auto {

private:
	int year, month, day;

public:

	// M E T H O D S

	// Message
	void message() {
		cout << "\n Class is working! ... \n" << endl;
	}

	// Set
	void set(int date_year, int date_month, int date_day) {
		year = date_year;
		month = date_month;
		day = date_day;
	}

	// Get
	void get() {
		cout << " Year of this auto is - " << year << ", Month is - " << month << ", Day is - " << day << endl;
	}

};

// --- main ---
int main(int arc, const char* argv[])
{

	cout << "\n*********** CLASSES and OBJECTS **********" << endl;

	// Shkoda
	Auto shkoda;				// Oject
	shkoda.message();			// Method
	shkoda.set(2005, 11, 23);	// Set
	shkoda.get();				// Get

	// BMW
	Auto bmw;
	bmw.set(2012, 1, 11);
	bmw.get();

	// EXIT
	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}