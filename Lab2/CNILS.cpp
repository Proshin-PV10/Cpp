
#include <iostream>
long long int fullnumber;
int code;
int codes;
int number;
int main()
{
    system("chcp 1251");
    

    int sum{ 0 };

    std::cout << "Введите номер снилс!\n";
    std::cin >> fullnumber;
    code = fullnumber % 100;
    number = fullnumber / 100;
    //std::cout << number << "\t" << code << std::endl;

    for (int i = 1;i<10;i++)
    {
        int x = number % 10;
        number = number / 10;
        //std::cout << x << "\t" << i << std::endl;
        sum += x * i;
        
    }
    //std::cout << sum << std::endl;
    if (sum < 100)
    {       
        codes = sum;
    }
    else if (sum == 100 || sum == 101)
    {
        codes = 00;
    }
    else if (sum > 101)
    {
        codes = sum % 101;
        if (codes == 100)
        {
            codes = 00;
        }
    }
    if (code == codes)
    {
        std::cout << "Снилс корректный" << std::endl;
    }
    else std::cout << "Снилс не корректный" << std::endl;
}

