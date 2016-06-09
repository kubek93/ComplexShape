#include "stdafx.h"
#include "ComplexShape.h"


ComplexShape::ComplexShape(double x, double y)
	:Shape(x, y)
{
	poz_x = x;
	poz_y = y;
}

void ComplexShape::suma(int x, int y) {
/*	if (Kolo.in(x, y) && !Prostokat.in(x, y) || !Kolo.in(x, y) && !Prostokat.in(x, y)) {
		cout << "ComplexShape - SUMA - true" << endl;
		return true;
	}
	else {
		cout << "ComplexShape - SUMA - false" << endl;
		return false;
	}
*/
}

ComplexShape::~ComplexShape()
{
}