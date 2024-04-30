#include "Node.h"

class Tree
{
private:
    //root node
    Node* root;
    int nodeCount;

public:
    //in PROBLEM class, create initial node from user input/ hardcode, then initialize tree with inital node as root
    Tree(Node* initial);
    ~Tree();

    //setters
    void setRoot(Node* node);
    void incrementNodes();
    void decrementNodes();

    //getters
};


