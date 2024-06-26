#include <iostream>
#include "./headers/StlReader.h"
#include "./headers/ObjWriter.h"
#include "./headers/FileTypeChecker.h"
int main(){
    std::string inputFilePath;
    std::cout << "Enter .stl filepath" << std::endl;
    std::cout << std::endl;
    std::cin >> inputFilePath;
    std::cout << std::endl;
    Shapes3D::FileTypeChecker checker;
    if (!checker.isStlFile(inputFilePath)){
        std::cout << "Error! Input file is not a .stl file." << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        return 1;
    }
    Shapes3D::Triangulation triangulationObj;
    Shapes3D::StlReader stlReader;
    stlReader.read(inputFilePath, triangulationObj);
    std::string txtOutputFilePath = "resources/outputFiles/cube.obj";
    Shapes3D::ObjWriter objWriter;
    objWriter.write(txtOutputFilePath, triangulationObj);
    std::cout << "***************************************************" << std::endl;
    return 0;
}
