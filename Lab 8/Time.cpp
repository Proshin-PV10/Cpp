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
