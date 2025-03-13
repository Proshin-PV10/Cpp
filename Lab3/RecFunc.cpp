#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int RecFun(int);
int n{};	// Количество членов ряда
int S{};	// Сумма членов ряда
int main()
{
	system("chcp 1251");
	cout << "Введите количество членов ряда" << endl;
	cin >> n;
	int result = RecFun(n);
	cout << result  << endl;
}
int RecFun(int n)
{
	if (n == 0) 
	{ 
		return 0; 
	}
	return 5*n+RecFun(n-1);	
}