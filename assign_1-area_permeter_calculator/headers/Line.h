#pragma once

class Line{
    public:
        Line();
        ~Line();
        void description();
        double length();
        void setDimensions(double x1, double y1, double x2,double y2);

    private:
        double mx1;
        double my1;
        double mx2;
        double my2;
};
