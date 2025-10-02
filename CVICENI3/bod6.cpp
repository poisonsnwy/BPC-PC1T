// bod6.cpp : Defines the entry point for the application.
//

#include "bod6.h"

using namespace std;

int main()
{
	int a;
	int b;
	printf("ahoj kamarade chci abys mi poslal delky stran obdelniku prosim te\n");
	printf("napis delku prvni strany \n");
	scanf("%d", &a);
	printf("napis delku druhe strany \n");
	scanf("%d", &b);
	int obvod = a*2+b*2;
	int obsah = a * b;
	int uhlopricku = sqrt(a * a + b * b);
	printf("ahoj kamarade ted ti napisu ruzne veci o tvem obledniku ");
		printf("obvod %d \n" , obvod);
		printf("obsah %d \n", obsah);
		printf("uhlopricka %d \n" , uhlopricku);
	return 0;
}
