#include <iostream>
#include <string>
#include <vector>
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/STLreader.h"
#include "headers/STLwriter.h"
using namespace std;
int main() {
    Triangulation triguObj; // object "triguObj" is created to store the Points and Triangles in vector
    STLreader stlReaderObj; // object "stlReaderObj" is created to convert the stl and store in structured way
    STLwriter stlWriteObj; // object "stlWriteObj" is created to convert the stored data to txt file for plotting
    bool exit = false; // condition for below while loop
    while(!exit){
        int choice; // user given choice
        cout<<"write you choice:(0. Exit, 1.Cube, 2. Sphere)"<<endl; // telling user about the options for choosing from different 3d figures
        cin>>choice;
        switch (choice)
        {
            case 0:{
                    cout<<"BYE-BYE"<<endl; // switch case for exiting from the program
                    exit = true;
                    break;
            }
            case 1:{
                // for ploting cube
                vector<Triangle> lot = triguObj.listOfTriangles(); // lot = list of triangles
                vector<Point> lop = triguObj.listOfPoints(); // lop = list of points
                stlReaderObj.comparison("D:/harish_ojha_workspace/cpp_assignments/stl_a3/STLFiles/Cube.stl",  lot,lop); // creating data structure for storage of Points & Triangles
                stlWriteObj.txtGeneration("D:/harish_ojha_workspace/cpp_assignments/stl_a3/STLFiles/Cube.stl",  lot,lop); // creating txt file from above Data Structure
                //stlReaderObj.~STLreader();
                break;
            }
            case 2:{
                // for potting sphere
                vector<Triangle> lot = triguObj.listOfTriangles(); // lot = list of triangles
                vector<Point> lop = triguObj.listOfPoints(); // lop = list of points
                stlReaderObj.comparison("D:/harish_ojha_workspace/cpp_assignments/stl_a3/STLFiles/Sphere.stl",  lot,lop); // creating data structure for storage of Points & Triangles
                stlWriteObj.txtGeneration("D:/harish_ojha_workspace/cpp_assignments/stl_a3/Sphere.stl",  lot,lop); // creating txt file from above Data Structure
                break;
            }
            default:{
                // if the user chooses something other then than the given options
                cout<<"wrong choice"<<endl;
                break;
            }
        }
    }
    
    return 0; // Return success code
}
