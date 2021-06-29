#pragma once
// Definiere Strukturen
struct Punkt
{
	int x;
	int y;
};
struct Kreis
{
	Punkt mitte;
	int radius;
	float umfang;
};

// Prototypen fuer Funktionen
void drucke(Kreis);
float umfang(Kreis);
void verschiebe(Kreis*, int, int);




