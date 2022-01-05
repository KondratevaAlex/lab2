#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Triangle.h"

Triangle::Triangle()
{
	dlinaa = dlinab = dlinac = 0.0;
}

Triangle::Triangle(double noll)
{
	dlinaa = dlinab = dlinac = noll;
}

Triangle::Triangle(double _dlinaa, double _dlinab, double _dlinac)
{
	dlinaa = _dlinaa;
	dlinab = _dlinab;
	dlinac = _dlinac;
}

Triangle Triangle::settri(Triangle trian)
{
	printf("\n����� ������� �: ");
	scanf("%lf", &trian.dlinaa);
	printf("����� ������� b: ");
	scanf("%lf", &trian.dlinab);
	printf("����� ������� c: ");
	scanf("%lf", &trian.dlinac);
	return trian;
}

void Triangle::printtri(Triangle trian)
{
	printf("\n����� ������ �, b � c ��������������: %lf, %lf, %lf", trian.dlinaa, trian.dlinab, trian.dlinac);
}

double* Triangle::triperimeter(double* perimetr)
{
	*perimetr = dlinaa + dlinab + dlinac;
	return perimetr;
}

double& Triangle::trisurf(double& volume)
{
	double perim = 0;
	perim = (dlinaa + dlinab + dlinac) / 2;
	volume = sqrt(perim * (perim - dlinaa) * (perim - dlinab) * (perim - dlinac));
	return volume;
}

void Triangle::addAnotherInfo(ObjectInfo* someinfo)
{
	another_info = someinfo;
}
