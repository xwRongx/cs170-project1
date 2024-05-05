#include <iostream>
#include <stdio.h>
#include <sstream>
#include <cmath>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector> 
#include <ctime>
#include "../headers/Node.h"
using namespace std;
#ifndef DISPLAY_H
#define DISPLAY_H

class Display
{   private:
        int choice;
    public:
        
        Display();
        void displayNode(Node* ptr);
        void printSolutionPath(Node* ptr);

        void printEuclideanSolutionPath(Node* ptr);

        void setChoice(int alg_choice);

        friend class Node;
};
#endif
