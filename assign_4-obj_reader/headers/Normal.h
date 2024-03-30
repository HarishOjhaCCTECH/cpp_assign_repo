#pragma once
class Normal{
    public:
        Normal();
        Normal(int a, int b, int c);
        ~Normal();
        int nx();
        int ny();
        int nz();
    private:
        int mnx;
        int mny;
        int mnz;
};