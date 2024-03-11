#include <iostream>
#include <cmath>
#ifndef _POINT_H
#define _POINT_H
using namespace std;

class Point
{
public:
    double x, y;
    Point();
    Point(double xn, double yn);
};

// Вычисление расстояния между двумя точками
double CalculateDistance(const Point &pointA, const Point &pointB);
// Функция очищения точки
void DeletePoint(Point &point);

#endif
