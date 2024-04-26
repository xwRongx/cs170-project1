#include "Node.h"
#include "Tree.h"

class Problem
{
private:
    Node* initialState;
    Node* goalState;
    Tree* tree;
public:
    Problem();
    Problem(Node* init);

    //setters
    void setInitial(Node* init);

    //getters
    Node* getInitialState();

    //Operators (move empty space up/down/left/right)

    ~Problem();
};




