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
    cout << "The best state to expand with g(n) = " << ptr->getGn() << " and h(n) = " << ptr->getHn() << " is..." << endl;
    cout << "Expanding this state... \n";
    displayNode(ptr);
    cout << endl;
}

void Display::printEuclideanSolutionPath(Node* ptr)
{
    if(ptr->parent == nullptr)
    {
        return;
    }
    printSolutionPath(ptr->parent);
    cout << "The best state to expand with g(n) = " << ptr->getGn() << " and h(n) = " << ptr->getHnEuclidean() << " is..." << endl;
    cout << "Expanding this state... \n";
    displayNode(ptr);
    cout << endl;
}