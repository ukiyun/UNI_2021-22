//Point2d.h
class Point2d {
  public:
    Point2d();                   // default constructor (builds origin)
    Point2d(const Point2d& p);   // copy constructor
    Point2d(double x, double y); // constructor using supplied coordinates
    double get_x() const;  // accessor for X coordinate
    double get_y() const;  // accessor for Y coordinate
    void set_x(double x);  // mutator for X coordinate
    void set_y(double y);  // mutator for Y coordinate
    void translate(const Point2d& t);           // translate coordinates
    double distance_to(const Point2d& p) const; // get distance to given point
  private: 
    double x;  // X coordinate
    double y;  // Y coordinate
};

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*a.translate(t) changes a with a translation by coordinates t, i.e., if a has coordinates (x,y) on entry,
then a should have coordinates (x + t.x, y + t.y) on exit; and
a.distance_to(b) returns the Euclidean distance between a and b, i.e., (a.x−b.x)2+(a.y−b.y)2−−−−−−−−−−−−−−−−−−−−−−√ */


void Point2d::translate(const Point2d& t){
  double tx = t.get_x();
  double ty = t.get_y();
  set_x(x+tx);
  set_y(y+ty);
}

double Point2d::distance_to(const Point2d& p) const{
  double px = p.get_x();
  double py = p.get_y();
  double xxs = pow(x-px,2);
  double yys = pow(y-py,2);
  double distance =sqrt(xxs+yys);
  return distance;
}
