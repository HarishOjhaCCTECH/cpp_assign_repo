#pragma once
#include "Triangulation.h"
#include <string>
using namespace std;
class Obj2stl{
    public:
        Obj2stl(); // default constructor
        ~Obj2stl(); // destructor
        void convert(string filePath, Triangulation & triguObj); // converts the obj to stl
};