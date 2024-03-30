// this .cpp file contain definitions for class Triangle declared in Triangle.h
#include "../headers/Triangle.h"
Triangle::Triangle(){} // constructor
Triangle::Triangle(int v1, int v2, int v3){ // parameterized constructor
    mv1 = v1;
    mv2 = v2;
    mv3 = v3;
}
Triangle::~Triangle(){} // destructor
int Triangle::v1()const{ // getter
    return mv1;
}
int Triangle::v2()const{ // getter
    return mv2;
}
int Triangle::v3()const{ // getter
    return mv3;
}
