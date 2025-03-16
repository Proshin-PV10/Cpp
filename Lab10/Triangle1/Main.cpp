#include <iostream>
#include "dot.h"
#include "triangle.h"

int main() {
    double x1, y1, x2, y2, x3, y3;
    system("chcp 1251");
    std::cout << "Введите координаты первой точки (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты второй точки (x2, y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты третьей точки (x3, y3): ";
    std::cin >> x3 >> y3;

    Dot dot1(x1, y1);
    Dot dot2(x2, y2);
    Dot dot3(x3, y3);

    Triangle triangle(dot1, dot2, dot3);

    std::cout << "Длина стороны A: " << triangle.AB() << std::endl;
    std::cout << "Длина стороны B: " << triangle.BC() << std::endl;
    std::cout << "Длина стороны C: " << triangle.CA() << std::endl;
    std::cout << "Периметр треугольника: " << triangle.perimeter() << std::endl;
    std::cout << "Площадь треугольника: " << triangle.area() << std::endl;

    return 0;
}
