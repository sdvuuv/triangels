#include <iostream>
#include "triangle.h"
#include "point.h"
// Методы
double CalculateTriangleArea(Triangle &triangle)
{
    Point *v = triangle.vertexes;

    double a = CalculateDistance(v[0], v[1]);
    double b = CalculateDistance(v[1], v[2]);
    double c = CalculateDistance(v[2], v[0]);

    return triangle.area = CalculateAreaBySides(a, b, c);
}

double CalculateAreaBySides(double a, double b, double c)
{
    double p2 = (a + b + c) / 2.0;

    if (p2 <= 0.0 || p2 <= a || p2 <= b || p2 <= c)
        return 0.0;

    return sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
}

bool operator<=(const Triangle &triangle1, const Triangle &triangle2)
{
    return triangle1.area <= triangle2.area;
}
void DeleteTriangle(Triangle &tr)
{
    for (int i = 0; i < 3; i++)
        DeletePoint(tr.vertexes[i]);

    tr.area = 0.0;
}