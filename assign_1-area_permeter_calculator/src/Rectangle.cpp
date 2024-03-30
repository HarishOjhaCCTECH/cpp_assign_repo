#include <iostream>
#include "../headers/Rectangle.h"
using namespace std;

void Rectangle::rectangleDes(){
    cout<<"->Properties of Rectangle are:\n->Sides = a\nSum of interior angles = 360\n"<<endl;
}



Rectangle::Rectangle(){
    mLength = -1;
    mBreadth = -1;
}
Rectangle::~Rectangle(){}
void Rectangle::description(){
    cout<<"\nPROPERTIES OF RECTANGLE:\n\n->Definition: A rectangle is a four-sided polygon with opposite sides of equal length and four right angles.";
    cout<<"\n->Angles: All angles in a rectangle are right angles (90 degrees).";
    cout<<"\n->Opposite Sides: Opposite sides of a rectangle are equal in length.";
    cout<<"\n->Adjacent Sides: Adjacent sides are perpendicular to each other.";
    cout<<"\n->Diagonals: The diagonals of a rectangle bisect each other and are of equal length.";
    cout<<"\n->Area: The area of a rectangle is calculated as the product of its length and width: ";
    cout<<"\n->Area=Length×Width.";
    cout<<"\n->Perimeter: The perimeter (or the total length of the boundary) is calculated as";
    cout<<"\n->2×(Length+Width)";
    cout<<"\n->Symmetry: Rectangles are symmetric with respect to their center and have two lines of symmetry.";
    cout<<"\n->Properties of Opposite Corners: If we take any two opposite corners of a rectangle, the line segment connecting them is a diagonal, and it is the longest side in the rectangle.\n\n";

}

void Rectangle::setDimensions(double l, double b){
    mLength = l;
    mBreadth = b;
}
double Rectangle::perimeter(){
    if(mLength == -1){
        double l;
        double b;
        cout<<"\nType the length: ";
        cin>>l;
        cout<<"Type the breadth:";
        cin>>b;
        Rectangle::setDimensions(l,b);
    }
    
    return 2*(mLength+mBreadth);
}

double Rectangle::area(){
    if(mLength == -1){
        double l;
        double b;
        cout<<"\nType the length: ";
        cin>>l;
        cout<<"Type the breadth:";
        cin>>b;
        Rectangle::setDimensions(l,b);
    }
    return mLength*mBreadth;
}