// purpose - read the stl file and store it in data structure
#pragma once
#include "Triangulation.h"
#include <string>
namespace Shapes3D{
    class StlReader{
        public:
            StlReader(); // constructor
            ~StlReader(); // destructor
            void read(const std::string &filePath, Triangulation &triangulation); // read the stl file
    };
}
