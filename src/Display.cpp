#include "../headers/Display.h"
#include "../headers/Problem.h"
#include "../headers/Tree.h"

Display::Display(){
    int choice = -1;
}

void Display::displayNode(Node* ptr)
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ptr->board[i][j] << " ";
        }
        cout << endl;
    }
}

void Display::setChoice(int alg_choice){
    choice = alg_choice;
}



void Display::printSolutionPath(Node* ptr)
{
    if(ptr->parent == nullptr)
    {
        return;
    }
    printSolutionPath(ptr->parent);
    if(choice < 1)
        cout << "The best state to expand with g(n) = " << ptr->getGn() << " and h(n) = " << ptr->getHn() << " is..." << endl;
    else if(choice ==1)
        cout << "The best state to expand with g(n) = " << ptr->getGn() << " is..." << endl;
    
    cout << "Expanding this state... \n";
    
    displayNode(ptr);
    cout << endl;
}
