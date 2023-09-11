// *************************************************************
// ConstrutrosDestructors.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>

using namespace std;

// --- Class Auto ---
class Auto {

private:
	int year, month, day;

public:

	// -- Constructor --

	Auto() { // no parametes
		year = 2000;
		month = 112;
		day = 31;

		cout << "\n\nCONSTRUCTOR 1:" << endl;
		cout << "---------------------\n";
		get();
		cout << "---------------------\n";
	}


	Auto(int date_year, int date_month, int date_day) { // with parametes
		year = date_year;
		month = date_month;
		day = date_day;

		cout << "\n\nCONSTRUCTOR 2:" << endl;
		cout << "---------------------\n";
		get();
		cout << "---------------------\n";
	}


	// -- Methods --

	void message() {											// message
		cout << "\n Class is working! ... \n" << endl;
	}

	void set(int date_year, int date_month, int date_day) {		// set
		year = date_year;
		month = date_month;
		day = date_day;
	}

	void get() {												// get
		cout << " Year of this auto is - " << year << ", Month is - " << month << ", Day is - " << day << endl;
	}


	// -- Destructor (clear memory) --

	~Auto() {
		cout << " \nDESTRUCTOR: Class is not working" << endl;
	}

};


// --- main ---
int main(int arc, const char* argv[])
{

	cout << "\n*********** CLASSES and OBJECTS **********" << endl;

	// Shkoda
	//Auto shkoda;				// Oject
	Auto shkoda(2015, 2, 13);	// Oject
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