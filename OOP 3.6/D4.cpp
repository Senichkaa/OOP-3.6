//D4.cpp
#include "D4.h"

D4::D4(int x, int y, int z, int m, int i, int j, int k)
	: D2(x, y, z, i, j, k)
{
	d4 = m;
}

void D4::show_D4()
{
	cout << "class D4:" << endl;
	show_D2();
	cout << "show_D4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}
