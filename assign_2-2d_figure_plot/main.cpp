#include <iostream>
#include "headers/Line.h"
#include "headers/FileDealings.h"
#include "headers/GNUplot.h"
#include "headers/Rectangle.h"
#include "headers/Triangle.h"
#include "headers/Square.h"
#include "headers/Circle.h"
#include "headers/Ellipse.h"
using namespace std;
int main(){
    int choice;
    FileDealings f1;
    do {
        cout << "\n\nwhich one:\n\n0. exit\n\n1. line\n\n2. triangle\n\n3. square\n\n4. Rectangle\n\n5. circle\n\n6. ellipse\n\n";
        cin >> choice;
        
        switch (choice) { 
            case 0: 
            {
                cout << "\n\nBYE-BYE\n\n"; 
                break;
            }
            case 1:
            {
                //###########################
                // LINE
                //###########################
                cout << "You chose line";
                Line l1;
                l1.askCoordinates();
                f1.createFile(l1.mx1, l1.my1, l1.mx2, l1.my2);
                
                break;
            }
            case 2: 
            {
                //###########################
                // TRIANGLE
                //###########################
                cout << "You chose triangle"; 
                Triangle t1;
                t1.askCoordinates();
                f1.createFile(t1.mx1, t1.my1, t1.mx2, t1.my2, t1.mx3,t1.my3);
                break;
            }
            case 3:
            {
                //###########################
                // SQUARE
                //###########################
                cout << "You chose square"; 
                Square s1;
                s1.askCoordinates();
                f1.createFile(s1.mx,s1.my);
                break; 
            }
            case 4: 
            {
                //###########################
                // RECTANGLE
                //###########################
                cout<<"You chose rectangle";
                Rectangle r;
                r.askCoordinates();
                f1.createFile(r.mx,r.my);
                break; 
            }
            case 5: 
            {
                //###########################
                // CIRCLE
                //###########################
                cout << "You have chosen circle"; 
                Circle c;
                c.askCoordinates();
                f1.createFile(c.mRadius);
                break; 
            }
            case 6: 
            {
                //###########################
                // ELLIPSE
                //###########################
                cout << "You chose Ellipse";
                Ellipse e;
                e.askCoordinates();
                f1.createFileEllipse(e.mSemiMajorAxis,e.mSemiMinorAxis);
                break;
            }
            default:
            {
                cout << "Choose again"; 
                break;
            }
        } 
    } while (choice != 0);

    //...
    // Other parts of your code
    //...
    f1.deleteFile();
    return 0;
}
