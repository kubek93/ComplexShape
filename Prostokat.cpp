#include "stdafx.h"
#include "Prostokat.h"

Prostokat::Prostokat(double x, double y, double a, double b)
	:Shape(x, y)
{
	bok_a = a;
	bok_b = b;

	cout << "PROSTOKAT!" << endl;
	cout << "wsp x: " << a << endl;
	cout << "wsp y: " << b << endl;
	cout << "bok a: " << a << endl;
	cout << "bok b: " << b << endl;
	cout << endl;
}

void Prostokat::wyswietl()
{

}

Prostokat::~Prostokat()
{}
