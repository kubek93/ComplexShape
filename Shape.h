#pragma once
#include <iostream>
using namespace std;

class Shape
{
protected:
	double poz_x;
	double poz_y;

public:
	Shape(double, double);
	void wyswietl(double x, double y);
	~Shape();
};

