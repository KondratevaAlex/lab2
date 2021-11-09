#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Parallelogram.h"

void paralenter(Parallelogram* paral)
{
	printf("\nƒлина стороны а: ");
	scanf("%lf", &paral->a);
	printf("\nƒлина стороны b: ");
	scanf("%lf", &paral->b);
	printf("\n”гол между сторонами a и b (в градусах): ");
	scanf("%lf", &paral->alpha);
}

void paralprint(Parallelogram paral)
{
	printf("\nƒлины сторон а, b и угол в градусах между ними соответственно: %lf, %lf, %lf", paral.a, paral.b, paral.alpha);
}

double paralvolume(Parallelogram paral) {
	double volume;
	volume = paral.a * paral.b * paral.alpha;
	return volume;
};

double paralperimeter(Parallelogram paral) {
	double perimeter;
	perimeter = (paral.a + paral.b) * 2;
	return perimeter;
}
