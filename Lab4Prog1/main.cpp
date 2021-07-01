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
	rechteck1.drucke();
	rechteck1.verschiebe(3, 4);
	rechteck1.drucke();
	cout << "Umfang: " << rechteck1.umfang() << endl;
	rechteck1.set(0, 0, 10, 10);
	rechteck1.drucke();
	cout << "Umfang: "<< rechteck1.umfang() << endl;

	// Ausführen der Funktionen (Kreis)
	kreis1.drucke();
	kreis1.verschiebe(3, 2);
	kreis1.drucke();
	cout << "Umfang: " << kreis1.umfang() << endl;
	kreis1.set(5, 5, 17);
	kreis1.drucke();
	cout << "Umfang: " << kreis1.umfang() << endl;

	// Ausführen der Funktionen (Halbkreis)
	halbkreis1.drucke();
	halbkreis1.verschiebe(3, 2);
	halbkreis1.drucke();
	cout << "Umfang: " << halbkreis1.umfang() << endl;
	halbkreis1.set(5, 5, 17);
	halbkreis1.drucke();
	cout << "Umfang: " << halbkreis1.umfang() << endl;

	quadrat1.drucke();
	quadrat1.verschiebe(3, 4);
	quadrat1.drucke();
	cout << "Umfang: " << quadrat1.umfang() << endl;
	quadrat1.set(0, 0, 10, 10);
	quadrat1.drucke();
	cout << "Umfang: " << quadrat1.umfang() << endl;


}
