#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "Rectangle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "ObjectInfo.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	do {
		int choice;
		double ansper[2], anssur[2], difper, difsur;
		printf("\nВыберите вид фигур для сравнения:\n1 - Треугольники\n2 - Прямоугольники(квадраты)\n3 - Параллелограммы\n4 - Трапеции\n5 - Круги\n:::");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			Triangle* arr = new Triangle[2];
			ObjectInfo* obj = new ObjectInfo[2];
			for (int i = 0; i < 2; i++) {
				printf("\nВведите данные %d треугольника:\n", i + 1);
				arr[i] = arr->settri(arr[i]);
				obj[i] = obj->setInfo(obj[i]);
				arr->printtri(arr[i]);
				obj->printInfo(obj[i]);
				ansper[i] = arr[i].triperimeter(arr[i]);
				anssur[i] = arr[i].trisurf(ansper[i]);
			}
			difper = ansper[0] / ansper[1];
			difsur = anssur[0] / anssur[1];
			printf("\n\nОтношение периметров треугольников друг к другу: %lf\n", difper);
			printf("Отношение площадей треугольников друг к другу: %lf\n", difsur);
			break;
		}
		case 2: {
			Rectangle* arr = new Rectangle[2];
			ObjectInfo* obj = new ObjectInfo[2];
			for (int i = 0; i < 2; i++) {
				printf("\nВведите данные %d прямоугольника:\n", i + 1);
				arr[i] = arr->setrect(arr[i]);
				obj[i] = obj->setInfo(obj[i]);
				arr->printrect(arr[i]);
				obj->printInfo(obj[i]);
				ansper[i] = arr[i].rectperimeter(arr[i]);
				anssur[i] = arr[i].rectsurf(ansper[i]);
			}
			difper = ansper[0] / ansper[1];
			difsur = anssur[0] / anssur[1];
			printf("\n\nОтношение периметров пряямоугольников друг к другу: %lf\n", difper);
			printf("Отношение площадей прямоугольников друг к другу: %lf\n", difsur);
			break;
		}
		case 3: {
			Parallelogram* arr = new Parallelogram[2];
			ObjectInfo* obj = new ObjectInfo[2];
			for (int i = 0; i < 2; i++) {
				printf("\nВведите данные %d :\n", i + 1);
				printf("\nВведите данные %d параллелограмма:\n", i + 1);
				arr[i] = arr->setpar(arr[i]);
				obj[i] = obj->setInfo(obj[i]);
				arr->printpar(arr[i]);
				obj->printInfo(obj[i]);
				ansper[i] = arr[i].parperimeter(arr[i]);
				anssur[i] = arr[i].parsurf(ansper[i]);
			}
			difper = ansper[0] / ansper[1];
			difsur = anssur[0] / anssur[1];
			printf("\n\nОтношение периметров параллелограммов друг к другу: %lf\n", difper);
			printf("Отношение площадей параллелограммов друг к другу: %lf\n", difsur);
			break;
		}
		case 4: {
			Trapezoid* arr = new Trapezoid[2];
			ObjectInfo* obj = new ObjectInfo[2];
			for (int i = 0; i < 2; i++) {
				printf("\nВведите данные %d трапеции:\n", i + 1);
				arr[i] = arr->settrap(arr[i]);
				obj[i] = obj->setInfo(obj[i]);
				arr->printtrap(arr[i]);
				obj->printInfo(obj[i]);
				ansper[i] = arr[i].trapperimeter(arr[i]);
				anssur[i] = arr[i].trapsurf(ansper[i]);
			}
			difper = ansper[0] / ansper[1];
			difsur = anssur[0] / anssur[1];
			printf("\n\nОтношение периметров трапеций друг к другу: %lf\n", difper);
			printf("Отношение площадей трапеций друг к другу: %lf\n", difsur);
			break;
		}
		case 5: {
			Circle* arr = new Circle[2];
			ObjectInfo* obj = new ObjectInfo[2];
			for (int i = 0; i < 2; i++) {
				printf("\nВведите данные %d круга:\n", i + 1);
				arr[i] = arr->setcirc(arr[i]);
				obj[i] = obj->setInfo(obj[i]);
				arr->printcirc(arr[i]);
				obj->printInfo(obj[i]);
				ansper[i] = arr[i].circperimeter(arr[i]);
				anssur[i] = arr[i].circsurf(ansper[i]);
			}
			difper = ansper[0] / ansper[1];
			difsur = anssur[0] / anssur[1];
			printf("\n\nОтношение периметров кругов друг к другу: %lf\n", difper);
			printf("Отношение площадей кругов друг к другу: %lf\n", difsur);
			break;
		}
		}
	} while (_getch() != 27);
}
