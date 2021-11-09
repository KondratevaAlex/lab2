#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include "Rectangle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Circle.h"
#include "Trapezoid.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Rectangle rectangle;
    struct Triangle triangle;
    struct Parallelogram parallelogram;
    struct Circle circle;
    struct Trapezoid trapezoid;

    double rvolume, rperimeter, rotv, trvolume, trperimeter, triotv, parvolume, parperimeter, parotv, civolume, ciperimeter, ciotv, trpvolume, trpperimeter, trapotv;

    printf("\nВвведите данные для прямоугольника.\n");
    rectenter(&rectangle);
    rvolume = rectvolume(rectangle);
    rperimeter = rectperimeter(rectangle);
    rotv = rvolume / rperimeter;
    printf("\nОбъем прямоугольника: %lf", rvolume);
    printf("\nПериметр прямоугольника: %lf", rperimeter);
    printf("\nОтношение площади прямоугольника к его периметру: %lf", rotv);

    printf("\nВвведите данные для треугольника.\n");
    trienter(&triangle);
    trvolume = trivolume(triangle);
    trperimeter = triperimeter(triangle);
    triotv = trvolume / trperimeter;
    printf("\nОбъем треугольника: %lf", trvolume);
    printf("\nПериметр треугольника: %lf", trperimeter);
    printf("\nОтношение площади треугольника к его периметру: %lf", triotv);

    printf("\nВвведите данные для параллелограмма.\n");
    paralenter(&parallelogram);
    parvolume = paralvolume(parallelogram);
    parperimeter = paralperimeter(parallelogram);
    parotv = parvolume / parperimeter;
    printf("\nОбъем параллелограмма: %lf", parvolume);
    printf("\nПериметр параллелограмма: %lf", parperimeter);
    printf("\nОтношение площади параллелограмма к его периметру: %lf", parotv);

    printf("\nВвведите данные для круга.\n");
    circenter(&circle);
    civolume = circvolume(circle);
    ciperimeter = circperimeter(circle);
    ciotv = civolume / ciperimeter;
    printf("\nОбъем круга: %lf", civolume);
    printf("\nПериметр круга: %lf", ciperimeter);
    printf("\nОтношение площади круга к его периметру: %lf", ciotv);


    printf("\nВвведите данные для трапеции.\n");
    trapenter(&trapezoid);
    trpvolume = trapvolume(trapezoid);
    trpperimeter = trapperimeter(trapezoid);
    trapotv = trpvolume / trpperimeter;
    printf("\nОбъем трапеции: %lf", trpvolume);
    printf("\nПериметр трапеции: %lf", trpperimeter);
    printf("\nОтношение площади трапеции к его периметру: %lf", trapotv);

    _getch();
}
