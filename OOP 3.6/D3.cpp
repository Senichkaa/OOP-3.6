//D3.cpp
#include "D3.h"

D3::D3(int x, int y)
	: B3(y)
{
	d3 = x;
}

void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_B3();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}
