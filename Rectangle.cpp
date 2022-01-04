#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Rectangle.h"

Rectangle Rectangle::setrect(Rectangle rect)
{
	printf("\nДлина стороны а: ");
	scanf("%lf", &rect.dlinaa);
	printf("\nДлина стороны b: ");
	scanf("%lf", &rect.dlinab);
	return rect;
}

void Rectangle::printrect(Rectangle rect)
{
	printf("\nДлины сторон а и b соответственно: %lf, %lf", rect.dlinaa, rect.dlinab);
}

double* Rectangle::rectperimeter(double* perimetr)
{
	*perimetr = (dlinaa * dlinab) * 2;
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

Rectangle Rectangle::operator+(const Rectangle& another)
{
	Rectangle result;
	result.dlinaa = this->dlinaa + another.dlinaa;
	result.dlinab = this->dlinab + another.dlinab;
	return result;
}

Rectangle& Rectangle::operator++()
{
	this->dlinaa += 1;
	this->dlinab += 1;
	return *this;
}

Rectangle& Rectangle::operator++(int)
{
	Rectangle tmp(*this);
	this->dlinaa++;
	this->dlinab++;
	return tmp;
}
