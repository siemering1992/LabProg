# define _USE_MATH_DEFINES
#include "Kreis.h"
#include <iostream>
using namespace std;
// Default Konstruktor Kreis
Kreis::Kreis()
{
	Punkt _mitte;
	_radius = 0;
}

// Konstruktor Kreis
/*
Kostruktor mit initialen werten.

@param x horizontal value within coordinate system
@param y horizontal value within coordinate system
@param r Radius des zu erstellenden Kreises
@return Kreis Objekt
*/
Kreis::Kreis(int x, int y, int r)
{
	Punkt _mitte;
	_radius = r;
	set(x, y, r);
}

/*
Setze Werte des Kreises.

@param x horizontal value within coordinate system
@param y horizontal value within coordinate system
@param r Radius des zu erstellenden Kreises
@return void
*/
void Kreis::set(int x, int y, int r)
{
	_mitte = { x, y };
	_radius = r;
}

// Drucke Kreis
void Kreis::drucke()
{
	int pmx, pmy;
	_mitte.getXY(&pmx, &pmy);
	cout << "---->Kreis<---- " << endl;
	cout << "x:" << pmx << " y:" << pmy << endl;
	cout << "Radius:" << _radius << endl;
}

// Verschiebe den Kreis
void Kreis::verschiebe(int dx, int dy)
{
	cout << "Verschiebe um x: "<< dx << " y: " << dy <<endl;
	_mitte.verschiebe(dx, dy);
}

//Berechne den Umfang des Kreises
float Kreis::umfang()
{
	return M_PI * 2 * _radius;
}
