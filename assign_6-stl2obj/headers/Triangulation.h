#pragma once
#include "Point3D.h"
#include "Triangle.h"
#include <vector>
namespace Shapes3D{
    class Triangulation{
        public:
            Triangulation(); // constrcutor
            ~Triangulation(); // destructor
            std::vector<Point3D> &uniquePoints(); // getter
            std::vector<Triangle> &triangles(); // getter
            std::vector<Point3D> &uniqueNormals(); // getter
        private:
            std::vector<Point3D> mUniquePoints;
            std::vector<Triangle> mTriangles;
            std::vector<Point3D> mUniqueNormals;
    };
}
