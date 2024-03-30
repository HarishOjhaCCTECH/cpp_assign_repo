#include "../headers/FileTypeChecker.h"
#include <string>
#include <algorithm>
Shapes3D::FileTypeChecker::FileTypeChecker() {} // default constructor
Shapes3D::FileTypeChecker::~FileTypeChecker() {} // destructor
bool Shapes3D::FileTypeChecker::isStlFile(const std::string &filename){ // checker whether the file given is stl or not
    size_t dotPosition = filename.find_last_of('.');
    if (dotPosition == std::string::npos){
        return false;
    }
    std::string extension = filename.substr(dotPosition + 1);
    std::transform(extension.begin(), extension.end(), extension.begin(), ::tolower);
    return (extension == "stl");
}
