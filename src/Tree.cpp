#include "../headers/Tree.h"

Tree::Tree(Node* initial)
{
    root = initial;
}

Tree::~Tree()
{
}

//setters
void Tree::setRoot(Node* node){
    root = node;
}

void Tree::setNextNode(Node* node){
    nextNode = node;
}

//getters
Node* Tree::getRoot() const {
    return root;
}

Node* Tree::getNextNode() {
    // Check if currentNode has children
    if (currentNode->getChildLeft() != nullptr) {
        // If currentNode has a left child then move to the left child
        currentNode = currentNode->getChildLeft();
    } 
    else if (currentNode->getChildRight() != nullptr) {
        // If currentNode has a right child then move to the right child
        currentNode = currentNode->getChildRight();
    } 
    else if (currentNode->getChildUp() != nullptr) {
        // If currentNode has an upper child then move to the upper child
        currentNode = currentNode->getChildUp();
    } 
    else if (currentNode->getChildDown() != nullptr) {
        // If currentNode has no lower children then move to childDown
        currentNode = currentNode->getChildDown();
    } 
    else {
        // If currentNode has no children then restore parent
        currentNode = currentNode->getParent();
    }
    return currentNode;
}

void Tree::incrementNodeCount() {
    nodeCount++;
}

void Tree::duplicateCheck(){
    // Start from the root node
    Node* currentNode = root;
    // Traverse the tree until currentNode is not null
    while (currentNode != nullptr) {
        // Get the parent of the current node
        Node* parentNode = currentNode->getParent();
        
        // If the current node has a parent, check for duplicate states
        if (parentNode != nullptr) {
            // Check if the current node is equal to any of the parent nodes
            if (currentNode->isEqual(parentNode)) {
                // If a duplicate state is found, delete the current node
                delete currentNode;
                
                // Restore parent state
                currentNode->restoreState(parentNode);
                return;// return or break the loop
            }
        }
        currentNode = getNextNode(); // Move to the next node in the tree
    }
}