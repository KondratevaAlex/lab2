#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Trapezoid.h"

Trapezoid::Trapezoid()
{
    dlinaa = dlinab = dlinac = dlinad = dlinah = 0.0;
}

Trapezoid::Trapezoid(double noll)
{
    dlinaa = dlinab = dlinac = dlinad = dlinah = noll;
}

Trapezoid::Trapezoid(double _dlinaa, double _dlinab, double _dlinac, double _dlinad, double _dlinah)
{
    dlinaa = _dlinaa;
    dlinab = _dlinab;
    dlinac = _dlinac;
    dlinad = _dlinad;
    dlinah = _dlinah;
}

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

double* Trapezoid::trapperimeter(double* perimetr)
{
    *perimetr = dlinaa + dlinab + dlinac + dlinad;
    return perimetr;
}

double& Trapezoid::trapsurf(double &volume)
{
    volume = ((dlinaa * dlinab) / 2) * dlinah;
    return volume;
}

void Trapezoid::addAnotherInfo(ObjectInfo* someinfo)
{
    another_info = someinfo;
}
