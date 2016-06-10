#pragma once
#include <iostream>
using namespace std;

class Shape 
{
protected:
	double poz_x;
	double poz_y;




public:
	Shape();
	virtual bool in(double, double);
	virtual void movePosition(double, double);
	virtual ~Shape();
};