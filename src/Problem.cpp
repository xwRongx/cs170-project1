#include "../headers/Problem.h"

//hardcoded problem
Problem::Problem(){
    initialState = new Node(Node()); //change hardcode to test or something
    goalState = new Node(Node());
}
//user input initialState problem
Problem::Problem(Node* init)
{
    //create initial node from user input (display class?), then initialize tree with inital node as root
    initialState = init;
    goalState = new Node(Node());

    tree = new Tree(Tree(initialState));
}

//setters
void Problem::setInitial(Node* init){
    initialState = init;
}

//getters
Node* Problem::getInitialState(){
    return initialState;
}