#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;


class ComplexShape :public Shape
{
protected:
	double poz_x;
	double poz_y;


public:
	ComplexShape(double, double);
	bool suma(double, double);
	bool roznica(double, double);
	bool iloczyn(double, double);
	virtual void movePosition(double, double);
	virtual ~ComplexShape();
};