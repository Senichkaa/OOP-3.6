//Source.cpp
#include "D4.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 o1(777);
	cout << "B1 o1(777);" << endl;
	cout << '\n';
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "hierarchy of class B1: " << endl;
	o1.show_B1();

	B2 o2(888);
	cout << "B2 o2(888);" << endl;
	cout << '\n';
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "hierarchy of classB2: " << endl;
	o2.show_B2();

	B3 o3(999);
	cout << "B3 o3(999);" << endl;
	cout << '\n';
	cout << "sizeof(B3) = " << '\n' << sizeof(B3) << endl;
	cout << endl << "hierarchy of class B3: " << endl;
	o3.show_B3();

	D1 n1(1000, 2000, 3000, 4000);
	cout << "D1 n1(1000, 2000, 3000, 4000);" << endl;
	cout << '\n';
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "hierarchy of classD1: " << endl;
	n1.show_D1();

	D2 n2(10, 20, 30, 40, 50, 60);
	cout << "D2 n2(10, 20, 30, 40, 50, 60);" << endl;
	cout << '\n';
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "hierarchy of class D2: " << endl;
	n2.show_D2();

	D3 n3(100, 200);
	cout << "D3 n3(100, 200);" << endl;
	cout << '\n';
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "hierarchy of class D3: " << endl;
	n3.show_D3();

	D4 n4(1, 2, 3, 4, 5, 6, 7);
	cout << "D4 n4(1, 2, 3, 4, 5, 6, 7);" << endl;
	cout << '\n';
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "hierarchy of class D4: " << endl;
	n4.show_D4();

}