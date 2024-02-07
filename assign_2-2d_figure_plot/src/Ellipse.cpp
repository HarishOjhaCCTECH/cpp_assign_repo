#include <iostream>
#include "../headers/Ellipse.h"
using namespace std;
Ellipse::Ellipse(){}
Ellipse::~Ellipse(){}
void Ellipse::askCoordinates(){
    cout<<"\nType the semi-major axis:";
    cin>>mSemiMajorAxis;
    cout<<"Type the semi-minor axis:";
    cin>>mSemiMinorAxis;
}