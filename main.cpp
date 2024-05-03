#include <iostream>
#include "headers/Problem.h"
#include "headers/AlgUCS.h" 

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
                /*
                AlgUCS ucs;
                Node* sol = ucs.GeneralSearch(p);
                if(sol !=nullptr)
                    cout << "Solution found!\n";
                else
                    cout << "No Solution found!\n";
                */
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