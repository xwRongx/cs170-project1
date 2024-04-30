#include <iostream>
#include "headers/Problem.h"

using namespace std;

/*THIS IS JUST TO TEST FUNCTIONS*/

int test(){
    Problem test;
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

    //test.setInitialState(myarr);
    test.findSpace();
    test.moveUp();

    return 0;
}