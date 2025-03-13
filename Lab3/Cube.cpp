#include <iostream>
#include <string>
#include <math.h>
using namespace std;
double a;

double iterCube1(double a)
{
    double yi = a,  
        yi1 = 0;  
    while (true) 
    {
        yi1 = 0.5 * (yi + 3 * a / (2 * yi * yi + a / yi));  
        if (abs(yi1 - yi) < pow(10.0, -5.0))  
            break;  
        yi = yi1;         
    }
    return yi;
}
double iterCube2(double a)
{
    double xi = a,
        xi1 = 0;
    while (true) 
    {
        xi1 = 1.0/3 * (( a / (xi * xi)) + 2*xi);
        if (abs(xi1 - xi) < pow(10.0, -5.0))
            break;
        xi = xi1;
    }
    return xi;
}
double cube(double a) 
{
    return pow(a, 1.0/3);
}
int main() {
    system("chcp 1251");
    cout << "Введите x: "<< endl;  
    cin >> a;
    cout << iterCube1(a) << endl;
    cout << iterCube2(a) << endl;
    cout << cube(a) << endl;  
    return 0;
}