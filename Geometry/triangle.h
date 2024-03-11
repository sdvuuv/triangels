#include <iostream>
#include <cmath>
#include "point.h"
#ifndef _GEOMETRY_H
#define _GEOMETRY_H

using namespace std;

class Triangle
{
public:
    Point vertexes[3];
    double area;
};
// Функции вычисления площадей треугольника
double CalculateTriangleArea(Triangle &tr);
double CalculateAreaBySides(double a, double b, double c);
// Оператор сравнения площадей
bool operator<=(const Triangle &tr1, const Triangle &tr2);
// Функция очистики
void DeleteTriangle(Triangle &tr);

#endif