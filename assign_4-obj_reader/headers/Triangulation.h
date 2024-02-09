//here singleton design pattern is applied here
#pragma once
#include <vector>
#include "Point3d.h"
#include "Triangle.h"
#include "Normal.h"
using namespace std;
class Triangulation{
    public:
        Triangulation(const Triangulation & obj) = delete; // disabling cpoy constructor
        static Triangulation & getObj(); // getter
        vector<Point3d> & getPoints();
        vector<Triangle> & getTriangles();
        vector<Normal> & getNormals();
    private:
        Triangulation(); // default constructor
        static Triangulation tObj; // creating obj
        vector<Point3d> mUniquePoints;
        vector<Triangle> mTriangles;
        vector<Normal> mNormals;
};
