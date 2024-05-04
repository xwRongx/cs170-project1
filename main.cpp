#include <iostream>
#include "headers/Problem.h"
#include "headers/AlgUCS.h"
#include "headers/Display.h"

array<array<int, 3>, 3> createCustomNode();

using namespace std;



int main() {
    auto *p = new Problem;
    auto *d = new Display;

    cout << "Welcome to group 16's 8 puzzle solver" << endl;

    int userChoiceState;
        cout << "Type the number of the desired algorithm to use: \n"
                "1 - Default Initial State\n"
                "2 - Custom Initial State\n"
                "0 - Exit\n";
        cin >> userChoiceState;
        switch (userChoiceState) {
            case 1:
                // Default Initial State
                break;
            case 2: {
                // Custom Initial State
                auto node = new Node(createCustomNode());
                p->setInitialState(node);
                break;
            }
            default:
                break;
        }

    int userChoiceAlg = -1;
    while(userChoiceAlg != 0) {
        cout << "Type the number of the desired algorithm to use: \n"
               "1 - Uniform Cost Search\n"
               "2 - A* with the Misplaced Tile heuristic\n"
               "3 - A* with the Euclidean Distance heuristic\n"
               "0 - Exit\n";
        cin >> userChoiceAlg;

        switch (userChoiceAlg) {
            case 1:{
                // Uniform Cost Search
                AlgUCS ucs;
                d->setChoice(1);
                Node* solution = ucs.GeneralSearch(p);
                if(solution !=nullptr) {
                    cout << "Expanding state\n";
                    d->displayNode(p->getInitialState());
                    cout << endl;
                     
                    d->printSolutionPath(solution);
                    cout << "Goal!!!\n";
                }
                else
                    cout << "No Solution found!\n";
            }
                break;
            case 2:
                d->setChoice(2);
                cout << endl;
                // A* with the Misplaced Tile heuristic
                break;
            case 3:
                d->setChoice(3);
                cout << endl;
                // A* with the Euclidean Distance heuristic
                break;
            default:
                printf("Sorry, %d is not an option, select again.\n", userChoiceAlg);
                break;
        }
    }
}


array<array<int, 3>, 3> createCustomNode(){
    array<array<int, 3>, 3> myarr{};
    std::cout << "Enter the first row, use space or tabs between numbers:";
    for(int x = 0; x < 3;x++){
        std::cin >> myarr[0][x];
    }
    std::cout << "Enter the second row, use space or tabs between numbers:";
    for(int x = 0; x < 3;x++){
        std::cin >> myarr[1][x];
    }
    std::cout << "Enter the third row, use space or tabs between numbers:";
    for(int x = 0; x < 3;x++){
        std::cin >> myarr[2][x];
    }
    return myarr;
}