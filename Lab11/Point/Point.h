#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

class Point
{
private:
    int x{};
    int y{};
public:
    Point(int, int);
    
    double Distance() const;
    bool operator<(const Point& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};
