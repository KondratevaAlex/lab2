#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "ObjectInfo.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	//Student* Student1;
	//Student1 = new Student("Ivanov");
	//cout << Student1;
	//Student Student2("Oleg", "Vladimirovich", "Popov");
	//cout << Student2;
	//Student newstudent(Student2);
	//printf("Конструктор копирования: ");
	//cout << newstudent;

	//Student Student3;
	//cout << Student3;
	//Student3 = newstudent;
	//printf("Оператор присваивания: ");
	//cout << Student3;

    //int counter = Student::getCount();
    //printf("Количество студентов: %d", counter);

	//Triangle arrtri[3] = {1.0, 2.0, 3.0};
	//for (int i = 0; i < 3; i++)
		//arrtri[i].printtri(arrtri[i]);

	Teacher teacher("Victor", "Sergeevich", "Troitsky", 18);
	teacher.setAnotherInformation();
	cout << teacher;
	//teacher.estimate();
	Student student("Victor", "Vladimirovich", "Babarykin");
	student.setAnotherInformation();
	cout << student;

	Rectangle Array[5];
	printf("\nВведите координаты 5 точек: ");
	for (int i = 0; i < 5; i++) {
		Array[i].setrect(Array[i]);
	}
	printf("Одномерный массив точек: ");
	for (int i = 0; i < 5; i++) {
		Array[i].printrect(Array[i]);
	}

	printf("\nВведите координаты 6 точек: ");
	Rectangle newArray[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			newArray[i][j].setrect(newArray[i][j]);
		}
	}
	printf("Двумерный массив точек");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			newArray[i][j].printrect(newArray[i][j]);
	}

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
				arr[i].triperimeter(&ansper[i]);
				anssur[i] = arr[i].trisurf(anssur[i]);
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
				arr[i].rectperimeter(&ansper[i]);
				anssur[i] = arr[i].rectsurf(anssur[i]);
			}
			Rectangle Plus = arr[0] + arr[1];
			printf("\nУнарный плюс: Plus = M + K : ");
			Plus.printrect(Plus);

			Plus = ++arr[0];
			printf("\nПрефиксный инкремент: Plus = ++M : ");
			Plus.printrect(Plus);

			Plus = arr[0]++;
			printf("\nПостфиксный инкремент: Plus = K++ : ");
			Plus.printrect(Plus);
			Plus = arr[0];
			printf("Plus = K :");
			Plus.printrect(Plus);
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
				arr[i].parperimeter(&ansper[i]);
				anssur[i] = arr[i].parsurf(anssur[i]);
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
				arr[i].trapperimeter(&ansper[i]);
				anssur[i] = arr[i].trapsurf(anssur[i]);
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
				arr[i].circperimeter(&ansper[i]);
				anssur[i] = arr[i].circsurf(anssur[i]);
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
