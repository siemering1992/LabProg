#include "rechteck.h"
#include <iostream>
using namespace std;



Rechteck::Rechteck() 
{
	// Punkt Reihenfolge: unten-links, oben-links, oben-rechts, unten-rechts
	_punkt = new Punkt[4];
};

Rechteck::Rechteck(int x, int y, int b, int h) 
{
	_punkt = new Punkt[4];
	set(x, y, b, h);
}
Rechteck::~Rechteck()
{
	delete[] _punkt;
}



void Rechteck::set(int x, int y, int b, int h)
{
	_punkt[0] = { x, y };
	_punkt[1] = { x, y+h };
	_punkt[2] = { x+b, y+h };
	_punkt[3] = { x+b, y };
}

void Rechteck::drucke()
{
	int px, py;
	for (int i = 0; i < 4; i++) {

		_punkt[i].getXY(&px, &py);

		cout << "Punkt " << i+1 << ": ";
		cout << "x:"<< px << " y:" << py << endl;
	}
}

void Rechteck::verschiebe(int dx, int dy)
{
	for (int i = 0; i < 4; i++) 
	{
		_punkt[i].verschiebe(dx, dy);
	}
}

float Rechteck::umfang()
{

	int p1x, p1y, p3x, p3y, b, h;
	_punkt[0].getXY(&p1x, &p1y); // Punkt unten-links
	_punkt[2].getXY(&p3x, &p3y); // Punkt oben-rechts
	b = abs(p1x - p3x);
	h = abs(p1y - p3y);
	return (2 * b) + (2 * h);

	/*int pxy[4][2], b, h;
//fokrku (int i = 0; i < 4; i++)
{
	Punkt (tp) = *(_punkt + i);
	tp.getXY(&(pxy[i][0]),&(pxy[i][1]));
}
b = abs(pxy[1][0] - pxy[3][0]);
h = abs(pxy[1][1] - pxy[3][1]);
*/
}


