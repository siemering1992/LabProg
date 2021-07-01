#pragma once
#include <iostream>
#include "kreis.h"

class Halbkreis : public Kreis
{
private:

public:
	float umfang();
	void drucke();

	using Kreis::Kreis; //Benutze die Konstruktoren von Kreis

};