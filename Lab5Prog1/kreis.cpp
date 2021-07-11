# define _USE_MATH_DEFINES
#include "Kreis.h"
#include <iostream>
using namespace std;

/*
Default Kostruktor mit initialen werten
*/
Kreis::Kreis()
{
	Punkt _mitte;
	_radius = 0;
}

/*
Kostruktor mit initialen werten.

@param x Horizontaler Wert 
@param y Vertikaler Wert
@param r Radius des Kreises
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

@param x Horizontaler Wert 
@param y Vertikaler Wert
@param r Radius des Kreises
*/
void Kreis::set(int x, int y, int r)
{
	// Guard clause/ Waechtercode
	if (r < 0) 
	{
		throw invalid_argument("Radius muss positiv sein!");
	}

	_mitte = { x, y };
	_radius = r;

}

/*
Gebe  Werte des Kreises in der Konsole aus.
Geometriename,x,y,Radius
*/
void Kreis::drucke()
{
	int pmx, pmy;
	_mitte.getXY(&pmx, &pmy);
	cout << "---->Kreis<---- " << endl;
	cout << "x:" << pmx << " y:" << pmy << endl;
	cout << "Radius:" << _radius << endl;
}

/*
Verschiebe x,y des Kreises.

@param dx Horizontaler Verschiebewert
@param dy Vertikaler Verschiebewert
*/
void Kreis::verschiebe(int dx, int dy)
{
	cout << "Verschiebe um x: "<< dx << " y: " << dy <<endl;
	_mitte.verschiebe(dx, dy);
}

/*
Berechne den Umfang des Kreises.
*/
float Kreis::umfang()
{
	return M_PI * 2 * _radius;
}
