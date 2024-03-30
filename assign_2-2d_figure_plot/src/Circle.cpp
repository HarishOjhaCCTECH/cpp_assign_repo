#include <iostream>
#include "../headers/Circle.h"
using namespace std;
Circle::Circle(){}
Circle::~Circle(){}
void Circle::askCoordinates(){
    cout<<"\ncenter of circle is taken as origin(0,0)\n";
    cout<<"\nInput the radius: ";
    cin>>mRadius;
}
