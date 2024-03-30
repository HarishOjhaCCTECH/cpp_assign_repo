#pragma once

class FileDealings{
        public:
            FileDealings();
            ~FileDealings();
            void createFile(double mx1, double my1, double mx2, double my2);// FOR LINE
            void createFile(double mx1, double my1, double mx2, double my2, double mx3, double my3);// FOR TRIANGLE
            void createFile(double mx1, double my1);// FOR SQUARE and rectangle
            void createFile(double r);// for circle
            void createFileEllipse(double R, double r);
            void deleteFile();
};