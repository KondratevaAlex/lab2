#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
    dlinaa = dlinab = ygolalp = 0.0;
}

Parallelogram::Parallelogram(double noll)
{
    dlinaa = dlinab = ygolalp = noll;
}

Parallelogram::Parallelogram(double _dlinaa, double _dlinab, double _ygolalp)
{
    dlinaa = _dlinaa;
    dlinab = _dlinab;
    ygolalp = _ygolalp;
}

Parallelogram Parallelogram::setpar(Parallelogram par)
{
    printf("\n����� ������� �: ");
    scanf("%lf", par.dlinaa);
    printf("\n����� ������� b: ");
    scanf("%lf", par.dlinab);
    printf("\n���� ����� ��������� a � b (� ��������): ");
    scanf("%lf", par.ygolalp);
    return par;
}

void Parallelogram::printpar(Parallelogram par)
{
    printf("\n����� ������ �, b � ���� � �������� ����� ���� ��������������: %lf, %lf, %lf", par.dlinaa, par.dlinab, par.ygolalp);
}

double* Parallelogram::parperimeter(double* perimetr)
{
    *perimetr = (dlinaa + dlinab) * 2;
    return perimetr;
}

double& Parallelogram::parsurf(double& volume)
{
    volume = dlinaa * dlinab * ygolalp;
    return volume;
}

void Parallelogram::addAnotherInfo(ObjectInfo* someinfo)
{
    another_info = someinfo;
}
