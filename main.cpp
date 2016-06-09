#include "stdafx.h"
#include <iostream>
#include "Prostokat.h"
#include "Kolo.h"

using namespace std;

int main()
{
	Prostokat p1(1, 2, 3, 4);
	p1.wyswietl();
	p1.in(1, 1.99);

	cout << endl;

	Kolo k1(0, 0, 3);
	k1.wyswietl();
	k1.in(0, 1);

	cout << endl;

	system("pause");
	return 0;
}