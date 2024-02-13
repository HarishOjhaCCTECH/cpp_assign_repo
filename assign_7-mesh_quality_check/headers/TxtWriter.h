//purpose - creates txt file for gnuplot
#pragma once
#include "Triangulation.h"
#include <string>
namespace Shapes3D{
    class TxtWriter{
        public:
            TxtWriter(); // constructor
            ~TxtWriter(); // destructor
            void write(std::string &filePath, Triangulation &triangulation); // creates complete txt file
            void writeBadTriangles(std::string &outputBadTrianglesFilePath, Triangulation &triangulationBadTriangles); // creates bad triangles txt file
            void writeGoodTriangles(std::string &outputGoodTrianglesFilePath, Triangulation &triangulationGoodTriangles); // creates good triangles txt file
    };
}
