// weight avarage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "srednia.h"
using namespace std;
int i  = 0;
int ileprzedmiotow;
int main()
{
	cin >> ileprzedmiotow;
	double *srednie;
	srednie = new double[ileprzedmiotow];
	Srednia_wazona p[20];
	for (int i = 0; i < ileprzedmiotow; i++)
	{
		
		srednie[i]=p[i].wprowadzanie_ocen();
	
	}

	cout << endl;
	system("pause>nul");
    return 0;
}

