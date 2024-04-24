#include "../headers/Tree.h"

Tree::Tree(Node* initial)
{
    initialState = initial;
    goalState = new Node(Node());
}

Tree::~Tree()
{
}