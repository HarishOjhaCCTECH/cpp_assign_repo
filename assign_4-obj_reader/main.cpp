#include <iostream>
#include "headers/Triangulation.h"
#include "headers/ObjReader.h"
#include "headers/Ds2txt.h"
using namespace std;
int main(){
    bool exit = false;
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
                ObjReader::getObj().read((Triangulation::getObj()),"D:/harish_ojha_workspace/cpp_assignments/assign_4-obj_reader/objfiles/cube.obj");
                Ds2txt::getObj().write(Triangulation::getObj());
                break;
            }
            case 2:{
                // for potting sphere
                ObjReader::getObj().read((Triangulation::getObj()),"D:/harish_ojha_workspace/cpp_assignments/assign_4-obj_reader/objfiles/sphere.obj");
                Ds2txt::getObj().write(Triangulation::getObj());
                break;
            }
            default:{
                // if the user chooses something other then than the given options
                cout<<"wrong choice"<<endl;
                break;
            }
        }
    }
    cout<<"it works";
}