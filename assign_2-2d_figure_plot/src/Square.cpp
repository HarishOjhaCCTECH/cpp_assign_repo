#include <iostream>
#include "../headers/Square.h"
Square::Square(){}
Square::~Square(){}
using namespace std;        
void Square::askCoordinates(){
    cout<<"For plotting Square, origin is take as one vertex and diagonally opposite to it vertex's coordinates is to be given by you:\n";
    cout<<"And both x and y coordinates has to be equal, so only give the x coordinate\n";
    cout<<"Input the x coordinate of top right vertex:\n";
    //double mx1,my1,mx2,my2;
    cout<<"\nTOP RIGHT VERTEX\nx:";
    cin>>mx;
    my = mx;
}