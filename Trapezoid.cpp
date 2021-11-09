#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Trapezoid.h"

void trapenter(Trapezoid* trap)
{
	printf("\n����� ��������� �: ");
	scanf("%lf", &trap->a);
	printf("\n����� ��������� b: ");
	scanf("%lf", &trap->b);
	printf("\n����� ������� c: ");
	scanf("%lf", &trap->c);
	printf("\n����� ������� d: ");
	scanf("%lf", &trap->d);
	printf("\n����� ������ h: ");
	scanf("%lf", &trap->h);
}

void trapprint(Trapezoid trap)
{
	printf("\n����� ��������� a � b, ������ c � d � ������ h ��������������: %lf, %lf, %lf, %lf, %lf", trap.a, trap.b, trap.c, trap.d, trap.h);
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
