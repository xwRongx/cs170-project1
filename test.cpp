#include <iostream>
#include "headers/Problem.h"
using namespace std;

/*THIS IS JUST TO TEST FUNCTIONS*/

int test(){
    int customboard[3][3];
    std::cout << "Enter the first row, use space or tabs between numbers:";
    for(int x = 0; x < 3;x++){
        std::cin >>customboard[0][x];
    }
    std::cout << "Enter the second row, use space or tabs between numbers:";
      for(int x = 0; x < 3;x++){
        std::cin >> customboard[1][x];
    }
    std::cout << "Enter the third row, use space or tabs between numbers:";
      for(int x = 0; x < 3;x++){
        std::cin >> customboard[2][x];
    }

    
    Node* init = new Node(myarr);
    Problem* test = new Problem(init);

    printf("Initial Node: \n");
    

    return 0;
}