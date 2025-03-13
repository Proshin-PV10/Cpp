

#include <iostream>

double money{0};
int x1 = 1000;//10р
int x2 = 500;//5р
int x3 = 200;//2р
int x4 = 100;//1р
int x5 = 50;//50к
int x6 = 10;//10к
int x7 = 5;//5к
int X8 = 1;//1к
int n1, n2, n3, n4, n5, n6, n7, n8;

int main()
{
    system("chcp 1251");
    std::cout << "Введите сумму" << std::endl;
    std::cin >> money;
    money = money*100;
    while (money != 0)
    {
        if (money >= x1)
        {
            n1 = money / x1;
            money = money - n1 * x1;
            if (n1 != 0) std::cout << n1 << " монет по 10 рублей" << std::endl;
        }
        else if (money >= x2)
        {
            n2 = money / x2;
            money = money - n2 * x2;
            if (n2 != 0) std::cout << n2 << " монет по 5 рублей" << std::endl;
        }
        else if (money >= x3)
        {
            n3 = money / x3;
            money = money - n3 * x3;
            if (n3 != 0) std::cout << n3 << " монет по 2 рубля" << std::endl;
        }
        else if (money >= x4)
        {
            n4 = money / x4;
            money = money - n4 * x4;
            if (n4 != 0) std::cout << n4 << " монет по 1 рублю" << std::endl;
        }
        else if (money >= x5)
        {
            n5 = money / x5;
            money = money - n5 * x5;
            if (n5 != 0) std::cout << n5 << " монет по 50 копеек" << std::endl;
        }
        else if (money >= x6)
        {
            n6 = money / x6;
            money = money - n6 * x6;
            if (n6 != 0) std::cout << n6 << " монет по 10 копеек" << std::endl;
        }
        else if (money >= x7)
        {
            n7 = money / x7;
            money = money - n7 * x7;
            if (n7 != 0) std::cout << n7 << " монет по 5 копеек" << std::endl;
        }
        else
        {
            n8 = money;
            if (n8 != 0) std::cout << n8 << " монет по 1 копейки" << std::endl;
            break;
        }
    }
}

