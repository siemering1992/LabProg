#pragma once
#include <iostream>
//Defninition der Klasse Punkt
class Punkt
{
private:
	float _phi, _r;


	//�ffentliche Methoden
public:
	void setXY(int, int);
	void getXY(int*, int*);
	void verschiebe(int, int);

	//Konstruktoren
	Punkt();
	Punkt(int, int);
};