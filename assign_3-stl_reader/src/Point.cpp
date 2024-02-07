// this .cpp file contain the definitions for class Point declared in Point.h
// this class's purpose is to store the coordinates(of double datatype) of vertices of triangles
#include "../headers/Point.h"
Point::Point(){} // default constructor
Point::Point(double x, double y, double z){ // parameterised constructor
    mx = x;
    my = y;
    mz = z;
}
Point::~Point(){} // destructor
double Point::x() const{ // getter
    return mx;
}
double Point::y()const{ // getter
    return my;
}
double Point::z()const{ // getter
    return mz;
}
bool Point::operator<(const Point& other) const { // operator overloading is necessary here, so that Point datatype can be used in map
    if (mx != other.mx) return mx < other.mx;
    if (my != other.my) return my < other.my;
    return mz < other.mz;
}
