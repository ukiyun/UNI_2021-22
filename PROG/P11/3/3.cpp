#include "Point.h"

using namespace std;

Point::Point() : x_(0), y_(0){}

Point::Point(int x, int y): x_(x), y_(y){}

Point::Point(const Point& p): x_(p.x_), y_(p.y_){}

int Point::get_x() const{
    return x_;
}

int Point::get_y() const{
    return y_;
}

Point& Point::operator=(const Point& p){
    x_ = p.x_;
    y_ = p.y_;
    return *this;
}

Point Point::operator+(const Point& p) const{
    Point sus(x_ + p.x_, y_ + p.y_);
    return sus;
}

Point& Point::operator+=(const Point& p){
    x_ += p.x_;
    y_ += p.y_;
    return *this;
}

Point Point::operator*(int v) const{
    Point sus;
    sus.x_ = x_ * v;
    sus.y_ = y_ * v;
    return sus;
}

Point operator*(int x, const Point& p){
    Point sus(x * p.get_x(), x * p.get_y());
    return sus;
}

std::ostream& operator<<(std::ostream& os, const Point& p){
    os << '(' << p.get_x() << ',' << p.get_y() << ')';
    return os;
} 