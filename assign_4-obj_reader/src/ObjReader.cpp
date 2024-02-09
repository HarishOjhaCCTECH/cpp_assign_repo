#include "../headers/ObjReader.h"
#include <fstream>
#include <iostream>
using namespace std;
ObjReader::ObjReader(){}
ObjReader ObjReader::obu;
ObjReader & ObjReader::getObj(){
    return obu;
}
//below read function reads the obj file of 3d figure and stores it in triangulation
void ObjReader::read(Triangulation & triagu, string filePath){
    ifstream objFile;
    string objLine;
    objFile.open(filePath);
    if(!objFile.is_open()){
        cerr<<"error opening the obj file."<<endl;
    }
    while(getline(objFile,objLine)){
        int positionV = objLine.find("v ");
        int positionVN = objLine.find("vn ");
        int positionF = objLine.find("f ");
        if(positionV != string::npos){
            //vertices
            string str = objLine.substr(positionV+2);
            double threeCoordinatesArr[3] = {0,0,0};
            for(int i = 0; i<3; i++){
                int pos3 = str.find(" ") ;
                threeCoordinatesArr[i] = stod(str.substr(0,pos3));
                str = str.substr(pos3+1);
            }
            triagu.getPoints().emplace_back(threeCoordinatesArr[0],threeCoordinatesArr[1],threeCoordinatesArr[2]);
        }else if (positionVN != string::npos){
            // normals
            string str = objLine.substr(positionVN+3);
            int normalArr[3] = {0,0,0};
            for(int i = 0; i<3; i++){
                int pos3 = str.find(" ") ;
                normalArr[i] = stoi(str.substr(0,pos3));
                str = str.substr(pos3+1);
            }
            triagu.getNormals().emplace_back(normalArr[0],normalArr[1],normalArr[2]);
        }else if(positionF != string::npos){
            // facet
            string facetArr[3];
            string str = objLine.substr(positionF+2);
            for(int i = 0; i < 3; i++){
                int pos3 = str.find(" ");
                facetArr[i] = str.substr(0, pos3);
                str = str.substr(pos3+1);
            }
            triagu.getTriangles().emplace_back(stoi(facetArr[0].substr(0,1)), stoi(facetArr[1].substr(0,1)), stoi(facetArr[2].substr(0,1)));            
        }
    }
}
