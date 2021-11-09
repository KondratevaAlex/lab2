#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Circle.h"
#include <math.h>

#define M_PI   3.14159265358979323846

void circenter(Circle* circ)
{
	printf("\nДлина радиуса r: ");
	scanf("%lf", &circ->r);
}

void circprint(Circle circ)
{
	printf("\nДлина радиуса r: %lf", circ.r);
}

double circvolume(Circle circ)
{
	double volume;
	volume = M_PI * pow(circ.r, 2);
	return volume;
};

double circperimeter(Circle circ)
{
	double perimeter;
	perimeter = 2 * M_PI * pow(circ.r, 2);
	return perimeter;
};