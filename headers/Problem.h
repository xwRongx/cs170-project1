#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <utility>
#include <map>
#include <functional>
using namespace std;

#ifndef PROBLEM
#define PROBLEM

//board size for all files
#define SIZE 3
class Problem
{
private:
    Node* initialState = nullptr;
    Node* goalState = nullptr;
    Tree* tree = nullptr;
    bool memoize(Node* node);
    map<basic_string<char>, bool> memoization; // hash value of board state of node, boolean for if it exists or not

public:
    Problem();
    explicit Problem(Node* init);
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
    void resetMemoization();


    ~Problem();
};


#endif
