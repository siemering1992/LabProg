#pragma once
class Punkt
{
private:
	/*int _x;
	int _y;*/

	float _phi, _r;


public:
	void setXY(int, int);
	void getXY(int*, int*);
	void verschiebe(int, int);

	Punkt();
	Punkt(int, int);
};