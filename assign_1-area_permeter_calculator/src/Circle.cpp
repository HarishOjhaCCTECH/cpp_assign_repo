#include <iostream>
#include "../headers/Circle.h"
#include <cmath>

using namespace std;

Circle::Circle(){
    mRadius = -1;
}

void Circle::setRadius(double r){
    mRadius= r;
}

Circle::~Circle(){
    // destructor
}

void Circle::description(){ 
    cout<<"\nProperties of Circle:\n-> It has radius, i.e., distance of center from the curve\n"<<endl;
}

double Circle::perimeter(){
    if(mRadius==-1){
        double r;
        cout<<"\nType the radius:";
        cin>>r;
        Circle::setRadius(r);
    }
    
    return 2*(2*acos(0.0))*mRadius;
}

double Circle::area(){
    if(mRadius == -1){
        double r;
        cout<<"\nType the radius:";
        cin>>r;
        Circle::setRadius(r);
    }
    return (2*acos(0.0))*pow(mRadius, 2);
}

