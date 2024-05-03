#include <iostream>
#include "headers/AlgEuclidean.h"
#include "headers/AlgGeneric.h"
#include "headers/AlgMisplaced.h"
#include "headers/AlgUCS.h"
#include "headers/Display.h"
#include "headers/Node.h"
#include "headers/Problem.h"
#include "headers/Tree.h"

using namespace std;

int main() {
    int userChoice = -1;

    while(userChoice != 0) {
        cout << "Type the number of the desired algorithm to use: \n"
               "1 - Uniform Cost Search\n"
               "2 - A* with the Misplaced Tile heuristic\n"
               "3 - A* with the Euclidean Distance heuristic\n"
               "0 - Exit\n";
        cin >> userChoice;

        Problem *p = new Problem;

        //Display *d = new Display;
        switch (userChoice) {
            case 1:{
                // Uniform Cost Search
                cout << "Enter the initial state of the puzzle (use 0 for the blank tile):\n";
                int puzzle[3][3];
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        cin >> puzzle[i][j];
                    }
                }
                // Convert 2D array to Node object
                Node* initialNode = new Node(puzzle);
                p->setInitialState(initialNode);
                AlgUCS ucs;
                
                Node* sol = ucs.GeneralSearch(p);
                
                if(sol !=nullptr)
                    cout << "Solution found!\n";
                else
                    cout << "No Solution found!\n";
                
            }
                break;
            case 2:
                cout << endl;
                // A* with the Misplaced Tile heuristic
                break;
            case 3:
                cout << endl;
                // A* with the Euclidean Distance heuristic
                break;
            default:
                printf("Sorry, %d is not an option, select again.\n", userChoice);
                break;
        }
    }
}