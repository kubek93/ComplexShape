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
	void suma(int x, int y);
	~ComplexShape();
};