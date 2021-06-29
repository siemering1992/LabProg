# define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "geometrien.h"
using namespace std;


// Drucke Punkt
void drucke(Punkt* p) 
{
	int x, y;
	getXY(p, &x, &y);
	cout << "X: " << x << " Y: " << y <<endl;
}

// Drucke Kreis
void drucke(Kreis k)
{
	cout << "---->Kreis<---- " << endl;
	drucke(&k.mitte);
	cout << "Radius: " << k.radius << endl;
	
}
//Drucke Rechteck
void drucke(Rechteck r)
{
	cout << "---->Rechteck<---- " << endl;
		drucke(&r.p1);
		drucke(&r.p2);
		drucke(&r.p3);
		drucke(&r.p4);
}

//Drucke Kreis
void drucke(Dreieck d)
{
	cout << "---->Dreieck<---- " << endl;
	drucke(&d.p1);
	drucke(&d.p2);
	drucke(&d.p3);
}



// Berechne Umfang Kreis
float umfang(Kreis k)
{
	return M_PI * 2 * k.radius;
}

// Berechne Umfang Rechteck
float umfang(Rechteck r)
{
	int p1x, p1y,p3x, p3y;
	int b,h;

	getXY(&r.p1, &p1x, &p1y);
	getXY(&r.p3, &p3x, &p3y);
	
	b = abs(p3x - p1x);
	h = abs(p3y - p1y);
	return (2 * b) + (2 * h); 
}

// Berechne Umfang Dreieck
float umfang(Dreieck d)
{
	int p1x, p1y, p2x, p2y, p3x, p3y;

	getXY(&d.p1, &p1x, &p1y);
	getXY(&d.p2, &p2x, &p2y);
	getXY(&d.p3, &p3x, &p3y);

	float a = sqrt(((p2x - p1x) * (p2x - p1x)) + ((p2y - p1y) * (p2y - p1y)));
	float b = sqrt(((p3x - p1x) * (p3x - p1x)) + ((p3y - p1y) * (p3y - p1y)));
	float c = sqrt(((p2x - p3x) * (p2x - p3x)) + ((p2y - p3y) * (p2y - p3y)));
	return a + b + c;
}

// verschiebe x und y  Kreis
void verschiebe(Kreis* k, int dx, int dy)
{
	int x, y;
	getXY(&k->mitte, &x, &y);
	setXY(&k->mitte, x+dx, y+dy);
	cout << "verschiebe um: " << dx << "|" << dy << endl;
}

// verschiebe x und y Rechteck
void verschiebe(Rechteck* r, int dx, int dy)
{
	int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
	cout << "verschiebe um: " << dx << "|" << dy << endl;
	getXY(&r->p1, &p1x, &p1y);
	getXY(&r->p2, &p2x, &p2y);
	getXY(&r->p3, &p3x, &p3y);
	getXY(&r->p4, &p4x, &p4y);

	setXY(&r->p1, p1x + dx, p1y + dy);
	setXY(&r->p2, p2x + dx, p2y + dy);
	setXY(&r->p3, p3x + dx, p3y + dy);
	setXY(&r->p4, p4x + dx, p4y + dy);
}

// verschiebe x und y Dreieck
void verschiebe(Dreieck* d, int dx, int dy)
{
	int p1x, p1y, p2x, p2y, p3x, p3y;
	cout << "verschiebe um: " << dx << "|" << dy << endl;

	getXY(&d->p1, &p1x, &p1y);
	getXY(&d->p2, &p2x, &p2y);
	getXY(&d->p3, &p3x, &p3y);
	
	setXY(&d->p1, p1x + dx, p1y + dy);
	setXY(&d->p2, p2x + dx, p2y + dy);
	setXY(&d->p3, p3x + dx, p3y + dy);
}
// Koordinaten neu setzen Kreis
void setPos(Kreis* k, int x, int y, int r)
{
	setXY(&k->mitte, x, y);
	k->radius = r;
}
// Koordinaten neu setzen Rechteck
void setPos(Rechteck* r, int x, int y, int b, int h)
{
	setXY(&r->p4, x, y);
	setXY(&r->p1, x, y + h);
	setXY(&r->p2, x+b, y+h);
	setXY(&r->p3, x + b, y);
}

// Setzen von x,y -> r,yphi

void setXY(Punkt* p, int x, int y)
{
	p->r=sqrt(x*x + y*y);
	p->phi = atan2(y, x);
}

// Abrufen der x,y Variable von einem Punkt
void getXY(Punkt* p, int* x, int* y)
{
	*x = round(p->r * cos(p->phi));
	*y = round(p->r * sin(p->phi));
}


