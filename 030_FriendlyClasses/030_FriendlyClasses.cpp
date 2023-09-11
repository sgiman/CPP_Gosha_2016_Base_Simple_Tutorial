// *************************************************************
// FriendlyClasses.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;

class Person;

class Dog {
	friend class Person;		// Friendly class "Person"
private:
	int health = 100;
};


class Person {
public:
	void Damage(Dog& d) {		// Damage - Health with link (for change health)
		d.health -= 20;
		cout << "\nHealth of the animal is " << d.health << endl;
	}

	void Kill(Dog& d) {			// Kill Dog
		d.health = 0;
		cout << "Health of the animal is " << d.health << endl;
	}

	void Heal(Dog& d) {			// Heal Dog
		d.health += 30;
		cout << "Health of the animal is " << d.health << endl;
	}
};


int main(int arc, const char* argv[])
{
	cout << "\n********** FRIENDLY CLASSES **********" << endl;

	Dog skuby;					// Class "Dog"
	Person sman;				// Class "Pesron"

	// Dog "skuby"
	cout << "S K U B Y:";
	sman.Damage(skuby);			// Damage 
	sman.Kill(skuby);			// Kill
	sman.Damage(skuby);         // Damage   
	sman.Heal(skuby);			// Heal

	cout << "\n-------------------------------------\n";

	// Dog "haski"
	cout << "H A S K I:";
	Dog haski;
	sman.Damage(haski);


	cout << "\nPress any key... \n";
	cin.get();
	return 0;

}
