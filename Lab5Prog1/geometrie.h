#pragma once
#include <iostream>

// Basisklasse (Interfaceklasse)
class Geometrie
{
private:
	
public:
	//Gemeinsame Methoden die im später überschrieben werden
	virtual void drucke() = 0;
	virtual float umfang()= 0;
	virtual void verschiebe(int, int) = 0;
};