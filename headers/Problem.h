#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <utility>
#include <functional>
using namespace std;

#ifndef PROBLEM
#define PROBLEM

class Problem
{
private:
    Node* initialState = nullptr;
    Node* goalState = nullptr;
    Tree* tree = nullptr;
public:
    Problem();
    Problem(Node* init);

    //setters
    void setInitialState(Node* init);
    void setGoalState(Node* goal);
    void setnodeCount(int i);

    //getters
    Node* getInitialState();
    Node* getGoalState();
    Tree* getTree();
    int getnodeCount();
    
    //Operators (move empty space up/down/left/right)
    Node* moveUp(Node* state);
    Node* moveDown(Node* state);
    Node* moveLeft(Node* state);
    Node* moveRight(Node* state);
    pair<int, int>findSpace(Node *state); //Find 0 (empty space) in the 3 by 3 array to begin operators(up, down left, right) 
    void display();


    ~Problem();
};


#endif
