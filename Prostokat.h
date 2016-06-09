#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Prostokat
{
public:
	double poz_x;
	double poz_y;
	double bok_a;
	double bok_b;


	Prostokat(double, double, double, double);
	void wyswietl();
	void in(double, double);
	~Prostokat();
};