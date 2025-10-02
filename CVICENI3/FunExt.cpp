﻿// FunExt.cpp : Defines the entry point for the application.
//

#include "FunExt.h"

using namespace std;

int main()
{

    double minY = DBL_MIN;
    int minX = INT_MIN;
    for (int x = 10; x<=20; ++x)
    {
        double y = 5 - 3 * x + 2 * (x - 5) * (x - 5) - (x - 10) * (x - 10) * (x - 10);

        if (y > minY)
        {
            minY = y;
            minX = x;
        }
    }
    printf("Maximum value: %lf at x=%d\n", minY, minX);
    return 0;
}
