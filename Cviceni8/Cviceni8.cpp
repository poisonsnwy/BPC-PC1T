// Cviceni8.cpp : Defines the entry point for the application.
//

#include "Cviceni8.h"
#include "Kiro.h"

using namespace std;

int main()
{

	double zacatek1;
	double konec1;
	double zacatek2;
	double konec2;
	double vysl_zacatek;
	double vysl_konec;
	printf("Zadejte zacatek a konec prvniho a druheho intervalu '(x1,x2) (x1,x2)' ");
	scanf("(%lf,%lf) (%lf,%lf)", &zacatek1, &konec1, &zacatek2, &konec2);
	if (prunik(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec))
		printf("Prunik intervalu je: (%.2f, %.2f)\n", vysl_zacatek, vysl_konec);
	else
		printf("Intervaly se neprekryvaji.\n");

	return 0;
}
