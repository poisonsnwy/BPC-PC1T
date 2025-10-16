// CMakeProjectTest.cpp : Defines the entry point for the application.
//

#include "CMakeProjectTest.h"

using namespace std;

#include <stdio.h>
#include <math.h> // kvůli sqrt

void soucet(double a[3], double b[3], double c[3]) {
	for (int i = 0; i < 3; i++) {
		c[i] = a[i] + b[i];
	}
}

double velikost(double a[3]) {
	return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}

double skalarniSoucin(double a[3], double b[3]) {
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void vektorovySoucin(double a[3], double b[3], double c[3]) {
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = a[2] * b[0] - a[0] * b[2];
	c[2] = a[0] * b[1] - a[1] * b[0];
}

int main() {
	double a[3], b[3], c[3];

	printf("Write down coordinates of the first vector (with commas between): ");
	scanf("%lf,%lf,%lf", &a[0], &a[1], &a[2]);

	printf("Write down coordinates of the second vector(with commas between): ");
	scanf("%lf,%lf,%lf", &b[0], &b[1], &b[2]);

	printf("Coordinates of the first vector: %.2lf, %.2lf, %.2lf\n", a[0], a[1], a[2]);
	printf("Coordinates of the second vector: %.2lf, %.2lf, %.2lf\n", b[0], b[1], b[2]);

	soucet(a, b, c);
	printf("Soucet: %.2lf, %.2lf, %.2lf\n", c[0], c[1], c[2]);

	double velikostA = velikost(a);
	printf("Velikost: %.2lf\n", velikostA);

	double skalarni = skalarniSoucin(a, b);
	printf("Skalarni soucin: %.2lf\n", skalarni);

	vektorovySoucin(a, b, c);
	printf("Vektorovej soucin: %.2lf, %.2lf, %.2lf\n", c[0], c[1], c[2]);

	return 0;
}
