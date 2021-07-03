#pragma once
#include "punkt.h"
#include "geometrie.h"
using namespace std;

//Definition der Klasse Rechteck abgeleitet von "Geometrie"
class Rechteck:public Geometrie
{
protected:
	Punkt* _punkt; //Protected, da sie von Quadrat benutzt werden.

public:
	//Öffentliche Methoden
	void set(int, int, int, int);
	void verschiebe(int, int);
	void drucke();
	float umfang();

	//Konstruktoren
	Rechteck();
	Rechteck(int,int,int,int);
	~Rechteck();

	friend ostream& operator << (ostream& os, Rechteck& rechteck)
	{
		cout << "---->Rechteck<---- " << endl;
		int px, py;
		for (int i = 0; i < 4; i++) {

			rechteck._punkt[i].getXY(&px, &py);

			cout << "Punkt " << i + 1 << ": ";
			cout << "x:" << px << " y:" << py << endl;
		}
		return os;
	}

};