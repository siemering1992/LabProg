#include "rechteck.h"
#include <iostream>
using namespace std;


//Default Konstruktor vom Rechteck
Rechteck::Rechteck() 
{
	// Punkt Reihenfolge: unten-links, oben-links, oben-rechts, unten-rechts
	_punkt = new Punkt[4];
};

//Setzen des Rechtecks (x,y,breite,höhe)
Rechteck::Rechteck(int x, int y, int b, int h) 
{
	_punkt = new Punkt[4];
	set(x, y, b, h);
}
//Destruktor vom Rechteck
Rechteck::~Rechteck()
{
	delete[] _punkt;
}


//Setze Koordinaten vom Rechteck
void Rechteck::set(int x, int y, int b, int h)
{
	_punkt[0] = { x, y };
	_punkt[1] = { x, y+h };
	_punkt[2] = { x+b, y+h };
	_punkt[3] = { x+b, y };
}

//Drucke das Rechteck
void Rechteck::drucke()
{

	cout << "---->Rechteck<---- " << endl;
	int px, py;
	for (int i = 0; i < 4; i++) {

		_punkt[i].getXY(&px, &py);

		cout << "Punkt " << i+1 << ": ";
		cout << "x:"<< px << " y:" << py << endl;
	}
}

//Verschiebe das Rechteck um dx,dy 
void Rechteck::verschiebe(int dx, int dy)
{
	for (int i = 0; i < 4; i++) 
	{
		_punkt[i].verschiebe(dx, dy);
	}
}

//Berechne den Umfang vom Rechteck
float Rechteck::umfang()
{
	int p1x, p1y, p3x, p3y, b, h;
	_punkt[0].getXY(&p1x, &p1y); // Punkt unten-links
	_punkt[2].getXY(&p3x, &p3y); // Punkt oben-rechts
	b = abs(p1x - p3x);
	h = abs(p1y - p3y);
	return (2 * b) + (2 * h);

/* Berechne den Umfang mit einem Array
* 
	int pxy[4][2], b, h;
	(int i = 0; i < 4; i++)
	{
	Punkt (tp) = *(_punkt + i);
	tp.getXY(&(pxy[i][0]),&(pxy[i][1]));
	}

	b = abs(pxy[1][0] - pxy[3][0]);
	h = abs(pxy[1][1] - pxy[3][1]);
*/
}


