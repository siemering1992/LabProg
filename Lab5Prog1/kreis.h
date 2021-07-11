#pragma once
#include <iostream>
#include "geometrie.h"
#include "punkt.h"
using namespace std;
#define ERRORCODE -1
#define OKCODE 0


//Definition der Klasse Kreis abgeleitet von "Geometrie"
class Kreis: public Geometrie
{
	//Protected, da sie von Halbkreis benutzt werden.
protected : 
	Punkt _mitte;
	int _radius;


	//Öffentliche Methoden
public:
	
	virtual void drucke();
	virtual float umfang();
	void verschiebe(int,int);
	void set(int, int, int);



	//Konstruktoren
	Kreis();
	Kreis(int x, int y, int r);

	// Überladung des << Operators
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

