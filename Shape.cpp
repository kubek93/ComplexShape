#include "stdafx.h"
#include "Shape.h"

Shape::Shape(double x, double y)
{
	poz_x = x;
	poz_y = y;
}

bool Shape::in(double x, double y)
{
	return true;
}


Shape::~Shape()
{
}