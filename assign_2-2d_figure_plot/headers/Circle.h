#pragma once
#include "Shape.h"
class Circle{
    public:
        Circle();
        ~Circle();
        void askCoordinates();
        double mRadius;
        double mCenterX, mCenterY;
};