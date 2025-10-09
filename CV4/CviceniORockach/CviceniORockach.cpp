// CviceniORockach.cpp : Defines the entry point for the application.
//

#include "CviceniORockach.h"

using namespace std;

int jePrestupny(int rok) {

	if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
		return 1;
	}
	else
	{
		return 0;
	}

}


int main() {
	int roky[] = { 1000, 2000, 2002, 2012, 2022, 2200, 2024 };

	int r = sizeof(roky) / sizeof(roky[0]);

	for (int i = 0; i < r; i++) {
		int result = jePrestupny(roky[i]);
		printf("Rok %d je prestupny: %d\n", roky[i], result);
	}
	return 0;
}

