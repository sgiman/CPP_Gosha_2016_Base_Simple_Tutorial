// *************************************************************
// Enum.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;

enum tree { tree_1 = 1, tree_2 = 45, tree_3 };
enum mall { parking = -1, hall, shops, roof };

int main(int arc, const char* argv[])
{

	cout << "\n********** ENUM **********" << endl;

	cout << tree_1 << endl;
	cout << tree_2 << endl;
	cout << tree_3 << endl;

	cout << "\n********** GAME **********" << endl;
	cout << endl;
	int floor;
	bool exit = false;       // default exit = NULL;


	while (!exit) {
		cout << "Enter your floor (from -1 to 2): ";
		cin >> floor;
		switch (floor) {
		case parking:
			cout << "We on the -1 floor in the parking" << endl;
			break;
		case hall:
			cout << "We on the 0 floor in the hall" << endl;
			break;
		case shops:
			cout << "We on the 1 floor in the many shops" << endl;
			break;
		case roof:
			cout << "We on the 2 floor in the many roof" << endl;
			break;
		default:
			cout << "Floor only to play. Again press 0 for continue or press 1 to exit this game" << endl;
			cin >> exit;
		}
	}

	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}