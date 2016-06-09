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
	virtual bool in(double, double);
	~Shape();
};