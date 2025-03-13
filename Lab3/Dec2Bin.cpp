#include <iostream>
using namespace std;

void Dec2Bin(int n) 
{
    if (n > 1) 
    {
        Dec2Bin(n / 2); 
    }
    cout << n % 2; 
}

int main() 
{
    system("chcp 1251");
    int n;
    cout << "Введите десятичное число: ";
    cin >> n;
    cout <<n<< " в двойчной форме равно ";
    Dec2Bin(n);
    cout << endl;

    return 0;
}
