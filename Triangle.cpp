#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Triangle.h"

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

double Triangle::triperimeter(Triangle trian)
{
	double perimetr = 0;
	perimetr = trian.dlinaa + trian.dlinab + trian.dlinac;
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
