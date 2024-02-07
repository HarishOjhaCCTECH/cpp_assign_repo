// this is header file for triangulation class declaration
// purpose - to store the Point3Ds and triangles
#pragma once
#include <vector>
#include "Triangle.h"
#include "Point3D.h"
class Triangulation{
    public:
        Triangulation(); // default constructor
        ~Triangulation(); // destructor
        std::vector<Triangle> & listOfTriangles();// getter
        std::vector<Point3D> & listOfPoint3Ds();//getter
    private:
        std::vector<Triangle> mListOflistOfTriangles; // storage area for all the Triangles object
        std::vector<Point3D> mUniquelistOfPoint3Ds; // storage area for all the Point3Ds object
};
