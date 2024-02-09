// ds2txt means Data structure to text
// it converts the stored data to text file for plotting in gnuplot
// singleton is applied
#pragma once
#include "Triangulation.h"
class Ds2txt{
    public:
        Ds2txt(const Ds2txt & obj1) = delete; // disabling the copy constructor
        static Ds2txt & getObj(); // getter for object
        void write(Triangulation & triagu); // writing txt file
    private:
        Ds2txt(); // default constructor
        static Ds2txt dObj; // declaring object for class Ds2txt
};
