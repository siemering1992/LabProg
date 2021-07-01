#pragma once
#include <iostream>
class Geometrie
{
private:
	
public:
	virtual void drucke() = 0;
	virtual float umfang()= 0;
	virtual void verschiebe(int, int) = 0;
};