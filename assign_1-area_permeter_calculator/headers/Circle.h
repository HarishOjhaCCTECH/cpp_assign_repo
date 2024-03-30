#pragma once
class Circle{
        public:
            Circle();
            Circle(double r);
            ~Circle();
            void description();
            double perimeter();
            void setRadius(double r);
            double area();
        private:
            double mRadius;
};