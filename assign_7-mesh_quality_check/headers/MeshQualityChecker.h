//purpose - to identitfy the good and bad triangles in mesh
#pragma once
#include "Triangulation.h"
#include "../headers/Point3D.h"
#include "../headers/Triangle.h"
namespace Shapes3D{
    class MeshQualityChecker{
        public:
            MeshQualityChecker(Triangulation &triangulation); // parameterised constructor
            ~MeshQualityChecker(); // destructor
            double calculateTotalSurfaceArea(const Triangulation &triangulation); // finding total surface area
            double calculateMeshDensity(const Triangulation &triangulation); // finding mesh density
            double calculateAspectRatio(const Triangulation &triangulation); // finding aspect ratio
            double calculateAspectRatioSkewness(const Triangulation &triangulation);
            void categorizeTriangles(const Triangulation &triangulation, // dividing mesh into good and bad triangles
                                     Triangulation &triangulationBadTriangles,
                                     Triangulation &triangulationGoodTriangles); 
        private:
            double distanceBetweenPoints(const Point3D &point1, const Point3D &point2);
            double calculateTriangleArea(const Triangle &triangle);
            double calculateTriangleAspectRatio(const Triangle &triangle);
            bool isAspectRatioWithinThreshold(double aspectRatio);
            Triangulation &triangulation;
    };
}
