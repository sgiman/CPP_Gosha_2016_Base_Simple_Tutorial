// *************************************************************
// this.cpp
// -------------------------------------------------------------
// С++ | Visual Studio 2022
// -------------------------------------------------------------
// Gosha Dudar
// Writing by sgiman @ 2022-2023
//**************************************************************

#include <iostream> 

using namespace std;


class Test {
private:
	int a, b, c;
public:
	/*
	void set(int a_a, int b_b, int c_c) {
		a = a_a;
		b = b_b;
		c = c_c;
	}
	*/
	// У“казатель "this" - ссылка на объекты внутри текущего класса
	void set(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void get() {
		cout << " A = " << a << ",  B = " << b << ",  C = " << c << endl;
	}
};


int main(int arc, const char* argv[])
{
	cout << "\n********** this **********\n" << endl;

	Test test;
	test.set(12, 23, 1);
	test.get();


	cout << "\n\n Press any key... \n";
	cin.get();
	return 0;
}