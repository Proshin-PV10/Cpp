#include <iostream>
#include "dot.h"
#include "triangle.h"

int main() {
    double x1, y1, x2, y2, x3, y3;
    system("chcp 1251");
    std::cout << "������� ���������� ������ ����� (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "������� ���������� ������ ����� (x2, y2): ";
    std::cin >> x2 >> y2;
    std::cout << "������� ���������� ������� ����� (x3, y3): ";
    std::cin >> x3 >> y3;

    Dot dot1(x1, y1);
    Dot dot2(x2, y2);
    Dot dot3(x3, y3);

    Triangle triangle(dot1, dot2, dot3);

    std::cout << "����� ������� A: " << triangle.AB() << std::endl;
    std::cout << "����� ������� B: " << triangle.BC() << std::endl;
    std::cout << "����� ������� C: " << triangle.CA() << std::endl;
    std::cout << "�������� ������������: " << triangle.perimeter() << std::endl;
    std::cout << "������� ������������: " << triangle.area() << std::endl;

    return 0;
}
