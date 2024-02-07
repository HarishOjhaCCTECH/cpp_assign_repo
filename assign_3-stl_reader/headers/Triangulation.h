// this is header file for triangulation class declaration
// purpose - to store the points and triangles
#pragma once
#include <vector>
#include "Triangle.h"
#include "Point.h"
class Triangulation{
    public:
        Triangulation(); // default constructor
        ~Triangulation(); // destructor
        std::vector<Triangle> & listOfTriangles();// getter
        std::vector<Point> & listOfPoints();//getter
    private:
        std::vector<Triangle> mListOflistOfTriangles; // storage area for all the Triangles object
        std::vector<Point> mUniquelistOfPoints; // storage area for all the Points object
};
