// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

using namespace std;


int jelichy(int rok) {
	if (rok % 2 != 0)
		return 1;
	}

int main() {


	int cislo;
	printf("zadajte cislo ktore chcete urcit");
	scanf("%d", &cislo);


	printf("%d\t%d", cislo, jelichy(cislo));

	return 0;

}
