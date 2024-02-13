// purpose - write the obj file from stored data
#pragma once
#include "../headers/Triangulation.h"
#include <string>
namespace Shapes3D{
    class ObjWriter{
        public:
            ObjWriter(); // constructor
            ~ObjWriter(); // destrcutor
            void write(std::string &filePath, Triangulation &triangulationObj);  //creates obj files
    };
}
