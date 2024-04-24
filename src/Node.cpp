#include "../headers/Node.h"

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

int Node::getTile(int row, int col){
    return board[row][col];
}