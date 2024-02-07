// this .cpp file contain the definitions for class Point3D declared in Point3D.h
// this class's purpose is to store the coordinates(of double datatype) of vertices of triangles
#include "../headers/Point3D.h"
Point3D::Point3D(){} // default constructor
Point3D::Point3D(double x, double y, double z){ // parameterised constructor
    mx = x;
    my = y;
    mz = z;
}
Point3D::~Point3D(){} // destructor
double Point3D::x() const{ // getter
    return mx;
}
double Point3D::y()const{ // getter
    return my;
}
double Point3D::z()const{ // getter
    return mz;
}
bool Point3D::operator<(const Point3D& other) const { // operator overloading is necessary here, so that Point3D datatype can be used in map
    if (mx != other.mx) return mx < other.mx;
    if (my != other.my) return my < other.my;
    return mz < other.mz;
}
