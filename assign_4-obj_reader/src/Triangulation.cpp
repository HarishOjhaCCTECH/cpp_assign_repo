#include <vector>
#include "../headers/Triangulation.h"
Triangulation::Triangulation(){}
Triangulation & Triangulation::getObj(){
    return tObj;
}
vector<Point3d> & Triangulation::getPoints(){
    return mUniquePoints;
}
vector<Triangle> & Triangulation::getTriangles(){
    return mTriangles;
}
vector<Normal> & Triangulation::getNormals(){
    return mNormals;
}
Triangulation Triangulation::tObj;