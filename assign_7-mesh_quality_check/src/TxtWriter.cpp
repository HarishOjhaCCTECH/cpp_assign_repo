#include "../headers/TxtWriter.h"
#include <iostream>
#include <fstream>
Shapes3D::TxtWriter::TxtWriter() {} // default constructor
Shapes3D::TxtWriter::~TxtWriter() {} // destructor
void Shapes3D::TxtWriter::write(std::string &filePath, Triangulation &triangulation) // creates text file for gnuplot
{
    std::ofstream outFile(filePath);
    if (!outFile.is_open())
    {
        std::cout << "Error while opening .txt file." << std::endl;
        return;
    }
    // getting values of uniquePoints, triangles and assigning to new vectors -> points, triangles.
    std::vector<Point3D> points = triangulation.uniquePoints();
    std::vector<Triangle> triangles = triangulation.triangles();
    // iterating each triangle from traingles vector to write points
    for (const Triangle &triangle : triangles)
    {
        outFile << points[triangle.index1()].x() << " " << points[triangle.index1()].y() << " " << points[triangle.index1()].z() << std::endl;
        outFile << points[triangle.index2()].x() << " " << points[triangle.index2()].y() << " " << points[triangle.index2()].z() << std::endl;
        outFile << points[triangle.index3()].x() << " " << points[triangle.index3()].y() << " " << points[triangle.index3()].z() << std::endl;
    }
    outFile.close();
}
//makes txt file for bad triangles
void Shapes3D::TxtWriter::writeBadTriangles(std::string &outputBadTrianglesFilePath, Shapes3D::Triangulation &triangulationBadTriangles)
{
    std::ofstream outFile(outputBadTrianglesFilePath);
    if (!outFile.is_open())
    {
        std::cout << "Error while opening .txt file." << std::endl;
        return;
    }
    std::vector<Point3D> points = triangulationBadTriangles.uniquePoints();
    std::vector<Triangle> triangles = triangulationBadTriangles.triangles();
    for (const Triangle &triangle : triangles)
    {
        if (triangle.index1() >= points.size() || triangle.index2() >= points.size() || triangle.index3() >= points.size())
        {
            std::cout << "Error: Triangle indices out of bounds." << std::endl;
            outFile.close();
            return;
        }
        outFile << points[triangle.index1()].x() << " " << points[triangle.index1()].y() << " " << points[triangle.index1()].z() << std::endl;
        outFile << points[triangle.index2()].x() << " " << points[triangle.index2()].y() << " " << points[triangle.index2()].z() << std::endl;
        outFile << points[triangle.index3()].x() << " " << points[triangle.index3()].y() << " " << points[triangle.index3()].z() << std::endl;
    }
    outFile.close();
}
// makes txt file for good triangles to be plotted in gnuplot
void Shapes3D::TxtWriter::writeGoodTriangles(std::string &outputGoodTrianglesFilePath, Shapes3D::Triangulation &triangulationGoodTriangles)
{
    std::ofstream outFile(outputGoodTrianglesFilePath);
    if (!outFile.is_open()){
        std::cout << "Error while opening .txt file." << std::endl;
        return;
    }
    std::vector<Point3D> points = triangulationGoodTriangles.uniquePoints();
    std::vector<Triangle> triangles = triangulationGoodTriangles.triangles();
    for (const Triangle &triangle : triangles){
        if (triangle.index1() >= points.size() || triangle.index2() >= points.size() || triangle.index3() >= points.size()){
            std::cout << "Error: Triangle indices out of bounds." << std::endl;
            outFile.close();
            return;
        }
        outFile << points[triangle.index1()].x() << " " << points[triangle.index1()].y() << " " << points[triangle.index1()].z() << std::endl;
        outFile << points[triangle.index2()].x() << " " << points[triangle.index2()].y() << " " << points[triangle.index2()].z() << std::endl;
        outFile << points[triangle.index3()].x() << " " << points[triangle.index3()].y() << " " << points[triangle.index3()].z() << std::endl;
    }
    outFile.close();
}
