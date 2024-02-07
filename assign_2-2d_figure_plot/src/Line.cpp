#include<iostream>
#include "../headers/Line.h"
#include "../headers/Shape.h"
#include <cmath>
using namespace std;
Line::Line(){}
Line::~Line(){}
void Line::askCoordinates(){
    cout<<"input the coordinates of line:\n";
    //double mx1,my1,mx2,my2;
    cout<<"\nx1:";
    cin>>mx1;
    cout<<"\ny1:";
    cin>>my1;
    cout<<"\nmx2:";
    cin>>mx2;
    cout<<"\ny2:";
    cin>>my2;
}


