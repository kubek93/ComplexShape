#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Prostokat :public Shape
{
protected:
	double poz_x;
	double poz_y;
	double bok_a;
	double bok_b;

public:
	Prostokat(double, double, double, double);
	void wyswietl();
	virtual bool in(double, double);
	virtual void movePosition(double, double);
	virtual ~Prostokat();
};