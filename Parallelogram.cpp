#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Parallelogram.h"

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

double Parallelogram::parperimeter(Parallelogram par)
{
    double perimetr = 0;
    perimetr = (par.dlinaa + par.dlinab) * 2;
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
