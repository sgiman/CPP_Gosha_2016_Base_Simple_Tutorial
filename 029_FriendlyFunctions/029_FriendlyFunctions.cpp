// *************************************************************
// FriendlyFunctions.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;

// -- CLASS A --
class b;						// Set class b (for read Code Up-Down)

class a {
	friend int sum(a, b);		// Friendly function "sum"
private:
	int x;
public:
	a() {
		cout << "Enter x: ";
		cin >> x;
	}
};


// -- CLASS B --
class b {
	friend int sum(a, b);		// Friendly function "sum"
private:
	int y;
public:
	b() {
		cout << "Enter y: ";
		cin >> y;
	}
};


// -- FIENDLY FUNCTION --
int sum(a first, b second) {
	return (first.x + second.y);
}


int main(int arc, const char* argv[])
{
	cout << "\n********** FRIENDLY FUNCTIONS  **********" << endl;

	a first;			// class a
	b second;			// class b

	cout << "\nRESULT: " << sum(first, second) << endl;  // Result from FIENDLY FUNCTION "sum" for classes "a" & "b"

	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}

