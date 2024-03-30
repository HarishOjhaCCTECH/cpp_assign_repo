#include "../headers/Point3d.h"
Point3d::Point3d(){}
Point3d::~Point3d(){}
Point3d::Point3d(double px, double py, double pz){
    mx=px;
    my=py;
    mz=pz;
}
double Point3d::x(){
    return mx;
}
double Point3d::y(){
    return my;
}
double Point3d::z(){
    return mz;
}