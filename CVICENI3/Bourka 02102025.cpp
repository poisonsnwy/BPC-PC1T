// Bourka 02102025.cpp : Defines the entry point for the application.
//

#include "Bourka 02102025.h"

using namespace std;

int main()
{
	int vydalenost;
	int czas;
	int rychlst = 340;
	printf("Dejte sem czas");
	scanf("%d", &czas);
	vydalenost = rychlst * czas;

	printf("Tam bourka je nekdy za %d mteru", vydalenost);

	
	return 0;
}
