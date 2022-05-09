//d2.h
#pragma once
#include "D1.h"
#include "D3.h"

class D2 : public D1, private D3
{
private:
	int d2;

public:
	D2(int d1, int d2, int d3, int b1, int b2, int b3);
	void show_D2();
};


