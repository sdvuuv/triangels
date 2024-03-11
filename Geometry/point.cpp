#include <iostream>
#include "point.h"

using namespace std;
// Конструкторы
Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double nx, double ny)
{
    x = nx;
    y = ny;
}
// Методы
double CalculateDistance(const Point &pointA, const Point &pointB)
{
    return sqrt((pointB.x - pointA.x) * (pointB.x - pointA.x) + (pointB.y - pointA.y) * (pointB.y - pointA.y));
}

void DeletePoint(Point &point)
{
    point.x = point.y = 0.0;
}
