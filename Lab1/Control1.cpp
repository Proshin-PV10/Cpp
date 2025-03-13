#include <iostream>
#include<cmath>

int main()
{
    system("chcp 1251");
    double y1,y2,y3,y4,y5;
    double x1,x2,x3,x4,x5;
    double S{ 0 };
    //std::cout.precision(4);
    std::cout << "Введите координаты X и Y первой вершины\n";
    std::cin >> x1;
    std::cin >> y1;
    std::cout << "Введите координаты X и Y второй вершины\n";
    std::cin >> x2;
    std::cin >> y2;
    std::cout << "Введите координаты X и Y третьей вершины\n";
    std::cin >> x3;
    std::cin >> y3;
    std::cout << "Введите координаты X и Y четвертой вершины\n";
    std::cin >> x4;
    std::cin >> y4;
    std::cout << "Введите координаты X и Y пятой вершины\n";
    std::cin >> x5;
    std::cin >> y5;
    S = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
    std::cout << "Площадь пятиугольника равна "<< S << std::endl;
}