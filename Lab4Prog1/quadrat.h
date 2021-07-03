#pragma once
#include <iostream>
#include "geometrie.h"
#include "rechteck.h"
using namespace std;

// Klasse Quadrat abgeleitet von Rechteck
class Quadrat : public Rechteck
{


public:

	//Default Konstruktor
	Quadrat();

	//Konstruktor
	Quadrat(int,int,int);

	//Drucke Quadrat
	void drucke();

	//Setzen vom Quadrat x,y,b,h
	void set(int,int,int,int);

	//Setzen vom Quadrat x,y,b
	void set(int,int,int);

	friend ostream& operator << (ostream& os, Quadrat& quadrat)
	{
		cout << "---->Quadrat<---- " << endl;
		int px, py;
		for (int i = 0; i < 4; i++) {

			quadrat._punkt[i].getXY(&px, &py);

			cout << "Punkt " << i + 1 << ": ";
			cout << "x:" << px << " y:" << py << endl;
		}
		return os;
	}

};