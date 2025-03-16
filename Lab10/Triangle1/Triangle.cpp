
#include "triangle.h"

Triangle::Triangle(Dot a, Dot b, Dot c) : a(a), b(b), c(c) {}

double Triangle::AB() {
    return a.distanceTo(b);
}

double Triangle::BC() {
    return b.distanceTo(c);
}

double Triangle::CA() {
    return c.distanceTo(a);
}

double Triangle::perimeter() {
    return AB() + BC() + CA();
}

double Triangle::area() {
    double s = perimeter() / 2;
    double area = sqrt(s * (s - AB()) * (s - BC()) * (s - CA()));
    return area;
}