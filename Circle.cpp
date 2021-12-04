#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Circle.h"
#include <math.h>

#define M_PI   3.14159265358979323846

Circle Circle::setcirc(Circle circ)
{
    printf("\nДлина радиуса r: ");
    scanf("%lf", circ.dlinar);
    return circ;
}

void Circle::printcirc(Circle circ)
{
    printf("\nДлина радиуса r: %lf", circ.dlinar);
}

double Circle::circperimeter(Circle circ)
{
    double perimetr = 0;
    perimetr = 2 * M_PI * pow(circ.dlinar, 2);
    return perimetr;
}

double Circle::circsurf(Circle circ)
{
    double volume = 0;
    volume = M_PI * pow(circ.dlinar, 2);
    return volume;
}
