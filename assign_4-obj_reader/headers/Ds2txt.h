#pragma once
#include "Triangulation.h"
class Ds2txt{
    public:
        Ds2txt(const Ds2txt & obj1) = delete;
        static Ds2txt & getObj();
        void write(Triangulation & triagu);
    private:
        Ds2txt();
        static Ds2txt dObj;
};
