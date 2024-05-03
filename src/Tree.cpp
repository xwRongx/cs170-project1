#include "../headers/Tree.h"
#include "../headers/Node.h"

Tree::Tree(Node* initial)
{
    root = initial;
    nodeCount = 1;
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

void Tree::incrementNodes(){
    nodeCount++;
}

void Tree::decrementNodes(){
    nodeCount--;
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

/* Updates the parent's child pointer to point to the duplicate node
   to prevent the exploring of that duplicate state again  */
void Tree::updateChildPointer(Node* existingNode, Node* duplicateNode) {
    Node* parentNode = existingNode->getParent();
    if (parentNode != nullptr) {
        if (existingNode == parentNode->getChildLeft()) {
            parentNode->setChildLeft(duplicateNode);
        } else if (existingNode == parentNode->getChildRight()) {
            parentNode->setChildRight(duplicateNode);
        } else if (existingNode == parentNode->getChildUp()) {
            parentNode->setChildUp(duplicateNode);
        } else if (existingNode == parentNode->getChildDown()) {
            parentNode->setChildDown(duplicateNode);
        }
    }
}

// Searches the entire tree to find any duplicate ancestors
bool Tree::searchForDuplicate(Node* currentNode, Node* newNode) {
    // Base case: the current node is nullptr
     cout << "inside search for dup\n";
    if (currentNode == nullptr) {
        return false;
    }
    // Check if the currentNode state is equal to newNode state
    if (currentNode->isEqual(newNode)) { // If a duplicate is found
        cout << "Update Child Pointer\n";
        updateChildPointer(currentNode, newNode);
        return true;
    }
    // Search in all four directions
     cout << "returning\n";
    return searchForDuplicate(currentNode->getChildLeft(), newNode) ||
           searchForDuplicate(currentNode->getChildRight(), newNode) ||
           searchForDuplicate(currentNode->getChildUp(), newNode) ||
           searchForDuplicate(currentNode->getChildDown(), newNode);
}

bool Tree::isThereADuplicate(Node* newNode) {
    cout << "inside is there a dup\n";

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