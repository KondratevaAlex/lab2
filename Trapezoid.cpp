#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Trapezoid.h"

Trapezoid Trapezoid::settrap(Trapezoid trap)
{
    printf("\nДлина основания а: ");
    scanf("%lf", &trap.dlinaa);
    printf("\nДлина основания b: ");
    scanf("%lf", &trap.dlinab);
    printf("\nДлина стороны c: ");
    scanf("%lf", &trap.dlinac);
    printf("\nДлина стороны d: ");
    scanf("%lf", &trap.dlinad);
    printf("\nДлина высоты h: ");
    scanf("%lf", &trap.dlinah);
    return trap;
}

void Trapezoid::printtrap(Trapezoid trap)
{
    printf("\nДлина оснований a и b, сторон c и d и высоты h соответственно: %lf, %lf, %lf, %lf, %lf", trap.dlinaa, trap.dlinab, trap.dlinac, trap.dlinad, trap.dlinah);
}

double Trapezoid::trapperimeter(Trapezoid trap)
{
    double perimetr = 0;
    perimetr = trap.dlinaa + trap.dlinab + trap.dlinac + trap.dlinad;
    return perimetr;
}

double Trapezoid::trapsurf(Trapezoid trap)
{
    double volume = 0;
    volume = ((trap.dlinaa * trap.dlinab) / 2) * trap.dlinah;
    return volume;
}

void Trapezoid::addAnotherInfo(ObjectInfo* someinfo)
{
    another_info = someinfo;
}
