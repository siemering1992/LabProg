#pragma once
// definiere Strukturen
struct Punkt
{
	//int x;
	//int y;
	double r;
	double phi;
};

struct Kreis
{
	Punkt mitte;
	int radius;
};

struct Rechteck
{
	Punkt p1;
	Punkt p2;
	Punkt p3;
	Punkt p4;
};

struct Dreieck
{
	Punkt p1;
	Punkt p2;
	Punkt p3;
};


// Prototypen fuer Funktionen
void setXY(Punkt*, int x, int y);
void getXY(Punkt*, int*, int*);
void drucke(Kreis);
void drucke(Rechteck);
void drucke(Dreieck);
float umfang(Kreis);
float umfang(Rechteck);
float umfang(Dreieck);
void verschiebe(Kreis*, int, int);
void verschiebe(Rechteck*, int, int);
void verschiebe(Dreieck*, int, int);
void setPos(Kreis* k, int x, int y, int r);
void setPos(Rechteck* r, int x, int y, int h, int b);