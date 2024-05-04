class Node;

#ifndef TREE
#define TREE

class Tree
{
private:
    Node* root = nullptr;; //root node
    Node* currentNode = nullptr;;
    Node* nextNode = nullptr;;
    int nodeCount;

public:
    //in PROBLEM class, create initial node from user input/ hardcode, then initialize tree with inital node as root
    Tree(Node* initial);
    ~Tree();

    //setters
    void setRoot(Node* node);
    void setNextNode(Node* node);
    void incrementNodes();
    void decrementNodes();

    //getters
    Node* getRoot() const;
    Node* getNextNode();
    Node* getNextChild(Node* currentNode);

    void incrementNodeCount();
    
    void updateChildPointer(Node* existingNode, Node* newNode);
    bool searchForDuplicate(Node* currentNode, Node* newNode);
    bool isThereADuplicate(Node* newNode);
    void duplicateCheck();
};



#endif


