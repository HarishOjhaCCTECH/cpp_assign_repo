#include <iostream>
#include "../headers/Line.h"
#include <cmath>
using namespace std;

void Line::description() {

	cout <<"\n\n-> PROPERTIES OF LINE:";
	cout<<"\n->Definition: A line is a straight, continuous path between two points.";
	cout<<"\n->Infinite Length: A line extends infinitely in both directions.";
	cout<<"\n->No Thickness: A line has no width; it is one-dimensional.";
	cout<<"\n->Points on a Line: All points on a line are collinear, meaning they lie on the same straight path.";
	cout<<"\n->Two Points Define a Line: Any two distinct points determine a unique line.";
	cout<<"\n->Infinite Lines through Two Points: There are infinitely many lines that can pass through two distinct points.";
	cout<<"\n->Line Segment: A part of a line between two points is called a line segment. It has a finite length.";
	cout<<"\n->Ray: A ray is a portion of a line that starts at a particular point and extends infinitely in one direction.";
	cout<<"\n->Parallel Lines: Lines that never intersect and have the same slope are parallel.";
	cout<<"\n->Perpendicular Lines: Lines that intersect at right angles are perpendicular.";
	cout<<"\n->Slope: The slope of a line measures its steepness and is defined as the change in vertical position divided by the change in horizontal position.";
	cout<<"\n->Equation of a Line: In coordinate geometry, a line can be represented by an equation of the form y=mx+b, where m is the slope, and b is the y-intercept.";
	cout<<"\n->In Geometry: Lines are fundamental elements used to define shapes and angles in geometry.";
	cout<<"\n->Intersection: Two lines can intersect at a single point, be parallel and never intersect, or overlap completely.\n\n";


}
void Line::setDimensions(double x1, double y1, double x2,double y2){
	mx1 = x1;
	my1 = y1;
	mx2 = x2;
	my2 = y2;
}
double Line::length(){
	cout<<"the the coordinates for line:";
	double x1;
	double y1;
	double x2;
	double y2;
	cout<<"\nx1:";
	cin>>x1;
	cout<<"\ny1:";
	cin>>y1;
	cout<<"\nx2:";
	cin>>x2;
	cout<<"\ny2:";
	cin>>y2;
	setDimensions(x1,y1,x2,y2);
	return sqrt(pow(abs(mx1-mx2),2)+pow(abs(my1-my2),2));
}

Line::Line(){

}
Line::~Line(){}