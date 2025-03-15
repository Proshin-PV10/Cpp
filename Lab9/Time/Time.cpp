#include <iostream>
#include "Time.h"


void Time::norm() 
{
    if (seconds >= 60) 
    {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if (minutes >= 60) 
    {
        hours += minutes / 60;
        minutes %= 60;
    }
}

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) 
{    
    norm();
}

void Time::display() const 
{
    std::cout << (hours < 10 ? "0" : "") << hours << ":"
        << (minutes < 10 ? "0" : "") << minutes << ":"
        << (seconds < 10 ? "0" : "") << seconds << std::endl;
}

Time Time::addTime(const Time& t) const 
{
    Time t3;
    t3.seconds = seconds + t.seconds;
    t3.minutes = minutes + t.minutes + t3.seconds / 60;
    t3.hours = hours + t.hours + t3.minutes / 60;
    t3.seconds %= 60;
    t3.minutes %= 60;
    return t3;
}

void Time::input()
{
    int h, m, s;
    std::cout << "Введите часы: "<<std::endl;
    std::cin >> h;
    men0(h);
    std::cout << "Введите минуты: " << std::endl;
    std::cin >> m;
    men0(m);
    std::cout << "Введите секунды: " << std::endl;
    std::cin >> s;    
    men0(s);

    hours = h;
    minutes = m;
    seconds = s;
    norm(); 
}

void Time::men0(int n)
{
    if (std::cin.fail()) 
    {
        throw InvalidInput("Значения часов, минут и секунд должны быть целыми числами ");
    }
    if (n < 0)
    {
        throw InvalidInput("Значения часов, минут и секунд должны быть больше или равны нулю.");
    }
}
