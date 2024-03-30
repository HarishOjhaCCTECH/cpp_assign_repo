#include "../headers/Point3D.h"
#include <cmath>
Shapes3D::Point3D::Point3D() : mX(), mY(), mZ() {} // constructor
Shapes3D::Point3D::Point3D(double inX, double inY, double inZ) : mX(inX), mY(inY), mZ(inZ) {} // parameterise constructor
Shapes3D::Point3D::~Point3D() {} // destructor
double Shapes3D::Point3D::x() const{ // getter
    return mX;
}
double Shapes3D::Point3D::y() const{ // getter
    return mY;
}
double Shapes3D::Point3D::z() const{ // getter
    return mZ;
}
bool Shapes3D::Point3D::operator<(const Point3D &other) const{ // operator overloading
    if (mX < other.mX)return true;
    if (mX > other.mX)return false;
    if (mY < other.mY)return true;
    if (mY > other.mY)return false;
    return mZ < other.mZ;
}
