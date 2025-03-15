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
    void input();
    void men0(int);
    class InvalidInput : public std::invalid_argument {
    public:
        InvalidInput(const std::string& message) : std::invalid_argument(message) {}
    };
};


