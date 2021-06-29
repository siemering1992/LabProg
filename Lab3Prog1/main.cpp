#include <iostream>
#include "punkt.h"
#include "kreis.h"
#include "rechteck.h"
using namespace std;

// Hauptprogramm
void main()
{
	Rechteck Rechteck1(1,1,5,10);
	Kreis kreis1(4,1,3);
	Rechteck1.drucke();
	Rechteck1.verschiebe(3, 4);
	Rechteck1.drucke();
	cout << Rechteck1.umfang() << endl;
	kreis1.drucke();
	kreis1.verschiebe(3, 2);
	kreis1.drucke();
}
