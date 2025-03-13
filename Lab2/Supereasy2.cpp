#include <iostream>
using namespace std;

int n{ 0 };
bool easy;
bool supereasy;
int main()
{
    system("chcp 1251");
    cout << "Введите число: ";
    cin >> n;
    int k{ 0 };
    int j{};
    supereasy = true;
    int number{ 1 };
    if (n <= 2)
    {
        easy = false;
        supereasy = false;
        cout << n << " -  не суперпростое число";
    }
    else
    {
        for (int j = 1;j <= n;j++)
        {


            for (int i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    easy = false;
                    supereasy = false;                    
                    break;
                }
                else easy = true;
            }
            if (easy == true)
            {
                number++;
                for (int k = 2;k < number;k++)
                {
                    if (number % k == 0)
                    {
                        supereasy = false;
                        break;
                    }
                    else supereasy = true;
                }

                //cout << j << "\t" << (easy ? "Число простое" : "Число не простое") << "\t" << number << "\t" << (supereasy ? "Число простое" : "Число не простое") << endl; 
            }
            if (supereasy == true && j == n)
                cout << n << " - суперпростое число";
            if (supereasy == false && j == n)
                cout << n << " -  не суперпростое число";

        }
    }

}