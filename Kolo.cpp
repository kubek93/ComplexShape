#include "stdafx.h"
#include "Kolo.h"


Kolo::Kolo(double x, double y, double r)
	:Shape(x, y)
{
	sr = r;

	cout << "KOLO!" << endl;
	cout << "wsp x: " << x << endl;
	cout << "wsp y: " << y << endl;
	cout << "promien: " << r << endl;
	cout << endl;
}

void Kolo::wyswietl()
{

}

Kolo::~Kolo()
{}