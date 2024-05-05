#include <iostream>
#include "headers/Problem.h"
#include "headers/AlgUCS.h"
#include "headers/AlgEuclidean.h"
#include "headers/AlgMisplaced.h"
#include "headers/Display.h"
#include <array>
const int board_size = 3;
array<array<int, board_size>, board_size> createCustomNode();

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
    bool searchRun;
    int maxQueueNodeCount = 0;
    int totalNodeCount = 1;
    int goalDepth = 0;
    while(userChoiceAlg != 0) {
        cout << "Type the number of the desired algorithm to use: \n"
               "1 - Uniform Cost Search\n"
               "2 - A* with the Misplaced Tile heuristic\n"
               "3 - A* with the Euclidean Distance heuristic\n"
               "0 - Exit\n";
        cin >> userChoiceAlg;
        
        searchRun = true;
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

                    totalNodeCount = p->getnodeCount();
                    maxQueueNodeCount = ucs.getMaxNodes();
                    goalDepth = solution->getGn();
                    p->setnodeCount(0);
                }
                else
                    cout << "No Solution found!\n";
            }
                break;
            case 2:{
                // A* with the Misplaced Tile heuristic
                AlgMisplaced a_star_misplaced;
                d->setChoice(2);
                Node* solution = a_star_misplaced.GeneralSearch(p);
                if(solution !=nullptr) {
                    cout << "Expanding state\n";
                    d->displayNode(p->getInitialState());
                    cout << endl;
                    d->printSolutionPath(solution);
                    cout << "Goal!!!\n";

                    totalNodeCount = p->getnodeCount();
                    maxQueueNodeCount = a_star_misplaced.getMaxNodes();
                    goalDepth = solution->getGn();
                    p->setnodeCount(0);
                }
                else
                    cout << "No Solution found!\n";
            }
                break;
            case 3:{
                // A* with the Euclidean Distance heuristic
                AlgEuclidean a_star_euclid;
                d->setChoice(3);
                Node* solution = a_star_euclid.GeneralSearch(p);
                if(solution !=nullptr) {
                    cout << "Expanding state\n";
                    d->displayNode(p->getInitialState());
                    cout << endl;
                    d->printSolutionPath(solution);
                    cout << "Goal!!!\n";

                    totalNodeCount = p->getnodeCount();
                    maxQueueNodeCount = a_star_euclid.getMaxNodes();
                    goalDepth = solution->getGn();
                    p->setnodeCount(0);
                }
                else
                    cout << "No Solution found!\n";
            }
                break;
            default:
                printf("Sorry, %d is not an option, select again.\n", userChoiceAlg);
                searchRun = false;
                break;
        }
        if(searchRun)
        {
            cout << "To solve this problem the search algorithm expanded as total of " << totalNodeCount << " nodes." << endl;
            cout << "The maximum number of nodes in the queue at any time: " << maxQueueNodeCount << "." << endl;
            cout << "The depth of the goal node was : " << goalDepth << "." << endl;
        }

    }
    

}
array<array<int, board_size>, board_size> createCustomNode(){
    array<array<int, board_size>, board_size> myarr{};
    std::cout << "Enter the first row, use space or tabs between numbers:";
    for(int x = 0; x < board_size;x++){
        std::cin >> myarr[0][x];
    }
    std::cout << "Enter the second row, use space or tabs between numbers:";
    for(int x = 0; x < board_size;x++){
        std::cin >> myarr[1][x];
    }
    std::cout << "Enter the third row, use space or tabs between numbers:";
    for(int x = 0; x < board_size;x++){
        std::cin >> myarr[2][x];
    }
    return myarr;
};