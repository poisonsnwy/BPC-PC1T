

#include "Body2d.h"
#include <math.h>
#include <stdio.h>

int indexNejblizsi(int velikost, int body[][2], int referencniX, int referencniY)
{
    int nejblizsiIndex = 0;
    double nejmensiVzdalenost = sqrt(
        pow(body[0][0] - referencniX, 2) +
        pow(body[0][1] - referencniY, 2)
    );

    for (int i = 1; i < velikost; i++) {
        double vzdalenost = sqrt(
            pow(body[i][0] - referencniX, 2) +
            pow(body[i][1] - referencniY, 2)
        );

        if (vzdalenost < nejmensiVzdalenost) {
            nejmensiVzdalenost = vzdalenost;
            nejblizsiIndex = i;
        }
    }

    return nejblizsiIndex;
}

double prumernaVzdalenost(int velikost, int body[][2], int referencniX, int referencniY) {
    int Delka;
    for (int i = 1; i < velikost; i++) {
        
        double localDelka = sqrt(
            pow(body[i][0] - referencniX, 2) +
            pow(body[i][1] - referencniY, 2)
        );
        Delka + localDelka;
    }

    double prumer = Delka / velikost;
    return prumer;
}

   