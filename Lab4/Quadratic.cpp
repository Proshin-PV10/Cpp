

#include <iostream>
#include <math.h>
using namespace std;
double a{}, b{}, c{};
int res{};
int Myroot(double, double, double, double&, double&);


int main()
{
    system("chcp 1251");
    double x1;
    double x2;
    cout << "Введите а, b, c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    res=Myroot(a, b, c,x1 ,x2 );
    switch (res)
    {
        case 1:
        {
            cout << "Два корня " << x1 << "\t" << x2 << endl;
            break;
        }
        case 0:
        {
            cout<<"Один корень " << x1 << endl;
            break;
        }
        case -1:
        {
            cout << "нет корней" << endl;
            break;
        }
    }
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double des = b * b - 4 * a * c;
    if (des > 0)
    {
        x1 = (-b + sqrt(des)) / (2 * a);
        x2 = (-b - sqrt(des)) / (2 * a);
        /*cout << x1 << "\t" << x2 << endl;*/
        return 1;
    }
    else if (des == 0)
    {
        x1 = (-b) / (2 * a);
        /*cout << x1 << endl;*/
        return 0;
    }
    else
        cout << "Нет корней"  << endl;
        return -1;
}


