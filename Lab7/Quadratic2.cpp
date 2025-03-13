#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;
using Tuple = tuple<double, double, bool>;

Tuple Calculate(double a, double b, double c)
{
    double disc = b * b - 4 * a * c;

    if (disc > 0)
    {
        double root1 = (-b + sqrt(disc)) / (2 * a);
        double root2 = (-b - sqrt(disc)) / (2 * a);
        return make_tuple(root1, root2, true);
    }
    else if (disc == 0)
    {
        double root = -b / (2 * a);
        return make_tuple(root, root, true);
    }
    else
    {
        return make_tuple(0.0, 0.0, false);
    }
}

void inputData(double& a, double& b, double& c)
{
    cout << "Введите коэффициенты a, b и c: "<<endl;
    cin >> a >> b >> c;
}

int main() 
{
    system("chcp 1251");
    double a, b, c;
    inputData(a, b, c);
    Tuple result = Calculate(a, b, c);
    double root1 = std::get<0>(result);
    double root2 = std::get<1>(result);
    bool hasRoots = std::get<2>(result);

    if (root1 == root2 && hasRoots == true)
    {
        cout << "У уравнения один корень: " << root1 << endl;
    }
   
    else if (hasRoots==false)
    {
        cout << "Уравнение не имеет корней." << endl;
    }
    else
    {
        cout << "Корни уравнения: " << root1 << " и " << root2 << endl;
    }

    return 0;
}
