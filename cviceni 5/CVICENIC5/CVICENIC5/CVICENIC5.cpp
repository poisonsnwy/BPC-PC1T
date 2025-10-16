// CVICENIC5.cpp : Defines the entry point for the application.
//

#include "CVICENIC5.h"

using namespace std;
void soucet(double a[3], double b[3], double c[3]) {
	for(int i = 0; i < 3; i++) {
		c[i] = a[i] + b[i];
	}
}


double velikost(double a[3])
{
	return sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
	
}

double skalarniSoucin(double a[3], double b[3])
	{
	return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
	}

void vektorovySoucin(double a[3], double b[3], double c[3])
{
	c[0] = a[1]*b[2] - a[2]*b[1];
	c[1] = a[2]*b[0] - a[0]*b[2];
	c[2] = a[0]*b[1] - a[1]*b[0];
}
int main()
{
	double b[3];
	double a[3];
	double c[3];

	printf("Write down coordinates of the first vektor:");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	printf("Write down coordinates of the first vektor:");
	scanf("%d %d %d", &b[0], &b[1], &b[2]);
	printf("Coordinetes of the first vector: %d, %d, %d\n", a[0], a[1], a[2]);
	printf("Coordinetes of the first vector: %d, %d, %d\n", b[0], b[1], b[2]);

	soucet(a, b ,c);
	printf("Soucet vektoruu: %d, %d, %d\n", c[0], c[1], c[2]);
	
	double velikostA = velikost(a);
	printf("Velikost vektoru a je: %d\n", velikostA);
	
	double skalarni = skalarniSoucin(a, b);
	printf("Skalarni soucin vektoru a a b je: %d\n", skalarni);

	return 0;
}
