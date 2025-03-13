#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
    void ShowTime() 
    {
        cout << hours << " час. " << minutes << " мин. " << seconds << " сек." << endl;
    }
};

Time InputTime()
{
    Time t;
    cout << "\nВведите число часов: ";
    cin >> t.hours;
    cout << "Введите число минут: ";
    cin >> t.minutes; 
    cout << "Введите число секунд: ";
    cin >> t.seconds;
    return t;
}

Time AddTime(Time t1, Time t2)
{
    Time t;
    t.seconds = t1.seconds + t2.seconds;
    t.minutes = t1.minutes + t2.minutes + t.seconds / 60; 
    t.hours = t1.hours + t2.hours + t.minutes / 60; 

    t.seconds %= 60; 
    t.minutes %= 60; 

    return t;
}

Time MinusTime(Time t1, Time t2)
{
    Time t;
    t.seconds = t1.seconds - t2.seconds;
    t.minutes = t1.minutes - t2.minutes;
    t.hours = t1.hours - t2.hours;
   
    if (t.seconds < 0)
    {
        t.seconds += 60;
        t.minutes--;
    }
    if (t.minutes < 0)
    {
        t.minutes += 60;
        t.hours--;
    }

    return t;
}

int main()
{
    system("chcp 1251");
    Time t1 = InputTime();
    Time t2 = InputTime();
    Time t3 = AddTime(t1, t2);
    Time t4 = MinusTime(t1, t2);

    cout << "Первое время: ";
    t1.ShowTime();
    cout << "Второе время: ";
    t2.ShowTime();
    cout << "Сумма времени: ";
    t3.ShowTime();
    cout << "Разность времени: ";
    t4.ShowTime();

    return 0;
}
