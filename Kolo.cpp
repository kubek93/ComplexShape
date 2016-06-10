#include "stdafx.h"
#include "Kolo.h"


Kolo::Kolo(double x, double y, double r)
	:Shape()
{
	poz_x = x;
	poz_y = y;
	sr = r;
}

void Kolo::wyswietl()
{
	cout << "KOLO x: " << this->poz_x << " y: " << this->poz_y << " promien: " << this->sr << endl;
}

bool Kolo::in(double x, double y)
{
	cout << "Punkt x: " << x << " y: " << y << endl;

	if (sqrt(pow(x - this->poz_x, 2) + pow(y - this->poz_y, 2)) <= this->sr)
	{
		cout << "Kolo - TRUE" << endl;
		return true;
	}
	else
	{
		cout << "Kolo - FALSE" << endl;
		return false;
	}
}

void Kolo::movePosition(double x, double y)
{
	this->poz_x += x;
	this->poz_y += y;
}

Kolo::~Kolo()
{
	cout << "KOLO - destruktor" << endl;
}