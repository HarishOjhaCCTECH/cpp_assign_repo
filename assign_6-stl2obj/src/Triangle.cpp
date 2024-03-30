#include "../headers/Triangle.h"
Shapes3D::Triangle::Triangle() {} // constructor
Shapes3D::Triangle::Triangle(int inIndex1, int inIndex2, int inIndex3) : mIndex1(inIndex1), mIndex2(inIndex2), mIndex3(inIndex3) {} // parameterised constructor
Shapes3D::Triangle::~Triangle() {} // destructor
int Shapes3D::Triangle::index1() const{ // getter
    return mIndex1;
}
int Shapes3D::Triangle::index2() const{ // getter
    return mIndex2;
}
int Shapes3D::Triangle::index3() const{ // getter
    return mIndex3;
}
int Shapes3D::Triangle::normalIndex() const{ // getter
    return mNormalIndex;
}
void Shapes3D::Triangle::setindex1(int inIndex1){ // setter
    mIndex1 = inIndex1;
}
void Shapes3D::Triangle::setindex2(int inIndex2){ // setter
    mIndex2 = inIndex2;
}
void Shapes3D::Triangle::setindex3(int inIndex3){ // setter
    mIndex3 = inIndex3;
}
void Shapes3D::Triangle::setNormalIndex(int inNormalIndex){ // setter
    mNormalIndex = inNormalIndex;
}
