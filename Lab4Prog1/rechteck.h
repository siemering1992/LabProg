#pragma once
#include "punkt.h"
class Rechteck
{
private:
	Punkt* _punkt;

public:
	void set(int, int, int, int);
	void verschiebe(int, int);
	void drucke();
	float umfang();

	Rechteck();
	Rechteck(int,int,int,int);
	~Rechteck();
};