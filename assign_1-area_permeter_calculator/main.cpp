#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include "headers/Line.h"
#include "headers/Triangle.h"
#include "headers/Square.h"
#include "headers/Rectangle.h"
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include <cstdlib>
using namespace std;

void shapeStart(){
    std::cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
}

void shapeEnd(){
    std::cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}


int main()
{
    std::cout<<"\n\n***********************************************************************************************************************\n\n";
    std::cout << "Hello Everyone!\n";
    while (true) {
        char num = -1;
        std::cout<<"NOTE:-This project is incomplete. Only option number 1.Line, 4.Rectangle, 5.Circle and 0. Exit options are working";
        std::cout << "What would you like to choose:\n\n1. Line\n2. Triangle\n3. Square\n4. Rectangle\n5. circle\n6. ellipse\n0. End the program";
        std::cout<<"\n\n Type and enter the number to choose from above options." << std::endl<<"num:";
        std::cin >> num;
        if (num == '0') {
            break;
        }
        else if (num == '1') {
            Line l;
            shapeStart();
            l.description();
            int ans;
            cout<<"\nDo you want to length of a line segment? (1 for yes and 0 for no): ";
            cin>>ans;
            if(ans == 1){
                cout<<l.length()<<" units";
            }
            shapeEnd();
            l.~Line();
        }
        else if (num == '2') {
            Triangle t;
            shapeStart();            
            t.description();
            shapeEnd();
        }
        else if (num == '3') {
            Square s;
            shapeStart();
            s.squareDes();
            shapeEnd();
        }
        else if (num == '4') {
            Rectangle r;
            shapeStart();
            r.description();
            int ans;
            cout<<"\nDo you want to perimeter of any circle? (1 for yes and 0 for no): ";
            cin>>ans;
            if(ans == 1){
                cout<<r.perimeter()<<" units";
            }
            cout<<"\nDo you want area? (1 for yes and 0 for no): ";
            cin>>ans;
            if(ans ==1){
                cout<<r.area()<<" units squared";
            }
            shapeEnd();
            r.~Rectangle();
        }
        else if (num == '5') {
            Circle c;
            shapeStart();
            c.description();
            int ans;
            cout<<"\nDo you want to perimeter of any circle? (1 for yes and 0 for no): ";
            cin>>ans;
            if(ans == 1){
                cout<<c.perimeter()<<" units";
            }
            cout<<"\nDo you want area? (1 for yes and 0 for no): ";
            cin>>ans;
            if(ans ==1){
                cout<<c.area()<<" units squared";
            }
            shapeEnd();
            c.~Circle();
        }
        else if (num == '6') {
            Ellipse e;
            shapeStart();
            e.ellipseDes();
            shapeEnd();
        }else{
            shapeStart();
            std::cout<<"You haven't choosen from the given options.";
            
        }

    }
    std::cout<<"__________THE END_________";
    std::cout<<"\n\n***********************************************************************************************************************\n\n";
}
