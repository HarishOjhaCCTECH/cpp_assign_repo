//purpose - checking the file type of provided file
#pragma once
#include <string>
namespace Shapes3D{
    class FileTypeChecker{
        public:
            FileTypeChecker();// constructor
            ~FileTypeChecker(); // destructor
            bool isStlFile(const std::string &filename); // file checker
    };
}
