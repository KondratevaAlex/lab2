#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Parallelogram.h"

void paralenter(Parallelogram* paral)
{
	printf("\n����� ������� �: ");
	scanf("%lf", &paral->a);
	printf("\n����� ������� b: ");
	scanf("%lf", &paral->b);
	printf("\n���� ����� ��������� a � b (� ��������): ");
	scanf("%lf", &paral->alpha);
}

void paralprint(Parallelogram paral)
{
	printf("\n����� ������ �, b � ���� � �������� ����� ���� ��������������: %lf, %lf, %lf", paral.a, paral.b, paral.alpha);
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
