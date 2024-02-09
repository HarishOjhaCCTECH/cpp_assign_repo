#pragma once
#include <vector>
#include "Point3d.h"
#include "Triangle.h"
#include "Normal.h"
using namespace std;
class Triangulation{
    public:
        Triangulation(const Triangulation & obj) = delete;
        static Triangulation & getObj();
        vector<Point3d> & getPoints();
        vector<Triangle> & getTriangles();
        vector<Normal> & getNormals();
    private:
        Triangulation();
        static Triangulation tObj;
        vector<Point3d> mUniquePoints;
        vector<Triangle> mTriangles;
        vector<Normal> mNormals;
};