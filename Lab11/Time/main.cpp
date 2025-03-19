#include <iostream>
#include "Time.h"

int main()
{
    system("chcp 1251");
    try
    {
        const Time time1(11, 59, 59);
        /*const Time time2(1, 70, 80);*/
        Time time2;
        time2.input();
        Time time3;
        Time time4;
        Time time5;
        Time time6;
        /*time3 = time1.addTime(time2);*/
        time3 = time1 + time2;
        time4 = time1 - time2;
        time5 = time2 + 45;
        time6 = 45 + time2;
        std::cout << "time1 ";
        time1.display();

        std::cout << "time2 ";
        time2.display();

        std::cout << "time3 ";
        time3.display();

        std::cout << "time4 ";
        time4.display();

        std::cout << "time5 ";
        time5.display();

        std::cout << "time6 ";
        time6.display();
        std::cout << (time5 == time6 ? "Значения равны" : "Значения не равны");
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }
    return 0;
}
