/* implement member functions of same name header */

#include "Polygon.h"
#include "Point.h"
#include <cmath>

Polygon::Polygon(): v_(std::vector<Point> {}) {}

Polygon::Polygon(std::vector<Point> v): v_(v) {}

bool Polygon::get_vertex(size_t i, Point& p) const{
    if (i < 1 || i > v_.size()){
        return false;
    }
    p=v_[i-1];
    return true;
}

void Polygon::add_vertex(size_t i, Point p){
    v_.insert(v_.begin()+i-1, p);
}

float distanced(Point a, Point b){
    return std::sqrt(std::pow(b.get_x() - a.get_x(), 2) + std::pow(b.get_y() - a.get_y(), 2));
}

float Polygon::perimeter() const{
    float sum = 0;
    for(size_t i = 0; i < v_.size()-1; i++) {
        sum += distanced(v_[i], v_[i+1]);
    }
    sum += distanced(v_[v_.size()-1], v_[0]);
    return sum;

}

void Polygon::show() const{
    std::cout << '{';
    for(size_t i = 0; i < v_.size(); i++) {
        v_[i].show();
    }
    std::cout << '}';

}
