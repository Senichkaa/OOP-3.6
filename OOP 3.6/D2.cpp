//D2.cpp
#include "D2.h"

D2::D2(int x, int y, int z, int i, int j, int k)
	: D1(x, i, j, k), D3(z, k)
{
	d2 = y;
}

void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_D1();
	show_D3();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}
