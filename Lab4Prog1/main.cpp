#include <iostream>
#include "punkt.h"
#include "kreis.h"
#include "rechteck.h"
using namespace std;

// Hauptprogramm
void main()
{
	// Erstellen der  Geometrien 
	Rechteck Rechteck1(1,1,5,10);
	Kreis kreis1(4,1,3);

	// Ausführen der Funktionen (Rechteck)
	Rechteck1.drucke();
	Rechteck1.verschiebe(3, 4);
	Rechteck1.drucke();
	cout << Rechteck1.umfang() << endl;
	Rechteck1.set(0, 0, 10, 10);
	Rechteck1.drucke();
	cout << "Umfang: "<< Rechteck1.umfang() << endl;

	// Ausführen der Funktionen (Kreis)
	kreis1.drucke();
	kreis1.verschiebe(3, 2);
	kreis1.drucke();
	cout << "Umfang: " << kreis1.umfang() << endl;
	kreis1.set(5, 5, 17);
	kreis1.drucke();
	cout << "Umfang: " << kreis1.umfang() << endl;
	
}
