#include <iostream>
#include <iomanip>
#include <cmath>
#include "Shape.h"

using namespace std;

class Circle: public Shape{
    public:
        Circle(const point& centre, double radius) : Shape(centre), radius_(radius){}

        double area() const{
            return M_PI * pow(radius_, 2);
        }

        double perimeter() const{
            return M_PI * 2 * radius_;
        }

        bool contains(const point& p) const{
            point centrer = get_center();
            double distance = sqrt(pow(p.x-centrer.x, 2) + pow(p.y-centrer.y, 2));
            return  distance <= radius_;
        }


    private:
        double radius_;

};


class Rectangle: public Shape{
    public:
        Rectangle(const point& center, double width, double heigth): Shape(center){
            width_=width;
            heigth_=heigth;
        }

        double area() const{
            return width_ * heigth_;
        }

        double perimeter() const{
            return (2* width_) + (2*heigth_);
        }

        bool contains(const point& p) const{
            point centro = get_center();
            if (p.x > centro.x + width_/2) return false;
            if (p.x < centro.x - width_/2) return false;
            if (p.y > centro.y + heigth_/2) return false;
            if (p.y < centro.y - heigth_/2) return false;
            return true;
        }


    private:
        double width_;
        double heigth_;
};