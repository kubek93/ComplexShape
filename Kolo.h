#pragma once
#include "Shape.h"
using namespace std;

class Kolo :public Shape
{
protected:
	double sr;

public:
	Kolo(double, double, double);
	void wyswietl();
	~Kolo();
};

