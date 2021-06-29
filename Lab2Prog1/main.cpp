#include <iostream>
#include "geometrien.h";
using namespace std;

// Hauptprogramm
void main()
{
	// erstelle eine Variable vom Verbundtyp Kreis
	Kreis k;

	//erstelle eine Variable vom Verbundtyp Rechteck
	Rechteck r;

	//erstelle eine Variable vom Verbundtyp Dreieck
	Dreieck d;

	// setze Werte Kreises
	setXY(&k.mitte, 0, 0);
	k.radius = 10;

	// setzte Werte des Rechtecks
	setXY(&r.p1, 0, 10);
	setXY(&r.p2, 10, 10);
	setXY(&r.p3, 10, 0);
	setXY(&r.p4, 0, 0);

	// setze Werte Dreieck
	setXY(&d.p1, 1, 1);
	setXY(&d.p2, 4, 2);
	setXY(&d.p3, 3, 5);

	// Berechne Umfang
	umfang(k);
	umfang(r);
	umfang(d);

	//Ablauf Kreis
	drucke(k);
	cout << "Umfang: " << umfang(k) << endl;
	verschiebe(&k,5,5);
	drucke(k);
	cout << "Umfang: " << umfang(k) << endl;
	setPos(&k, 2, 6, 1);
	drucke(k);
	cout << "Umfang: " << umfang(k) << endl;

	//Ablauf Rechteck
	drucke(r);
	cout << "Umfang: " << umfang(r) << endl;
	verschiebe(&r,5,5);
	drucke(r);
	cout << "Umfang: " << umfang(r) << endl;
	setPos(&r, 2, 6, 1,4);
	drucke(r);
	cout << "Umfang: " << umfang(r) << endl;

	//Ablauf Dreieck
	drucke(d);
	cout << "Umfang: " << umfang(d) << endl;
	verschiebe(&d, 5, 5);
	drucke(d);
	cout << "Umfang: " << umfang(d) << endl;
}
