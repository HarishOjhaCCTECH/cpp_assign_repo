#pragma once
#include "Shape.h"

class Square:public Shape{
    public:
        Square();
        ~Square();
        void askCoordinates();
        double mx,my;
};