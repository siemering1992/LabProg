#pragma once
#include <iostream>
#include "geometrie.h"
#include "punkt.h"

class Kreis: public Geometrie
{
protected :
	Punkt _mitte;
	int _radius;
public:

	virtual void drucke();
	virtual float umfang();
	void verschiebe(int,int);
	void set(int, int, int);

	Kreis();
	Kreis(int x, int y, int r);
};