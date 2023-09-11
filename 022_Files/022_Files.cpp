// *************************************************************
// Files.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>		
#include <fstream>           // For files (io)

using namespace std;

int main(int arc, const char* argv[])
{

	char text[50];			// Bufer

	cout << "\n********** FILES **********" << endl;


	// ---- WRITE TO FILE 1 ----
	ofstream file1_w("text1.txt");								// Open and Write to file 
	//ifstream file1_w;											// Read from file 
	//file1.open("text.txt");									// Only open file
	file1_w << "Works with files in C++\n";						// Запись в файл
	file1_w.close();

	// ---- READ FROM FILE 1 ----
	ifstream file1_r("text1.txt");
	if (!file1_r.is_open())										// Проверка наличия файла
		cout << "Error! File is not found!" << endl;
	else {
		//file_r >> text;										// Чтение первого слова  
		//cout << text;											// Console
		file1_r.getline(text, 50);								// Продолжение чтения строки до 50 символов    
		cout << "text1.txt: " << text << endl;					// Console
		file1_r.close();										// Закрыть файл
	}


	// ---- WRITE TO FILE 2 ----
	ofstream file2_w("text2.txt");								// Open and Write to file 
	file2_w << "Hi! Everthing works great!\n";					// Запись в файл
	file2_w.close();

	// ---- READ FROM FILE 2 ----
	ifstream file2_r("text2.txt");
	if (!file2_r.is_open())										// Проверка наличия файла
		cout << "Error! File is not found!" << endl;
	else {
		file2_r.getline(text, 50);								// Продолжение чтения строки до 50 символов    
		cout << "text2.txt: " << text << endl;					// Console
		file2_r.close();										// Закрыть файл
	}


	// ---- WRITE TO END FILE1 (2 строки) ----
	ofstream file3_w("text1.txt", ios_base::app);				// Open and Write to file (ios_base::app)
	file3_w << "Hi! Everthing works great!...add to end...\n";	// Запись в файл
	file3_w.close();

	// ---- READ FROM FILE 1 (2 строки) ----
	ifstream file3_r("text1.txt");
	if (!file3_r.is_open())										// Проверка наличия файла
		cout << "Error! File is not found!" << endl;
	else {
		file3_r.getline(text, 50);								// Запись строки 1    
		cout << endl;
		cout << "text1.txt: " << text << endl;					// Console
		file3_r.getline(text, 50);								// Запись строки 2    
		cout << "text1.txt: " << text << endl;					// Console
		file3_r.close();										// Закрыть файл
	}


	cout << "\nPress any key... \n";
	cin.get();
	// return 0;

}
