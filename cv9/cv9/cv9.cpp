// cv9.cpp : Defines the entry point for the application.
//

#include "cv9.h"
#include "VectorModul.h"

using namespace std;

int main()
{
	
	printf("If you want to get a summ press 1, if you want to get a vector product press 2.");
	int Pass;
	scanf_s("%d",&Pass);


	printf("Write down data of the first vector (a b c)");
	int x1, y1, z1;
	scanf_s("%d" "%d" "%d", &x1, &y1, &z1);
	struct vector3d u = { x1, y1, z1 };

	printf("Write down data of the second vector (a b c)");
	int x2, y2, z2;
	scanf_s("%d" "%d" "%d", &x2, &y2, &z2);
	struct vector3d v = { x2, y2, z2 };


	struct vector3d r = { 0,0,0 };
	r = operace(u, v, (enum typOperace)Pass);
	 

	tisk(r, (enum typOperace)Pass);

	return 0;
}
