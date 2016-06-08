#include "stdafx.h"
#include "Shape.h"

Shape::Shape(double x, double y)
{
	poz_x = x;
	poz_y = y;
}

void Shape::wyswietl(double x, double y)
{
	cout << "Szerokosc: " << x << endl;
	cout << "Wysokosc: " << y << endl;
}

Shape::~Shape()
{
}
