#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Rectangle.h"

void rectenter(struct Rectangle* rect)
{
	printf("\n����� ������� �: ");
	scanf("%lf", &rect->a);
	printf("\n����� ������� b: ");
	scanf("%lf", &rect->b);
}
;
void rectprint(struct Rectangle rect)
{
	printf("\n����� ������ � � b ��������������: %lf, %lf", rect.a, rect.b);
};

double rectvolume(Rectangle rect) {
	double volume;
	volume = rect.a * rect.b;
	return volume;
};

double rectperimeter(Rectangle rect) {
	double perimeter;
	perimeter = (rect.a + rect.b) * 2;
	return perimeter;
}
