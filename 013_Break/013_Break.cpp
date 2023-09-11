// *************************************************************
// BREAK.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************

#include <iostream>
#include <conio.h>

bool found = false;
void look_up(char*);
int _kbhit(void);

using namespace std;

int main(void) {
	int i;

	for (i = 0; i < 100; i++) {
		printf("%d\n", i);
		if (i == 10) break;
	}
	cout << endl;
	look_up((char*)"qwerty");

	return 0;
}

void look_up(char* name)
{
	/* поиск имен ...*/
	printf("\n****** (1) PRESS KEY ******\n\n");
	do {
		if (_kbhit()) break; // Press KEY!
	} while (!found);
	printf("\n****** (2 - break) KEY!!! ******\n\n");

}