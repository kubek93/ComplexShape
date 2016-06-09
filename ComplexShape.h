#pragma once
#include <iostream>
#include "Shape.h"
#include "Kolo.h"
#include "Prostokat.h"

using namespace std;

class ComplexShape :public Shape
{
public:
	double pkt_x;
	double pkt_y;


	ComplexShape(double, double);
	void suma();
	~ComplexShape();
};