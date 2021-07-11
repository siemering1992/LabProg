#include "punkt.h"
#include <cmath>

Punkt::Punkt()
{
	_r = 0;
	_phi = 0;
}

Punkt::Punkt(int x, int y)
{
	setXY(x, y);
}

void Punkt::verschiebe(int dx, int dy)
{
	int px, py;
	getXY(&px, &py);
	setXY(px + dx, py + dy);
}

void Punkt::getXY(int* x, int* y)
{
	*x = round(_r * cos(_phi));
	*y = round(_r * sin(_phi));
}

void Punkt::setXY(int x, int y)
{

	_r = sqrt(x * x + y * y);
	_phi = atan2(y, x);
}