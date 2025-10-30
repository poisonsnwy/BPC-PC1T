// Cviceni7.cpp : Defines the entry point for the application.
//

#include "Cviceni7.h"

using namespace std;

#include <stdio.h>
#include "Body2d.h"

#define POCET_BODU 10

int main()
{
    int poleBodu[POCET_BODU][2] = {
        {5, 10}, {-14, 2}, {45, 4}, {-9, 8}, {58, -3},
        {47, 5}, {-18, -86}, {75, 7}, {-25, 51}, {17, 98}
    };

    int referencniX, referencniY;
    printf("Zadej souradnice referencniho bodu X a Y (X Y): ");
    scanf("%d %d", &referencniX, &referencniY);

    int index = indexNejblizsi(POCET_BODU, poleBodu, referencniX, referencniY);
    printf("Nejblizsi bod ma index: %d (%d, %d)\n",
        index, poleBodu[index][0], poleBodu[index][1]);

    double prumer1 = prumernaVzdalenost(POCET_BODU, poleBodu,referencniX,referencniY);
    printf("Prumerna delka: %d \n",
        prumer1);
        
    return 0;
}
