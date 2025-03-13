
#include <iostream>
#include <cmath> 
using namespace std;
struct TheRoots {
    double root1;
    double root2;
};

void inputData(double& a, double& b, double& c) {
    cout << "Введите a, b и c: " << endl;
    cin >> a >> b >> c;
}


TheRoots Calculate(double a, double b, double c) {
    TheRoots roots;
    double disc = b * b - 4 * a * c; 

    if (disc > 0) 
    {        
        roots.root1 = (-b + sqrt(disc)) / (2 * a);
        roots.root2 = (-b - sqrt(disc)) / (2 * a);
    }
    else if (disc == 0) 
    {        
        roots.root1 = roots.root2 = -b / (2 * a);
    }
    else 
    {        
        cout << "Нет действительных корней." << endl;
        roots.root1 = roots.root2 = NAN; 
    }

    return roots;
}
int main() {
    system("chcp 1251");
    double a{}, b{}, c{};
    inputData(a, b, c); 
    TheRoots roots = Calculate(a, b, c); 

     if (!isnan(roots.root1) && !isnan(roots.root2)) {
         if (roots.root1 == roots.root2)
         {
             cout << "У уравнения один корень: " << roots.root1 << endl;
         }
         else
         {
             cout << "Корни квадратного уравнения: " << roots.root1 << " и " << roots.root2 << endl;
         }     
     }
    return 0;
}
