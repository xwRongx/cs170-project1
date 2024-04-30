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

// Advances the tree to the next node
Node* Tree::getNextNode(){
    // Check if currentNode has children
    if (currentNode->getChildLeft() != nullptr) {
        currentNode = currentNode->getChildLeft();
    } 
    else if (currentNode->getChildRight() != nullptr) {
        currentNode = currentNode->getChildRight();
    } 
    else if (currentNode->getChildUp() != nullptr) {
        currentNode = currentNode->getChildUp();
    } 
    else if (currentNode->getChildDown() != nullptr) {
        currentNode = currentNode->getChildDown();
    } 
    else {
        currentNode = currentNode->getParent();
    }
    return currentNode;
}

// getNextChild ensures a non-duplicate node is returned, or else it returns nullptr (likely no solution).
Node* Tree::getNextChild(Node* currentNode){
    // Check all child nodes of the current node
    if (currentNode->getChildLeft() != nullptr && !currentNode->isEqual(currentNode->getChildLeft())) {
        return currentNode->getChildLeft();
    }
    if (currentNode->getChildRight() != nullptr && !currentNode->isEqual(currentNode->getChildRight())) {
        return currentNode->getChildRight();
    }
    if (currentNode->getChildUp() != nullptr && !currentNode->isEqual(currentNode->getChildUp())) {
        return currentNode->getChildUp();
    }
    if (currentNode->getChildDown() != nullptr && !currentNode->isEqual(currentNode->getChildDown())) {
        return currentNode->getChildDown();
    }
    return nullptr; // No child node found that is not a duplicate
}

void Tree::incrementNodeCount(){
    nodeCount++;
}

// Determines the direction of the existing node relative to its parent
// and updates the parent child's pointer
void Tree::updateChildPointer(Node* existingNode, Node* newNode) {
    if (existingNode == existingNode->getParent()->getChildLeft()) {
        existingNode->getParent()->setChildLeft(newNode);
    } else if (existingNode == existingNode->getParent()->getChildRight()) {
        existingNode->getParent()->setChildRight(newNode);
    } else if (existingNode == existingNode->getParent()->getChildUp()) {
        existingNode->getParent()->setChildUp(newNode);
    } else if (existingNode == existingNode->getParent()->getChildDown()) {
        existingNode->getParent()->setChildDown(newNode);
    }
}

// Searches the entire tree to find any duplicate ancestors
bool Tree::searchForDuplicate(Node* currentNode, Node* newNode) {
    // Base case: the current node is nullptr
    if (currentNode == nullptr) {
        return false;
    }
    // Check if the currentNode state is equal to newNode state
    if (currentNode->isEqual(newNode)) { // If a duplicate is found
        updateChildPointer(currentNode, newNode);
        return true;
    }
    // Search in all four directions
    return searchForDuplicate(currentNode->getChildLeft(), newNode) ||
           searchForDuplicate(currentNode->getChildRight(), newNode) ||
           searchForDuplicate(currentNode->getChildUp(), newNode) ||
           searchForDuplicate(currentNode->getChildDown(), newNode);
}

bool Tree::isThereADuplicate(Node* newNode) {
    return searchForDuplicate(root, newNode); // search from root node to the new node
}

void Tree::duplicateCheck() {
    // Start from the root node
    Node* currentNode = root;

    while (currentNode != nullptr) {
        if (isThereADuplicate(currentNode)) {
            break;
        }
        currentNode = getNextNode(); // Move to the next node
    }
}