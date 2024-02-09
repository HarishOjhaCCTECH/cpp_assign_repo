#include "../headers/Triangle.h"
Triangle::Triangle(){}
Triangle::Triangle(int a, int b, int c){
    mv1 = a;
    mv2 = b;
    mv3 = c;
}
Triangle::~Triangle(){}
int Triangle::v1(){
    return mv1;
}
int Triangle::v2(){
    return mv2;
}
int Triangle::v3(){
    return mv3;
}