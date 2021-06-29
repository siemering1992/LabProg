#include <iostream>
#include <cmath>
#include "geometrien.h"
#include <cassert>
using namespace std;

void tests()
{
	// Test getXY
	Punkt p1;
	p1.phi = 0;
	p1.r = 1;

	int x, y;
	getXY(&p1, &x, &y);
	assert(x == 1);
	assert(y == 0);

	// Test setXY
	Punkt p2;
	p2.phi = 0;
	p2.r = 1;

	setXY(&p2, 1, 0);
	assert(p2.phi == 0);
	assert(p2.r == 1);

	// Test setXY & getXY
	Punkt p3;
	setXY(&p3, 10, 2);
	getXY(&p3, &x, &y);
	assert(x == 10);
	assert(y == 2);

	//Test umfang Rechteck
	Rechteck r;
	setXY(&r.p1, 0, 10);
	setXY(&r.p2, 10, 10);
	setXY(&r.p3, 10, 0);
	setXY(&r.p4, 0, 0);

	float u = umfang(r);
	assert(u == 40.0f);


	//Test verschiebe Rechteck
	Rechteck r2;
	setXY(&r2.p1, 0, 10);
	setXY(&r2.p2, 10, 10);
	setXY(&r2.p3, 10, 0);
	setXY(&r2.p4, 0, 0);
	setPos(&r2, 10, 20, 30, 40);

	int tx, ty;
	getXY(&r2.p1, &tx, &ty);
	assert(tx == 10);
	assert(ty == 60);

	getXY(&r2.p2, &tx, &ty);
	assert(tx == 40);
	assert(ty == 60);

	getXY(&r2.p3, &tx, &ty);
	assert(tx == 40);
	assert(ty == 20);

	getXY(&r2.p4, &tx, &ty);
	assert(tx == 10);
	assert(ty == 20);

}