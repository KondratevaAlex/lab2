#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Trapezoid.h"

void trapenter(Trapezoid* trap)
{
	printf("\nДлина основания а: ");
	scanf("%lf", &trap->a);
	printf("\nДлина основания b: ");
	scanf("%lf", &trap->b);
	printf("\nДлина стороны c: ");
	scanf("%lf", &trap->c);
	printf("\nДлина стороны d: ");
	scanf("%lf", &trap->d);
	printf("\nДлина высоты h: ");
	scanf("%lf", &trap->h);
}

void trapprint(Trapezoid trap)
{
	printf("\nДлина оснований a и b, сторон c и d и высоты h соответственно: %lf, %lf, %lf, %lf, %lf", trap.a, trap.b, trap.c, trap.d, trap.h);
}

double trapvolume(Trapezoid trap)
{
	double volume;
	volume = ((trap.a * trap.b) / 2) * trap.h;
	return volume;
};
double trapperimeter(Trapezoid trap)
{
	double perimeter;
	perimeter = trap.a + trap.b + trap.c + trap.d;
	return perimeter;
};
