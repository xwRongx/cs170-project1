#ifndef TREE
#define TREE
#include "Node.h"

class Tree
{
private:
    Node* root; //root node
    Node* currentNode;
    Node* nextNode;
    int nodeCount;

public:
    //in PROBLEM class, create initial node from user input/ hardcode, then initialize tree with inital node as root
    Tree(Node* initial);
    ~Tree();

    //setters
    void setRoot(Node* node);
    void setNextNode(Node* node);

    //getters
    Node* getRoot() const;
    Node* getNextNode();

    void incrementNodeCount();
    void duplicateCheck();
};

Tree::~Tree()
{
}

#endif


