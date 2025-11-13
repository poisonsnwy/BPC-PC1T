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
	}
	return r;

}
void tisk(struct vector3d r, enum typOperace typ) {
	switch (typ) {
	case soucet:
		printf("Součet vektoru: ");
		break;
	case vektorovySoucin:
		printf("Vektorový součin: ");
		break;
	default:
		printf("Neznámá operace: ");
		break;
	}
	printf("(x=%.2f, y=%.2f, z=%.2f)\n", r.x, r.y, r.z);

}