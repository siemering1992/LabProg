#pragma once
#include <iostream>
#include "geometrie.h"
#include "punkt.h"
using namespace std;

//Definition der Klasse Kreis abgeleitet von "Geometrie"
class Kreis: public Geometrie
{
protected : //Protected, da sie von Halbkreis benutzt werden.
	Punkt _mitte;
	int _radius;
public:
	//Öffentliche Methoden
	virtual void drucke();
	virtual float umfang();
	void verschiebe(int,int);
	void set(int, int, int);

	//Konstruktoren
	Kreis();
	Kreis(int x, int y, int r);

	friend ostream& operator << (ostream& os, Kreis& kreis)
	{
		int pmx, pmy;
		kreis._mitte.getXY(&pmx, &pmy);
		os << "---->Kreis<---- " << endl;
		os << "x:" << pmx << " y:" << pmy << endl;
		os << "Radius:" << kreis._radius << endl;
		return os;
	}

};

