/*
#include <iostream>
#include "../headers/GNUplot.h"


#include <cstdlib>
void GNUNS::GNUplot::plotCommand(){
    // Command to call gnuplot and plot data from output.txt
    const char* command = "gnuplot -e \"set terminal png; set output 'figure.png'; plot 'file_for_gnuplot.txt' with lines\"";

    // Execute the command
    int result = std::system(command);

    // Check for errors
    if (result != 0) {
        std::cerr << "Error: Unable to plot using Gnuplot." << std::endl;
    } else {
        std::cout << "Plot generated successfully." << std::endl;
    }

}

GNUNS::GNUplot::GNUplot(){}

GNUNS::GNUplot::~GNUplot(){}

*/