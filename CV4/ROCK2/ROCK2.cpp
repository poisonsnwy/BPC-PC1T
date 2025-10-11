// ROCK2.cpp : Defines the entry point for the application.
//


#include <iostream>


int jePrestupny(int rok) {

	if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
		return 1;
	}
	return 0;

}


int main() {
	using namespace std;


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