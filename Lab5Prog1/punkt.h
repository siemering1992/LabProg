#pragma once
#include <iostream>
//Defninition der Klasse Punkt
class Punkt
{
private:
	float _phi, _r;


	//Öffentliche Methoden
public:
	void setXY(int, int);
	void getXY(int*, int*);
	void verschiebe(int, int);

	//Konstruktoren
	Punkt();
	Punkt(int, int);
};