#pragma once
#include <iostream>
#include "punkt.h"
class Kreis
{
private:
	Punkt _mitte;
	int _radius;


public:

	void drucke();
	float umfang();
	void verschiebe(int,int);
	void set(int, int, int);

	Kreis();
	Kreis(int x, int y, int r);
};