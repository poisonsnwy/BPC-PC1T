#include "VectorModul.h"
#include <stdio.h>



struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
	struct vector3d r;

	switch (typ)
	{
	case soucet:
		r.x = u.x + v.x;
		r.y = u.y + v.y;
		r.z = u.z + v.z;

		break;
	case vektorovySoucin:

		r.x = u.y * v.z - u.z * v.y;
		r.y = u.z * v.x - u.x * v.z;
		r.z = u.x * v.y - u.y * v.x;
		break;
	case skalarniSoucet:

		r.x = u.x * v.x + u.y * v.y + u.z * v.z; 
		r.y = 0;
		r.z = 0;
		break;
	case velikostVektoru:
		r.x = u.x * u.x + u.y * u.y + u.z * u.z;
		break;
	case porovnaniVektoru:
		r.x = u.x * u.x + u.y * u.y + u.z * u.z;
		r.y = v.x * v.x + v.y * v.y + v.z * v.z;
		
	}

	return r;

}
void tisk(struct vector3d r, enum typOperace typ) {
	switch (typ) {
	case soucet:
		printf("Součet vektoru: ");
		printf("(x=%.2f, y=%.2f, z=%.2f)\n", r.x, r.y, r.z);
		break;
	case vektorovySoucin:
		printf("Vektorový součin: ");
		printf("(x=%.2f, y=%.2f, z=%.2f)\n", r.x, r.y, r.z);
		break;
	case skalarniSoucet:
		printf("Skalarni součin:(=%.2f)\n ", r.x);
		break;
	case velikostVektoru:
		printf("Velikst vektoru: ");
		printf("(x=%.2f, y=%.2f, z=%.2f)\n", r.x);
		break;
	case porovnaniVektoru:
		if (r.x > r.y) {
			printf("Prvni je vetsi");
		}
		else if (r.x < r.y) {
			printf("Druhy je vetsi");

		}
		else
			printf("jsou stejna");
		
		break;
	default:
		printf("Neznámá operace: ");
		break;
	}

}