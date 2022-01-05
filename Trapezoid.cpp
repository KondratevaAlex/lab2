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
    printf("\n����� ��������� �: ");
    scanf("%lf", &trap.dlinaa);
    printf("\n����� ��������� b: ");
    scanf("%lf", &trap.dlinab);
    printf("\n����� ������� c: ");
    scanf("%lf", &trap.dlinac);
    printf("\n����� ������� d: ");
    scanf("%lf", &trap.dlinad);
    printf("\n����� ������ h: ");
    scanf("%lf", &trap.dlinah);
    return trap;
}

void Trapezoid::printtrap(Trapezoid trap)
{
    printf("\n����� ��������� a � b, ������ c � d � ������ h ��������������: %lf, %lf, %lf, %lf, %lf", trap.dlinaa, trap.dlinab, trap.dlinac, trap.dlinad, trap.dlinah);
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
