#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double triangle(double);
double triangle(double, double, double);
int n;
double a,b,c,S;

int main()
{
	system("chcp 1251");
	cout << "Выберите треугольник равносторонний (1) или разносторонний (2)" << endl;
	cin >> n;
	switch (n)
	{
	case(1):
		{
			cout << "Введите длину стороны треугольника" << endl;
			cin >> a;
			triangle(a);
			cout << "Площадь равностороннего треугольника со стороной " << a << " равна " << setprecision(4)<< S << endl;
			break;
		}

	case(2):
		{
			cout << "Введите длину первой стороны треугольника" << endl;
			cin >> a;
			cout << "Введите длину второй стороны треугольника" << endl;
			cin >> b;
			cout << "Введите длину третьей стороны треугольника" << endl;
			cin >> c;
			triangle(a,b,c);
			cout << "Площадь равностороннего треугольника со сторонами " << a <<", "<<b<<" и "<<c << ", равна " << setprecision(4) << S << endl;
			break;
		}	
		
	}
}
double triangle(double a)
{
	return S = (sqrt(3) / 4) * a * a;
}
double triangle(double a, double b, double c)
{
	double PP = (a + b + c) / 2;
	S = sqrt(PP * (PP - a) * (PP - b) * (PP - c));
	return S;
}