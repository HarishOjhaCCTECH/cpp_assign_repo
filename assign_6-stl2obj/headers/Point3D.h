//purpose - store the x, y, z coordinates of a vertex in a triangle
#pragma once
namespace Shapes3D{
    class Point3D    {
        public:
            Point3D(); // constructor
            Point3D(double inX, double inY, double inZ); // parameterised constructor
            ~Point3D(); // destructor
            double x() const; // getter
            double y() const; // getter
            double z() const; // getter
            bool operator<(const Point3D &other) const; // operator overloading
        private:
            double mX;
            double mY;
            double mZ;
    };
}
