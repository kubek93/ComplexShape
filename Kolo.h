#pragma once
#include "Shape.h"
using namespace std;

class Kolo
{
public:
	double poz_x;
	double poz_y;
	double sr;


	Kolo(double, double, double);
	void wyswietl();
	bool in(double, double);
	~Kolo();
};