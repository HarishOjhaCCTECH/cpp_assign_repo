// this .h file contains declarations for class Point3D
// this class's purpose is to store the coordinates(of double datatype) of vertices of triangles
#pragma once
class Point3D{
    public:
        Point3D(); //default constructor
        Point3D(double x,double y,double z); // parameterized constructor
        ~Point3D(); // destructor
        double x()const; //getter
        double y()const; //getter
        double z()const; //getter
        // custom operator is needed here to make it usable in map datastructure
        bool operator<(const Point3D& other) const; 
    private:
        double mx; // coordinate x
        double my; // coordinate y
        double mz; // coordinate z
};
