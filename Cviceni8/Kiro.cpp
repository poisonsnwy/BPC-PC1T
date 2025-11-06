#include "Kiro.h"
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;


#pragma once
int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{
	if (zacatek1 <= konec2 && zacatek2 <= konec1) {
		*vysl_zacatek = max(zacatek1, zacatek2);
		*vysl_konec = min(konec1, konec2);
		return 1;
	}
	return 0;
}

