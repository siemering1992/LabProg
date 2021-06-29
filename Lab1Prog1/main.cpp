#include <iostream>
#include "geometrien.h";
using namespace std;



// Hauptprogramm
void main()
{
	// Erstelle eine Variable vom Verbundtyp Kreis
	Kreis aCircle;

	// Setze Werte aCircle
	aCircle.mitte.x = 0;
	aCircle.mitte.y = 0;
	aCircle.radius = 10;

	// Berechne Umfang
	aCircle.umfang = umfang(aCircle);

	// Gebe Werte aus
	drucke(aCircle);
	verschiebe(&aCircle,5,5);
	drucke(aCircle);	
}
