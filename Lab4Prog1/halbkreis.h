#pragma once
#include <iostream>
#include "kreis.h"
using namespace std;
// Klasse von Halbkreis abgeleitet von Kreis
class Halbkreis : public Kreis
{
private:

public:
	//Berechne Umfang
	float umfang();

	//Drucke Halbkreis
	void drucke();

	using Kreis::Kreis; //Benutze die Konstruktoren von Kreis

	friend ostream& operator << (ostream& os, Halbkreis& halbkreis)
	{
		int pmx, pmy;
		halbkreis._mitte.getXY(&pmx, &pmy);
		cout << "---->Halbkreis<---- " << endl;
		cout << "x:" << pmx << " y:" << pmy << endl;
		cout << "Radius:" << halbkreis._radius << endl;
		return os;
	}
};