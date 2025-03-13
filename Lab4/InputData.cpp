
#include <iostream>
#include<fstream>
#include <string>
#include <math.h>
using namespace std;


bool Input(int& a, int& b)
{
    string ast;//вводимое значение а
    string bst;//вводимое значение b
    bool atr = true; //проверка на корректный ввод а
    bool btr = true; //проверка на корректный ввод b

    cout << "Введите значение a"   << endl;
    getline(cin,ast);
    cout << "Введите значение b"   << endl;
    getline(cin, bst);

    
    for (char ch : ast) {
        if (ch >= '0' && ch <= '9') {
            atr = true;
        }
        else {
            atr = false;
            break; 
        }
    }

    
    for (char ch : bst) {
        if (ch >= '0' && ch <= '9') {
            btr = true;
        }
        else {
            btr = false;
            break; 
        }
    }

    
    if (atr && btr) {
        a = stoi(ast);
        b = stoi(bst);
        if (a < 0 || a > numeric_limits<int>::max() || b < 0 || b > numeric_limits<int>::max()) {
            return false; 
        }
        return true;
    }
    return false;
}
int main()
{
	system("chcp 1251");
	int a, b;
	if (Input(a, b) == false) 
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << a << " + " << b << " = " << s << endl;
	return 0;
}
