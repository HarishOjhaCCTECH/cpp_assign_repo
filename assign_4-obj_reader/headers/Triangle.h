#pragma once 
class Triangle{
    public:
        Triangle();
        Triangle(int a, int b, int c);
        ~Triangle();
        int v1();
        int v2();
        int v3();
    private:
        int mv1;
        int mv2;
        int mv3;
};
