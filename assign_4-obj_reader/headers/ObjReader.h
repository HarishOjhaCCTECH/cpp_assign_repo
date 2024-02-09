#pragma once
#include "Triangulation.h"
#include <string>
using namespace std;
class ObjReader{
    public:
        ObjReader(const ObjReader & obj1) = delete;\
        static ObjReader & getObj();
        void read(Triangulation & triagu, string filePath);
    private:
        ObjReader();
        static ObjReader obu;
};