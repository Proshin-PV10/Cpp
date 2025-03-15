#pragma once

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    void norm();

public:
    Time();
    Time(int h, int m, int s);
    void display() const;
    Time addTime(const Time& t) const;
};


