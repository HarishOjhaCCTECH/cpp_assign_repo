#pragma once
#include "Shape.h"
class Ellipse{
    public:
        Ellipse();
        ~Ellipse();
        void askCoordinates();
        double mSemiMajorAxis,mSemiMinorAxis;
};