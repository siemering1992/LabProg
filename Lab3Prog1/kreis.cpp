#include "Kreis.h"
#include <iostream>
using namespace std;

Kreis::Kreis()
{
	Punkt _mitte;
	_radius = 0;
}

Kreis::Kreis(int x, int y, int r)
{
	Punkt _mitte;
	_radius = r;
	set(x, y, r);
}

void Kreis::set(int x, int y, int r)
{
	_mitte = { x, y };
	_radius = r;

}
void Kreis::drucke()
{
	int pmx, pmy;
	_mitte.getXY(&pmx, &pmy);
	cout << "x:" << pmx << " y:" << pmy << endl;
	cout << "Radius:" << _radius << endl;
}

void Kreis::verschiebe(int dx, int dy)
{
		_mitte.verschiebe(dx, dy);
}
