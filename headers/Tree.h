#include "Node.h"

class Tree
{
private:
    //root node
    Node* initialState;
    //same every time
    Node* goalState;
public:
    Tree(Node* initial);
    ~Tree();
};


