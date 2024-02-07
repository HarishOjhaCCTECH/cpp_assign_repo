// this is .h file for class STLwriter
// purpose - to create a txt file by fetching the data from the stored Point3Ds and triangles, which required for plotting on gnuplot
#pragma once
#include <string>
#include <vector>
#include "Point3D.h"
#include "Triangle.h"
class STLwriter{
    public:
        STLwriter(); // default constructor
        ~STLwriter(); // destructor
        // below function creates txt file to used for plotting in gnuplot by fetching data from "lot"(list of triangles) and "lop"(list of Point3Ds)
        void txtGeneration(std::string stlFilePath, std::vector<Triangle> & lot, std::vector<Point3D> & lop);
};
