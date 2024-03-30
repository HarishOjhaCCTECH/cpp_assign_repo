#include "../headers/Ds2txt.h"
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include "../headers/Point3d.h"
#include "../headers/Triangle.h"
using namespace std;
Ds2txt::Ds2txt(){}
Ds2txt Ds2txt::dObj;
Ds2txt & Ds2txt::getObj(){
    return dObj;
}
void Ds2txt::write(Triangulation & triagu){
    string userInput = "";// userInput will be stored in the txt for plotting
    // below loop will create string in the format required to plot in GNUplot
    vector<Triangle> lot = triagu.getTriangles();
    vector<Point3d> lop = triagu.getPoints();
    for (auto& k : lot) {
        string tempStr = to_string(lop[k.v1()].x()) + " " + to_string(lop[k.v1()].y()) + " " + to_string(lop[k.v1()].z()) + "\n";
        tempStr += to_string(lop[k.v2()].x()) + " " + to_string(lop[k.v2()].y()) + " " + to_string(lop[k.v2()].z()) + "\n";
        tempStr += to_string(lop[k.v3()].x()) + " " + to_string(lop[k.v3()].y()) + " " + to_string(lop[k.v3()].z()) + "\n";
        userInput += tempStr;
    }
    std::ofstream outputFile;
    // Open a file in write mode
    outputFile.open("D:/harish_ojha_workspace/cpp_assignments/assign_4-obj_reader/txtfile/file_for_gnuplot.txt");
    // Check if the file is open
    if (outputFile.is_open()) {
        // Write the user input to the file
        outputFile << userInput;
        // Close the file
        outputFile.close();
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}