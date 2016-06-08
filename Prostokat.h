#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Prostokat :public Shape
{
protected:
	double bok_a;
	double bok_b;

public:
	Prostokat(double, double, double, double);
	void wyswietl();
	~Prostokat();
};