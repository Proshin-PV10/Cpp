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
Time Time:: operator+(const Time& t2) const {
    int h = hours + t2.hours;
    int m = minutes + t2.minutes;
    if (m >= 60.0) {
        m -= 60.0;
        h++;
    }
    int s = seconds + t2.seconds;
    if (s >= 60.0)
    {
        s -= 60;
        m++;
    }
    return Time(h, m, s);

}

Time Time::operator+(const int s)
{
    return *this + Time(0, 0, s);
}

Time operator+(const int s, const Time& t2)
{
    return Time(0, 0, s) + t2;
}
bool Time::operator==(const Time& t) const {
    return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
}
Time Time:: operator-(const Time& t2) const {
    if ((hours * 60 * 60 + minutes * 60 + seconds) >= (t2.hours * 60 * 60 + t2.minutes * 60 + t2.seconds))
    {
        int h = hours - t2.hours;
        int m = minutes - t2.minutes;
        if (m < 0.0)
        {
            m += 60.0;
            h--;
        }
        int s = seconds - t2.seconds;
        if (s < 0.0)
        {
            s += 60;
            m--;
        }
        return Time(h, m, s);
    }
    else
    {
        int h = t2.hours - hours;
        int m = t2.minutes - minutes;
        if (m < 0.0)
        {
            m += 60.0;
            h--;
        }
        int s = t2.seconds - seconds;
        if (s < 0.0)
        {
            s += 60;
            m--;
        }
        return Time(h, m, s);
    }
}

void Time::input()
{
    int h, m, s;
    std::cout << "¬ведите часы: " << std::endl;
    std::cin >> h;
    men0(h);
    std::cout << "¬ведите минуты: " << std::endl;
    std::cin >> m;
    men0(m);
    std::cout << "¬ведите секунды: " << std::endl;
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
        throw InvalidInput("«начени€ часов, минут и секунд должны быть целыми числами ");
    }
    if (n < 0)
    {
        throw InvalidInput("«начени€ часов, минут и секунд должны быть больше или равны нулю.");
    }
}
