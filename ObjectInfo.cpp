#define _CRT_SECURE_NO_WARNINGS
#include "ObjectInfo.h"
#include <iostream>

ObjectInfo::ObjectInfo()
{
	colour = day = month = year = 0;
}

ObjectInfo::ObjectInfo(int colour, int day, int month, int year)
{
	this->colour = colour;
	this->day = day;
	this->month = month;
	this->year = year;
}

ObjectInfo ObjectInfo::setInfo(ObjectInfo obj)
{
	printf("\n¬ведите цвет фигуры (1-красный, 2-синий, 3-зеленый, 4-желтый): ");
	scanf("%d", &obj.colour);
	printf("\n¬ведите сегодн€шний день: ");
	scanf("%d", &obj.day);
	printf("\n¬ведите нынешний мес€ц: ");
	scanf("%d", &obj.month);
	printf("\n¬ведите нынешний год: ");
	scanf("%d", &obj.year);
	return obj;
}

void ObjectInfo::printInfo(ObjectInfo obj)
{
	printf("\n÷вет фигуры(1-красный, 2-синий, 3-зеленый, 4-желтый): %d\nƒата работы: %d/%d/%d", obj.colour, obj.day, obj.month, obj.year);
}
