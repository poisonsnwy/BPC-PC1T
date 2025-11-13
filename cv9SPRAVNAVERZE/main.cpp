// cv9.cpp : Defines the entry point for the application.
#include "cv9.h"
#include "VectorModul.h"
#include <stdio.h>

int main()
{
	printf("1-5: different operations\n");
	int Pass;
	scanf_s("%d", &Pass);

	if (Pass < 1 || Pass > 5) {
		printf("Invalid operation number!\n");
		return 1;
	}

	printf("Write down data of the first vector (a b c): ");
	double x1, y1, z1;
	scanf_s("%lf %lf %lf", &x1, &y1, &z1);
	struct vector3d u = { x1, y1, z1 };

	struct vector3d v = { 0, 0, 0 };

	if (Pass != 4) {
		printf("Write down data of the second vector (a b c): ");
		double x2, y2, z2;
		scanf_s("%lf %lf %lf", &x2, &y2, &z2);
		v = { x2, y2, z2 };
	}


	struct vector3d r = operace(u, v, (enum typOperace)Pass);


	tisk(r, (enum typOperace)Pass);

	return 0;
}
