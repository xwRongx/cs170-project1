#include "../headers/Tree.h"

Tree::Tree(Node* initial)
{
    root = initial;
    nodeCount = 1;
}

Tree::~Tree()
{
}

void Tree::setRoot(Node* node){
    root = node;
}

void Tree::incrementNodes(){
    nodeCount++;
}

void Tree::decrementNodes(){
    nodeCount--;
}