// *************************************************************
// DynamicArray.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream> 

using namespace std;

int main(int arc, const char* argv[])
{
	cout << "\n********** DYNAMIC ARRAY **********" << endl;

	// --- ARRAY INT ---
	//int *ptrnum = new int(7);
	int* ptrnum = new int;			// Выделениен памяти для динамического массива
	*ptrnum = 7;					// Фиксированное кол-во элементов
	cout << *ptrnum << endl;
	delete ptrnum;                  // Освобождение памяти - удаление адреса дин. массива  

	// --- ARRAY FLOAT ---
	float* ptrarray = new float[10];

	for (int i = 0; i < 10; i++)
		ptrarray[i] = rand() % 80 + 1;
	for (int i = 0; i < 10; i++)
		cout << ptrarray[i] << " ";

	delete[] ptrarray;				// Удалить массив и адрес 

	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}
