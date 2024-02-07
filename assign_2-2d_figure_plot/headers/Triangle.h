#pragma once
#include "Shape.h"
class Triangle: public Shape{
    public:
        Triangle();
        ~Triangle();
        void askCoordinates();
        double mx1,my1,mx2,my2,mx3,my3;
};