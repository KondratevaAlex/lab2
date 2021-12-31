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
	printf("\n������� ���� ������ (1-�������, 2-�����, 3-�������, 4-������): ");
	scanf("%d", &obj.colour);
	printf("\n������� ����������� ����: ");
	scanf("%d", &obj.day);
	printf("\n������� �������� �����: ");
	scanf("%d", &obj.month);
	printf("\n������� �������� ���: ");
	scanf("%d", &obj.year);
	return obj;
}

void ObjectInfo::printInfo(ObjectInfo obj)
{
	printf("\n���� ������(1-�������, 2-�����, 3-�������, 4-������): %d\n���� ������: %d/%d/%d", obj.colour, obj.day, obj.month, obj.year);
}
