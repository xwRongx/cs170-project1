#include "../headers/Node.h"

//initializes goal state every time
Node::Node()
{
    int tile = 1;
    //initialize board to goal state
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(tile < 9){
                board[i][j] = tile;
                tile++; 
            }
            else{
                board[i][j] = 0;
            }
        }
    }
    parent = nullptr;
    childLeft = nullptr;
    childRight = nullptr;
    childUp = nullptr; 
    childDown = nullptr;
}

//initialize specific board
Node::Node(int b[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = b[i][j];
        }
    }
}

//setters
void Node::setParent(Node* par){
    parent = par;
}
void Node::setChildLeft(Node* left){
    childLeft = left;
}
void Node::setChildRight(Node* right){
    childRight = right;
}
void Node::setChildUp(Node* up){
    childUp = up;
}
void Node::setChildDown(Node* down){
    childDown = down;
}
void Node::setTile(int row, int col, int value){
    board[row][col] = value;
}

//getters
int Node::getTile(int row, int col){
    return board[row][col];
}
Node* Node::getParent() const {
    return parent;
}
Node* Node::getChildLeft() const {
    return childLeft;
}
Node* Node::getChildRight() const {
    return childRight;
}
Node* Node::getChildUp() const {
    return childUp;
}
Node* Node::getChildDown() const {
    return childDown;
}

//duplicateChecker in Tree
bool Node::isEqual(Node* n) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] != n->getTile(i, j)) {
                return false; // if there is a difference in any tile then return false
            }
        }
    } 
    return true; // all tiles match positions, return true
}

// if the board state of the current node is equal to the board state of node n
void Node::restoreState(const Node* previousNode) {
    // Copy the board state from the source node
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            this->board[i][j] = previousNode->board[i][j];
        }
    }
}