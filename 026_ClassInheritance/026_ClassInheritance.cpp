// *************************************************************
// ClassInheritance.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;


// -- Родитель --
class First {					// Исходный родительский класс "First"
protected:						// Область видимости в наследниках 
	int value;
public:
	/*
		void set(int value) {		// Method "set"
			this->value = value;
		}
	*/
	First(int value) {
		this->value = value;
		cout << "\nFIRST CLASS: " << value << endl;
	}
};

// -- 1-й наследник --
class Second : public First {   // Класс наследник "Second" - наcледует все из класса First
public:
	/*
		Second(int val) {			// Конструктор для взаимодейтвия c родителем "FIRST"
			//value = val;
			set(val);				// Вызов метода set
			cout << "SECOND CLASS: " << value << endl;
		}
	*/
	Second(int val) : First(val) { cout << "SECOND CLASS: " << value << endl; }
};


// -- 2-й наследник --
class Third : public First {   // Класс наследник "Second" - наcледует все из класса First
public:
	/*
		Third(int val) {			// Конструктор для взаимодейтвия c родителем "FIRST"
			set(val);				// Вызов метода set
			cout << "THIRD CLASS: " << value << endl;
		}

	*/
	Third(int val) : First(val) { cout << "THIRD CLASS: " << value << endl; }
};


int main(int arc, const char* argv[])
{
	cout << "\n********** CLASS CHIELDS (inherite) **********\n" << endl;

	Second objeсt_a(13);				// Object A от Class-наследника "Second" 
	Third objeсt_b(15);				// Object B от Class-наследника "Second"

	cout << "\n\n Press any key... \n";
	cin.get();
	return 0;
}