# Assignments Repository

This repository contains 7 assignments focusing on various topics in computer science.

## Assignment 1: Geometrical Entities Console Application

Create a console application for calculating the area and perimeter of various geometrical entities such as circle, ellipse, line, rectangle, square, and triangle.

STRUCTURE: 
- C++ is used here to make the console app. 
- the user inputs the data like coordinates or length, to find the area or perimeter of respective.

## Assignment 2: GNUplot Geometrical Entities Plotter

Create a GNUplot-based application to plot geometrical entities such as circle, ellipse, line, rectangle, square, and triangle.

STRUCTURE: 
- C++ is used here to make the console app, where user inputs the coordinates of 2d figures which are to be plotted in gnuplot. 
- the user inputs the data like coordinates or length, to find the area or perimeter of respective.
- the gnuplot is used here as a graphical interface, which is used by putting in a command in command prompt of gnuplot

## Assignment 3: STL reader

create a program in to read STL files, store the 3D points in a data structure to optimize the memory.

STRUCTURE: 
- Same as before, C++ console app.
- the user chooses which stl file to read
- then the program reads the data and stores 3D point in triangulation
- Then the program also makes txt file for plotting the 3D figure in gnuplot
- need to write the command in gnuplot console manually

## Assignment 4: OBJ File Reader and Plotter

Create a program to read and plot 3D figures from OBJ files using GNUplot.

STRUCTURE: 
- in here, everthing thing is same as stl file reader, expect it reads obj file

## Assignment 5: STL to OBJ Converter

Create a program to convert STL files to OBJ files.

PROGRAM FlOW: 
- the program reads the stl file => stores 3D points in triangulation => creates obj file form the stored 3D points

STRUCTURE:
- here also everthing is same as before assignments, only chage is that the instead of creating txt file for plotting, the obj file is being created

## Assignment 6: STL to OBJ Converter

Create another program to convert STL files to OBJ files.

STRUCTURE:
- it is vice-versa of assignment 5

## Assignment 7: STL Mesh Quality Checker

Create a program to check the mesh quality of an STL file.

STRUCTURE:
- the stl files have stored 3D figures in triangles, so each triangle is being tested
-  It uses the aspect ratio of each triangle to check whether it is good triangle or bad triangle
