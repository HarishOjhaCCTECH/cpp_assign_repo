#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/STLreader.h"
#include "headers/STLwriter.h"
#include "headers/Obj2stl.h"
using namespace std;
int main() {
     // object "triguObj" is created to store the Point3Ds and Triangles in vector
    //STLreader stlReaderObj; // object "stlReaderObj" is created to convert the stl and store in structured way
    //STLwriter stlWriteObj; // object "stlWriteObj" is created to convert the stored data to txt file for plotting
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
                string filePath = "D:/harish_ojha_workspace/cpp_assignmnets/a3.1/OBJfiles/Cube.stl";
                int cubObjChice;
                cout<<"Do you wanna see the obj file of cube"<<endl;
                cin>>cubObjChice;
                if(cubObjChice){
                    ifstream objFile;
                    string line;
                    objFile.open(filePath);
                    if (!objFile.is_open()){
                        cerr<<"error opeing cube obj file!"<<endl;
                    }
                    while(getline(o))
                }
                Triangulation t;
                Obj2stl o;
                o.convert(filePath,t);
                
                //D:\harish_ojha_workspace\cpp_assignments\a3.1\OBJfiles
                /* vector<Triangle> lot = triguObjForCube.listOfTriangles(); // lot = list of triangles
                vector<Point3D> lop = triguObj.listOfPoint3Ds(); // lop = list of Point3Ds */
                /* stlReaderObj.comparison("D:har/STLFiles/Cube.stl",  lot,lop); // creating data structure for storage of Point3Ds & Triangles
                stlWriteObj.txtGeneration("D:/coding/cpp_assign_3/STLFiles/Cube.stl",  lot,lop); // creating txt file from above Data Structure */
                break;
            }
            case 2:{
                // for potting sphere
                vector<Triangle> lot = triguObj.listOfTriangles(); // lot = list of triangles
                vector<Point3D> lop = triguObj.listOfPoint3Ds(); // lop = list of Point3Ds
                stlReaderObj.comparison("D:/coding/cpp_assign_3/STLFiles/Sphere.stl",  lot,lop); // creating data structure for storage of Point3Ds & Triangles
                stlWriteObj.txtGeneration("D:/coding/cpp_assign_3/STLFiles/Sphere.stl",  lot,lop); // creating txt file from above Data Structure
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
