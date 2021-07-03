#include "punkt.h",
#include "kreis.h" // Kann weg gelassen werden wegen dem #include "halbkreis.h"
#include "rechteck.h"
#include "geometrie.h"
#include "halbkreis.h"
#include "quadrat.h"
using namespace std;


// Hauptprogramm
void main()
{


	// Erstellen der  Geometrien 
	Rechteck rechteck1(1,1,5,10);
	Kreis kreis1(4,1,3);
	Halbkreis halbkreis1(1, 2, 3);
	Quadrat quadrat1(7, 5, 1);

	// Ausführen der Funktionen (Rechteck)
	cout << rechteck1;
	rechteck1.verschiebe(3, 4);
	cout << rechteck1;
	cout << "Umfang: " << rechteck1.umfang() << endl;
	rechteck1.set(0, 0, 10, 10);
	cout << rechteck1;
	cout << "Umfang: "<< rechteck1.umfang() << endl;

	// Ausführen der Funktionen (Kreis)
	cout << kreis1;
	kreis1.verschiebe(3, 2);
	cout << kreis1;
	cout << "Umfang: " << kreis1.umfang() << endl;
	kreis1.set(5, 5, 17);
	cout << kreis1;
	cout << "Umfang: " << kreis1.umfang() << endl;

	// Ausführen der Funktionen (Halbkreis)
	cout << halbkreis1;
	halbkreis1.verschiebe(3, 2);
	cout << halbkreis1;
	cout << "Umfang: " << halbkreis1.umfang() << endl;
	halbkreis1.set(5, 5, 17);
	cout << halbkreis1;
	cout << "Umfang: " << halbkreis1.umfang() << endl;

	// Ausführen der Funktionen (Quadrat)
	cout << quadrat1;
	quadrat1.verschiebe(3, 4);
	cout << quadrat1;
	cout << "Umfang: " << quadrat1.umfang() << endl;
	quadrat1.set(0, 0, 10, 9);
	cout << quadrat1;
	cout << "Umfang: " << quadrat1.umfang() << endl;
}
