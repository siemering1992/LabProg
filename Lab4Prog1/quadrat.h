#pragma once
#include <iostream>
#include "geometrie.h"
#include "rechteck.h"

class Quadrat : public Rechteck
{


public:

	Quadrat();
	Quadrat(int,int,int);
	void drucke();
	void set(int,int,int,int);
	void set(int,int,int);
};