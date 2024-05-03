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
    int group = 16;
    cout << "Welcome to group 16's 8 puzzle solver" << endl;
    cout << "Type 1 to use default puzzle and Type 2 to enter own puzzle" << endl;
    //put default puzzle here
    int defaultBoard[3][3] = {{1, 0, 3}, {4,2,6},{7,5,8}};
    int customBoard[3][3];
    cin >> userChoice;
    if(userChoice == 2)
    {
        int currNum;
        cout << "Enter your puzzle one by one, 0 is the blank space" << endl;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << "Position: Row: " << i << "x Columns: " << j << ":";
                cin >> userChoice;
                customBoard[i][j] = userChoice;
            }
        }
    }
    cout << endl << endl;
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
    int total_nodes = 0;
    int max_nodes_queue = 0;
    int depth = 0;
    cout << "END\nTo solve this problem, the search expanded " << total_nodes << " nodes." << endl;
    cout << "The maximum number of nodes in the queue at any one times is:  " << total_nodes << " nodes." << endl;
    cout << "The depth of the goal node is: " << depth << endl;

}
