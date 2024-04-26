#include "../headers/Problem.h"
#include <iostream>
#include <utility>
using namespace std;

Problem::Problem(){
     for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
           initial_state[i][x] = 0;
           goal_state[i][x] = 0;
        }
    }

}

int* Problem::getInitialState(){
     return &initial_state[0][0];
}
int* Problem::getGoalState(){
    return &goal_state[0][0];

}

void Problem::setInitialState(int initial[3][3]){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++)
           initial_state[i][x] = initial[i][x];
    }
}
void Problem::setGoalState(int goal[3][3]){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++)
           goal_state[i][x] = goal[i][x];
    }
}

    //Operators (move empty space up/down/left/right)
bool Problem::moveUp(){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;

   if(row > 0){
    swap(initial_state[row][col], initial_state[row-1][col]);
    return 1;
   }
   else{
    cout << "Cannot move Up!\n";
    return 0;
   }


}
bool Problem::moveDown(){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(row < 2){
    swap(initial_state[row][col], initial_state[row+1][col]);
    return 1;
   }
   else{
    cout << "Cannot move Down!\n";
    return 0;
   }


}
bool Problem::moveLeft(){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(col > 0){
    swap(initial_state[row][col], initial_state[row][col-1]);
    return 1;
   }
   else{
    cout << "Cannot move left!\n";
    return 0;
   }


}
bool Problem::moveRight(){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(col < 2){
    swap(initial_state[row][col], initial_state[row][col+1]);
    return 1;
   }
   else{
    cout << "Cannot move right!\n";
    return 0;
   }
}

pair<int, int>Problem::findSpace(){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            if(initial_state[i][x] == 0){
                return make_pair(i, x); //return pair as row and column
            }
        }
    }
    return make_pair(-1, -1); //this will throw an error if we cannot find a space
 }

 void Problem::display(){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << initial_state[i][x] << " ";
        }
        cout << endl;
    }
    cout << endl;
 }

Problem::~Problem(){
}
