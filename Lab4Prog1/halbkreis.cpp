# define _USE_MATH_DEFINES
#include "halbkreis.h"
#include <iostream>
using namespace std;

//Berechne den Umfang des Halbkreises
float Halbkreis::umfang()
{
	return ((M_PI * _radius)+(2.0 * _radius));
}

// Drucke Halbkreis
void Halbkreis::drucke()
{
	int pmx, pmy;
	_mitte.getXY(&pmx, &pmy);
	cout << "---->Halbkreis<---- " << endl;
	cout << "x:" << pmx << " y:" << pmy << endl;
	cout << "Radius:" << _radius << endl;
}