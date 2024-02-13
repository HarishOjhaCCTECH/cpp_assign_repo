// purpose - stores the points index which are in vector
#pragma once
#include "Point3D.h"
namespace Shapes3D{
    class Triangle{
        public:
            Triangle(); // constructor
            Triangle(int inIndex1, int inIndex2, int inIndex3); // parameterised constructor
            ~Triangle(); // destructor
            int index1() const; // getter
            int index2() const; // getter
            int index3() const; // getter
            int normalIndex() const; // getter
            void setindex1(int inIndex1); // setter
            void setindex2(int inIndex2); // setter
            void setindex3(int inIndex3); // setter
            void setNormalIndex(int inNormalIndex); // setter
        private:
            int mIndex1;
            int mIndex2;
            int mIndex3;
            int mNormalIndex;
    };
}
