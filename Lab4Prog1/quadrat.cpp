#include <iostream>
#include "quadrat.h"
using namespace std;

//Default Konstruktor vom Rechteck
Quadrat::Quadrat() : Rechteck() {};

//Setzen des Rechtecks (x,y,breite,breite)
Quadrat::Quadrat(int x, int y, int b) : Rechteck(x, y, b, b) {};

void Quadrat::drucke()
{

	cout << "---->Quadrat<---- " << endl;
	int px, py;
	for (int i = 0; i < 4; i++) {

		_punkt[i].getXY(&px, &py);

		cout << "Punkt " << i + 1 << ": ";
		cout << "x:" << px << " y:" << py << endl;
	}
}

void Quadrat::set(int x, int y, int b, int h)
{
	if (b != h) {
		//Fehler
	}
	Rechteck::set(x, y, b, b);
}

void Quadrat::set(int x, int y, int b)
{
	Rechteck::set(x, y, b, b);
}
