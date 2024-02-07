// this .cpp file contain definitions for class Triangulation declared in Triangulation.h
#include"../headers/Triangulation.h"
#include <vector>
Triangulation::Triangulation(){} // default constructor
Triangulation::~Triangulation(){} // destructor
std::vector<Triangle> & Triangulation::listOfTriangles(){ // getter
    return mListOflistOfTriangles;
}
std::vector<Point3D> & Triangulation::listOfPoint3Ds(){ // getter
    return mUniquelistOfPoint3Ds;
}
