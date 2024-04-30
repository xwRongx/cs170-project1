#include <iostream>
#include "headers/Problem.h"

using namespace std;

/*THIS IS JUST TO TEST FUNCTIONS*/

int main(){
    /* Problem test;
      int myarr[3][3];
    cout << "Enter the first row, use space or tabs between numbers:";
    for(int x = 0; x < 3;x++){
        cin >> myarr[0][x];
    }
    cout << "Enter the second row, use space or tabs between numbers:";
      for(int x = 0; x < 3;x++){
        cin >> myarr[1][x];
    }
    cout << "Enter the third row, use space or tabs between numbers:";
      for(int x = 0; x < 3;x++){
        cin >> myarr[2][x];
    }
    */
    //test.setInitialState(myarr);
    //test.findSpace();
    //test.display();
    //test.moveUp();
    //test.display();
    int initial[3][3] = {{1, 2, 3}, {4, 0, 5}, {6, 7, 8}};
    Node* initialState = new Node(initial);
    Problem problem(initialState);

    
    cout << "Initial State:" << endl;
    problem.display();

   
    cout << "Up" << endl;
    if (problem.moveUp(problem.getInitialState())) {
        cout << "Move up successful." << endl;
    } else {
        cout << "Move up failed." << endl;
    }
    
    return 0;
}