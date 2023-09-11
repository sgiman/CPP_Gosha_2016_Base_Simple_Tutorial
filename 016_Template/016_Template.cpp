// *************************************************************
// Template.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
// *************************************************************


#include <iostream>     // std::cout
#include <algorithm>    // std::min

using namespace std;


int main()
{
	cout << "\n***************** Hello World! *****************\n";

	// min example

	std::cout << "min(1,2) == " << std::min(1, 2) << '\n';
	std::cout << "min(2,1) == " << std::min(2, 1) << '\n';
	std::cout << "min('a','z') == " << std::min('a', 'z') << '\n';
	std::cout << "min(3.14,2.72) == " << std::min(3.14, 2.72) << '\n';

	cout << "\n***************** TEMPLATE *****************\n";

	std::cout << "min(1, 2) == " << std::min(1, 2) << '\n';
	std::cout << "min('a', 'b') == " << min('a', 'b') << '\n';
	std::cout << "min(char('abc'), char('cde')) == " << min(char("abc"), char("cde")) << '\n';

	cout << "\n***************** END (Press any key!) *****************\n";

	getchar();

	return 0;

}

/* --- TEMPLATE ---
template <typename T>
T min(T a, T b) {
	return a < b ? a : b;
}
*/

// ----- PAUSE CONSSOLE ------
// using cin.get()
// or using system("pause")
// or using C functions like getch() or getchar()?
