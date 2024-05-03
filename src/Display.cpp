#include "../headers/Display.h"
#include "../headers/Node.h"
#include "../headers/Problem.h"

Display::Display()
{}

void Display::displayNode(Node* ptr)
{
    cout << "The best state to expand with g(n) = " << ptr->getGn() << " and h(n) = " << ptr->getHn() << " is..." << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ptr->board[i][j] << " ";
        }
        cout << endl << endl;
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
