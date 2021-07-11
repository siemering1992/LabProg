#include "geometrien.h"
#include <iostream>
# define _USE_MATH_DEFINES
#include "math.h"


using namespace std;
// Gebe Werte aus
void drucke(Kreis aCircle)
{
	cout << "X Posi: " << aCircle.mitte.x << endl;
	cout << "Y Posi: " << aCircle.mitte.y << endl;
	cout << "Radius: " << aCircle.radius << endl;
	cout << "Umfang: " << aCircle.umfang << endl;
}

// Berechne Umfang
float umfang(Kreis aCircle)
{
	return M_PI * 2 * aCircle.radius;
}

/*
Verschiebe die x,y Werte.

@param aCircle Kreiszeiger 
@param dx Horizontaler Wert
@param dy Vertikaler Wert

*/
void verschiebe(Kreis* aCircle, int dx, int dy)
{
	aCircle->mitte.x += dx;
	aCircle->mitte.y += dy;
}