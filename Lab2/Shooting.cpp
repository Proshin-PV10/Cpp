
#include <iostream>
#include <math.h>
using namespace std;

double x{ 0 };
double y{ 0 };
double x_wind{ 0 };//помеха Х
double y_wind{ 0 };//помеха У
double shot{ 0 };
int points{ 0 };
int num_shots{ 1 };
double average_points{ 0 };

int main()
{
    system("chcp 1251");
    cout << "Введите смещение по оси Х" << endl;
    cin >> x_wind;
    cout << "Введите смещение по оси Y" << endl;
    cin >> y_wind;
    cout << "Количество выстрелов" << endl;
    cin >> num_shots;
    for(int i=1;i<=num_shots;i++)
    {
        cout << "Введите координаты стрельбы" << endl;
        cin >> x;
        cin >> y;
        x += x_wind;
        y += y_wind;
        shot = sqrt(x * x + y * y);           
        if (shot <= 1)
            points += 10;
        else if (shot <= 2)
            points += 5;
        else if (shot <= 3)
            points += 1;
        else
            points = points;    
    }
    average_points = points / num_shots;
    if (average_points>=7.5)
        cout << "Вы набрали " << points <<" очков (Снайпер)" << endl;
    else if((average_points >= 5.0))
        cout << "Вы набрали " << points << " очков (Стрелок)" << endl;
    else
        cout << "Вы набрали " << points << " очков (Новичек)" << endl;
}

