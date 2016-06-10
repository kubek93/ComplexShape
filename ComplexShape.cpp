#include "stdafx.h"
#include "ComplexShape.h"
#include "Kolo.h"
#include "Prostokat.h"


Prostokat p1(1, 2, 3, 4);
Kolo k1(0, 0, 3);
ComplexShape cs1(0, 0);


ComplexShape::ComplexShape(double x, double y)
	:Shape()
{
	poz_x = x;
	poz_y = y;
}

bool ComplexShape::suma(double x, double y) {
	if ( p1.in(x, y) || k1.in(x, y) ) {
		cout << "ComplexShape - SUMA - true" << endl;
		return true;
	}
	else {
		cout << "ComplexShape - SUMA - false" << endl;
		return false;
	}
}

bool ComplexShape::roznica(double x, double y)
{
	if ( k1.in(x, y) && !p1.in(x, y) || !k1.in(x, y) && p1.in(x, y) ) {
		cout << "ComplexShape - ROZNICA - true" << endl;
		return true;
	}
	else {
		cout << "ComplexShape - ROZNICA - false" << endl;
		return false;
	}
}

bool ComplexShape::iloczyn(double x, double y)
{
	if ( k1.in(x, y) && p1.in(x, y) ) {
		cout << "ComplexShape - ILOCZYN - true" << endl;
		return true;
	}
	else {
		cout << "ComplexShape - ILOCZYN - false" << endl;
		return false;
	}
	
}

void ComplexShape::movePosition(double x, double y)
{
	this->poz_x += x;
	this->poz_y += y;
}

ComplexShape::~ComplexShape()
{
}