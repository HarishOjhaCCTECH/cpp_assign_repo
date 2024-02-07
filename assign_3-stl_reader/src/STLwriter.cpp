// this .cpp file contain the definitions for class STLwriter menationed in STLwriter.h
#include <fstream>
#include <string>
#include <vector>
#include "../headers/Point3D.h"
#include "../headers/Triangle.h"
#include <iostream>
#include "../headers/STLwriter.h"
using namespace std;
STLwriter::STLwriter(){} // default constructor
STLwriter::~STLwriter(){} // destructor
// below function converts the double and int data stored in lot(list of triangles) and lop(list of Point3Ds) to string to be stored in txt file for plotting
void STLwriter::txtGeneration(std::string stlFilePath, std::vector<Triangle> & lot, std::vector<Point3D> & lop){
    string userInput = "";// userInput will be stored in the txt for plotting
    // below loop will create string in the format required to plot in GNUplot
    for (auto& k : lot) {
        string tempStr = to_string(lop[k.v1()].x()) + " " + to_string(lop[k.v1()].y()) + " " + to_string(lop[k.v1()].z()) + "\n";
        tempStr += to_string(lop[k.v2()].x()) + " " + to_string(lop[k.v2()].y()) + " " + to_string(lop[k.v2()].z()) + "\n";
        tempStr += to_string(lop[k.v3()].x()) + " " + to_string(lop[k.v3()].y()) + " " + to_string(lop[k.v3()].z()) + "\n";
        userInput += tempStr;
    }
    std::ofstream outputFile;
    // Open a file in write mode
    outputFile.open("D:/coding/cpp_assign_3/GNUfiles/file_for_gnuplot.txt");
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
