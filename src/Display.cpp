#include "../headers/Display.h"
#include "../headers/Problem.h"
#include "../headers/Tree.h"

Display::Display()
{}

void Display::displayNode(Node* ptr)
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ptr->board[i][j] << " ";
        }
        cout << endl;
    }
}

void Display::printSolutionPath(Node* ptr)
{
    if(ptr->parent == nullptr)
    {
        return;
    }
    printSolutionPath(ptr->parent);
    displayNode(ptr);
}
