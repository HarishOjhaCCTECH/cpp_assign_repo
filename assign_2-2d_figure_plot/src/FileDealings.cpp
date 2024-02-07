#include <iostream>

// for creating files
#include <fstream>
#include <string>

// for delketing files
#include <cstdio> // or #include <stdio.h>
#include "../headers/FileDealings.h"
#include <cmath>
using namespace std;


FileDealings::FileDealings(){}
FileDealings::~FileDealings(){}


//below one is for line
void FileDealings::createFile(double mx1, double my1, double mx2, double my2) {
    string userInput = to_string(mx1) + " " + to_string(my1) + "\n" + to_string(mx2) + " " + to_string(my2);
    //cout << userInput;
    std::ofstream outputFile;

    // Open a file in write mode
    outputFile.open("file_for_gnuplot.txt");

    // Check if the file is open
    if (outputFile.is_open()) {
        // Write the user input to the file
        outputFile << userInput;
        
        // Close the file
        outputFile.close();

        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}


//below one is for triangle
void FileDealings::createFile(double mx1, double my1, double mx2, double my2, double mx3, double my3) {
    string userInput = to_string(mx1) + " " + to_string(my1) + "\n" + to_string(mx2) + " " + to_string(my2) + "\n" + to_string(mx3) + " " + to_string(my3) + "\n" + to_string(mx1) + " " + to_string(my1);
    //cout << userInput;
    std::ofstream outputFile;

    // Open a file in write mode
    outputFile.open("file_for_gnuplot.txt");

    // Check if the file is open
    if (outputFile.is_open()) {
        // Write the user input to the file
        outputFile << userInput;
        
        // Close the file
        outputFile.close();

        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}


// below one is for square and rectangle
void FileDealings::createFile(double mx1, double my1) {
    string userInput = to_string(0) + " " + to_string(0) + "\n" + to_string(mx1) + " " + to_string(0) + "\n" + to_string(mx1) + " " + to_string(my1) + "\n" + to_string(0) + " " + to_string(my1) + "\n" + to_string(0) + " " + to_string(0);
    //cout << userInput;
    std::ofstream outputFile;

    // Open a file in write mode
    outputFile.open("file_for_gnuplot.txt");

    // Check if the file is open
    if (outputFile.is_open()) {
        // Write the user input to the file
        outputFile << userInput;
        
        // Close the file
        outputFile.close();

        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}


// below one is for circle
void FileDealings::createFile(double radius) {
    string userInput;
    for (int degrees = 0; degrees <= 360; degrees++) {
        // Convert degrees to radians
        double radians = degrees * (3.14 / 180.0);

        // Calculate coordinates using parametric equations
        double x =  radius * cos(radians);
        double y =  radius * sin(radians);
        userInput+= to_string(x) + " " + to_string(y) + "\n";
    }

    std::ofstream outputFile;

    // Open a file in write mode
    outputFile.open("file_for_gnuplot.txt");

    // Check if the file is open
    if (outputFile.is_open()) {
        // Write the user input to the file
        outputFile << userInput;
        
        // Close the file
        outputFile.close();

        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}

//below is for ellipse
void FileDealings::createFileEllipse(double R, double r){
    string userInput;
    for (int degrees = 0; degrees <= 360; degrees++) {
        // Convert degrees to radians
        double radians = degrees * (3.14 / 180.0);

        // Calculate coordinates using parametric equations
        double x =  R * cos(radians);
        double y =  r * sin(radians);
        userInput+= to_string(x) + " " + to_string(y) + "\n";
    }

    std::ofstream outputFile;

    // Open a file in write mode
    outputFile.open("file_for_gnuplot.txt");

    // Check if the file is open
    if (outputFile.is_open()) {
        // Write the user input to the file
        outputFile << userInput;
        
        // Close the file
        outputFile.close();

        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}
void FileDealings::deleteFile(){
    const char* filename = "file_for_gnuplot.txt";

    // Attempt to delete the file
    if (remove(filename) != 0) {
        perror("Error deleting file");
    } else {
        std::cout << "File successfully deleted." << std::endl;
    }


}