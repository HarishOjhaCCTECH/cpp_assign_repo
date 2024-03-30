// this.cpp file contain the definitions for class STLreader mentioned in STLreader.h
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "../headers/STLreader.h"
#include "../headers/Point.h"
using namespace std;
STLreader::STLreader(){} // default constructor
STLreader::~STLreader(){} // destructor
// comparison stores unique points(lop) and their indices in triangle(lot)
void STLreader::comparison(string stlFilePath,vector<Triangle> & lot, vector<Point> & lop){//lot = listOfTriangles, lop = listOfPoints
    map<Point, int> comparisonMap;
    ifstream stlFile;
    string stlLine;
    stlFile.open(stlFilePath);
    // Check if the file is opened successfully
    if (!stlFile.is_open()) {
        cerr << "Error opening file!" << endl;
    }
    int triangleIndices[3] = {0,0,0};
    int triangleIndicesCurrentIndex = 0; // 
    int lopCurrentIndex = 0;
    while(getline(stlFile,stlLine)){ // checking everyline
        int positionVertex = stlLine.find("vertex ");
        int positionEndLoop = stlLine.find("endloop");
        if(positionVertex != string::npos){
            string str = stlLine.substr(positionVertex+7);
            double threeCoordinatesArr[3] = {0,0,0};
            for(int i = 0; i<3; i++){
                int pos3 = str.find(" ") ;
                threeCoordinatesArr[i] = stod(str.substr(0,pos3));
                str = str.substr(pos3+1);
            }
            bool foundPoint = false;
            //checking a point through map
            for (const auto& i : comparisonMap){
                if((i.first.x() == threeCoordinatesArr[0]) && (i.first.y() == threeCoordinatesArr[1]) && (i.first.z() == threeCoordinatesArr[2])){
                    triangleIndices[triangleIndicesCurrentIndex] = i.second;
                    triangleIndicesCurrentIndex++;
                    foundPoint = true;
                    break;
                }
            }
            if(!foundPoint){
                // making a point obj and storing it in lop
                lop.emplace_back(threeCoordinatesArr[0],threeCoordinatesArr[1],threeCoordinatesArr[2]);
                // storing the same point in map for comaparison purpose
                comparisonMap[Point(threeCoordinatesArr[0],threeCoordinatesArr[1],threeCoordinatesArr[2])] = lopCurrentIndex;
                triangleIndices[triangleIndicesCurrentIndex] = lopCurrentIndex;
                lopCurrentIndex++;
                triangleIndicesCurrentIndex++;         
            }
        }
        if(positionEndLoop != string::npos){// this makes a triangle obj to store in lop only after getting all three vertices
            lot.emplace_back(triangleIndices[0], triangleIndices[1], triangleIndices[2]);
            triangleIndicesCurrentIndex=0;
        }
        
    }
    // the below commented code writes the coordinates to console in a structured way
    /* 
    for (auto& k : lot) {
        cout <<"triangle:\nVertex1 => X: " << lop[k.v1()].x() << " Y: " << lop[k.v1()].y() << " Z: " << lop[k.v1()].z() << endl;
        cout<<"\nVertex2 => X: " << lop[k.v2()].x() << " Y: " << lop[k.v2()].y() << " Z: " << lop[k.v3()].z() << endl;
        cout<<"\nVertex3 => X: " << lop[k.v3()].x() << " Y: " << lop[k.v3()].y() << " Z: " << lop[k.v3()].z() << endl;

    } */
}
