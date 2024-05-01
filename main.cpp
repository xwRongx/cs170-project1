#include <iostream>
#include "headers/Problem.h"

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
            case 1:
                // Uniform Cost Search
                break;
            case 2:
                // A* with the Misplaced Tile heuristic
                break;
            case 3:
                // A* with the Euclidean Distance heuristic
                break;
            default:
                printf("Sorry, %d is not an option, select again.\n", userChoice);
                break;
        }
    }
}