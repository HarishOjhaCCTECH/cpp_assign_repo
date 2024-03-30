#pragma once

class Rectangle{
    public:
        Rectangle();
        ~Rectangle();
        void rectangleDes();
        void description();
        double perimeter();
        double area();
        void setDimensions(double l, double b);
    private:
        double mLength;
        double mBreadth;

};