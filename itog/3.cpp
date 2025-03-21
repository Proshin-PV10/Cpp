#include <iostream>

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}    
    Point operator+(const Point& other) const 
    {
        return Point(x + other.x, y + other.y);
    }
    Point& operator+=(const Point& other) 
    {
        x += other.x;
        y += other.y;
        return *this;
    }    
    Point operator+(int value) const 
    {
        return Point(x + value, y + value);
    }
    void print() const 
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() 
{
    Point pt1(1, 1);
    Point pt2(2, 2);
    Point pt3;
    pt3 = pt1 + pt2;
    pt3.print();
    pt2 += pt1;
    pt2.print();
    pt3 = pt1 + 5;
    pt3.print();
    return 0;
}
