// wskazniki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double z1(struct lista *p)
{
	double s = 0;
	int n = 0;
	while (p != NULL)
	{
		s += p->x;
		n++;
		p = p->n;
	}
	return s / n;
}


int main()
{
	int x = 10;
	int n = 0;
	int *wskaznik;
	wskaznik = &n;
	int *m = &n;
	//*m = *m + 1;
	cout << &x << endl << &n << endl;
	cout << m << endl << *m << endl;
	z1();

	system("pause");
    return 0;
}

