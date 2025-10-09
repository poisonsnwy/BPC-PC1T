// ROCK2.cpp : Defines the entry point for the application.
//

#include "ROCK2.h"

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
	int rok;
	int rokz;
	int rokk;
	printf("Zadejte prvni rok:\n");
	scanf_s("%d", &rokz);
	printf("Zadejte prvni rok:\n");
	scanf_s("%d", &rokk);

	for (int i = rokz; i <= rokk; i++) {
		int result = jePrestupny(i);
		printf("Rok %d je prestupny: %d\n", i, result);
	}
	return 0;
}