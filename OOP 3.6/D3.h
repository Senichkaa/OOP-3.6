//d3.h
#pragma once
#include "B3.h"

class D3 : public B3
{
private:
	int d3;

public:
	D3(int d3, int b3);
	int get_d3() { return d3; }
	void show_D3();
};

