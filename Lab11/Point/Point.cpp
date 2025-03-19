#pragma once
#include "Point.h"



Point::Point(int x, int y):x(x),y(y){}

double Point::Distance() const
{
	return std::sqrt(x * x + y * y);
}
bool Point::operator<(const Point& other) const
{
	return this->Distance() < other.Distance();
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
	os << "Point(" << point.x << ", " << point.y << ")";
	return os;
}
