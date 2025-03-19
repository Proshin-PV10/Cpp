#pragma once
#include <stdexcept>
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
    Time operator+(const Time& t2) const;
    Time operator+(const int);
    friend Time operator+(const int, const Time& t2);
    Time operator-(const Time& t2) const;
    bool operator==(const Time& t2) const;
    void input();
    void men0(int);
    class InvalidInput : public std::invalid_argument {
    public:
        InvalidInput(const std::string& message) : std::invalid_argument(message) {}
    };
};


