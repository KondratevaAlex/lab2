#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Rectangle.h"

Rectangle Rectangle::setrect(Rectangle rect)
{
	printf("\n����� ������� �: ");
	scanf("%lf", &rect.dlinaa);
	printf("\n����� ������� b: ");
	scanf("%lf", &rect.dlinab);
	return rect;
}

void Rectangle::printrect(Rectangle rect)
{
	printf("\n����� ������ � � b ��������������: %lf, %lf", rect.dlinaa, rect.dlinab);
}

double Rectangle::rectperimeter(Rectangle rect)
{
	double perimetr = 0;
	perimetr = (rect.dlinaa * rect.dlinab) * 2;
	return perimetr;
}

double& Rectangle::rectsurf(double& volume)
{
	volume = dlinaa * dlinab;
	return volume;
}

void Rectangle::addAnotherInfo(ObjectInfo* someinfo)
{
	another_info = someinfo;
}
