

#include <iostream>

class Triangle
{
public:
	Triangle(double a, double b, double c) 
	{
		validate(a, b, c);
		A = a;
		B = b;
		C = c;
	}
    
	double area() const
	{
		double PP = (A + B + C) / 2;
		return  sqrt(PP * (PP - A) * (PP - B) * (PP - C));
		
	}
private:
	double A, B, C;
	void validate(double a, double b,double c)
	{
		if (a <= 0 || b <= 0 || c <= 0)
			throw std::invalid_argument("Стороны треугольника должны быть положительные");
		else if ( (a + b) <= c || (a + c) <= b || (b + c) <= a)
			throw std::invalid_argument("Такого треугольника не существует");

	}
};

int main()
{
	system("chcp 1251");
	try 
	{
		double a, b, c;
		std::cout << "Введите длины сторон треугольника (a, b, c): "<<std::endl;
		std::cin >> a >> b >> c;
		Triangle tr(a, b, c);
		std::cout << "Площадь треугольника: " << tr.area() << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << "Ошибка: " << e.what() << std::endl;
	}
	return 0;
}
