#include "../headers/Tree.h"

Tree::Tree(Node* initial)
{
    root = initial;
}

Tree::~Tree()
{
}

void Tree::setRoot(Node* node){
    root = node;
}