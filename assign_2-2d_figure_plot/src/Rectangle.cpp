#include <iostream>
#include "../headers/Rectangle.h"
using namespace std;
Rectangle::Rectangle(){}
Rectangle::~Rectangle(){}
void Rectangle::askCoordinates(){
    cout<<"For plotting Rectangle, origin is take as one vertex and diagonally opposite to it vertex's coordinates is to be given by you:\n";
    cout<<"Input the coordinates of top right vertex:\n";
    cout<<"\nx:";
    cin>>mx;
    cout<<"\ny:";
    cin>>my;
}