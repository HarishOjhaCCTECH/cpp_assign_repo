#pragma once
class Point3d{
    public:
        Point3d();
        Point3d(double px, double py, double pz);
        ~Point3d();
        double x();
        double y();
        double z();
    private:
        double mx;
        double my;
        double mz;
};