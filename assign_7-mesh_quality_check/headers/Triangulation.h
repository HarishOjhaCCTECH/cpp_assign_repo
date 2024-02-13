// purpose - stores all the points and triangles in the mesh
#pragma once
#include "Point3D.h"
#include "Triangle.h"
#include <vector>
namespace Shapes3D{
    class Triangulation{
        public:
            Triangulation(); // constructor
            ~Triangulation(); // destructor
            std::vector<Point3D> uniquePoints() const; // getter
            std::vector<Triangle> triangles() const; // getter
            void addUniquePointToTriangulation(const Point3D inPoint);
            void addTriangleToTriangulation(const Triangle inTriangle);
        private:
            std::vector<Point3D> mUniquePoints;
            std::vector<Triangle> mTriangles;
    };
}
