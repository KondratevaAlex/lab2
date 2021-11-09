#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Triangle.h"

void trienter(Triangle* tri)
{
	printf("\n����� ������� �: ");
	scanf("%lf", &tri->a);
	printf("\n����� ������� b: ");
	scanf("%lf", &tri->b);
	printf("\n����� ������� c: ");
	scanf("%lf", &tri->c);
}

void triprint(Triangle tri)
{
	printf("\n����� ������ �, b � c ��������������: %lf, %lf, %lf", tri.a, tri.b, tri.c);
}

double trivolume(Triangle tri) {
	double volume;
	double perim;
	perim = (tri.a + tri.b + tri.c) / 2;
	volume = sqrt(perim * (perim - tri.a) * (perim - tri.b) * (perim - tri.c));
	return volume;
};

double triperimeter(Triangle tri) {
	double perimeter;
	perimeter = tri.a + tri.b + tri.c;
	return perimeter;
}