// *************************************************************
// TemplateClasses.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 
#include <clocale>
#include <Windows.h>

using namespace std;

const int arr_length = 3;											// Размер массива

// T E M P L A T E   C L A S S E S
template <class Type>												// Шаблон класса для массива любого типа 

class Arr {

	// С в о й с т в а
private:
	Type arr[arr_length];											// Array (свойство)

	// К о н с т р у к т о р
public:
	Arr(Type* a) {													// Заполнить массив (конструктор)
		for (int i = 0; i < arr_length; i++)
			arr[i] = a[i];
	}

	Type getElement(int i) {										// Метод (функция)
		return arr[i];
	}

};


int main(int arc, const char* argv[])
{
	HANDLE  hConsole;
	setlocale(LC_CTYPE, "rus");										// Кодировка Russian
	SetConsoleCP(1251);												// Кодировка для ввода win-cp1251
	SetConsoleOutputCP(1251);										// Кодировка для вывода на консоль - 1251  
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\n********** TEMPLATE CLASSES **********\n" << endl;
	SetConsoleTextAttribute(hConsole, 11);

	int arr1[] = { 12, 23, 45, 6 };
	Arr<int> object_1(arr1);										// Создание объекта класса "Arr" c типом данных "int" и c передачей элементов массива   
	cout << object_1.getElement(2) << endl;							// вывод значения элемента массива

	char arr2[] = { "Mars!" };
	Arr<char> object_2(arr2);
	cout << object_2.getElement(0) << endl;


	SetConsoleTextAttribute(hConsole, 7);
	cout << "\n\n Press any key... \n";
	cin.get();
	return 0;
}