#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Circle.h"
#include <math.h>

#define M_PI   3.14159265358979323846

Circle::Circle()
{
    dlinar = 0.0;
}

Circle::Circle(double noll)
{
    dlinar = noll;
}

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

double* Circle::circperimeter(double* perimetr)
{
    *perimetr = 2 * M_PI * pow(dlinar, 2);
    return perimetr;
}

double& Circle::circsurf(double &volume)
{
    volume = M_PI * pow(dlinar, 2);
    return volume;
}

void Circle::addAnotherInfo(ObjectInfo* someinfo)
{
    another_info = someinfo;
}
