#pragma once
#include "punkt.h"
#include "geometrie.h"
class Rechteck:public Geometrie
{
protected:
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