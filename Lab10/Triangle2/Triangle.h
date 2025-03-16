#pragma once
#include "dot.h"
#include <math.h>

class Triangle {
private:
    Dot *a;
    Dot *b;
    Dot *c;

public:
    Triangle(Dot *a, Dot *b, Dot *c);
    double AB();
    double BC();
    double CA();
    double perimeter();
    double area();
};