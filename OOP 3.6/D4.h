//d4.h
#pragma once
#include "D2.h"

class D4 : protected D2
{
private:
	int d4;

public:
	D4(int d1, int d2, int d3, int d4, int b1, int b2, int b3);
	void show_D4();
};

