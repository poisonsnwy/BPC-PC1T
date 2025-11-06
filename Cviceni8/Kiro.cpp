#include "Kiro.h"
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;


#pragma once
int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{
    {
        if (zacatek1 > konec1) {
            double t = zacatek1;
            zacatek1 = konec1;
            konec1 = t;
        }
        if (zacatek2 > konec2) {
            double t = zacatek2;
            zacatek2 = konec2;
            konec2 = t;
        }

        if (zacatek1 > zacatek2) {
            double tz = zacatek1, tk = konec1;
            zacatek1 = zacatek2;
            konec1 = konec2;
            zacatek2 = tz;
            konec2 = tk;
        }

        if (zacatek1 <= konec2 && zacatek2 <= konec1) {
            *vysl_zacatek = max(zacatek1, zacatek2);
            *vysl_konec = min(konec1, konec2);
            return 1;
        }
        return 0;
    }
}

