#include "../headers/Node.h"
#include "../headers/Tree.h"

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

    gn = -1;
    hn = -1;
    fn = -1;
}

//initialize specific board
Node::Node(int b[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = b[i][j];
        }
    }
}

Node::Node(Node* parentNode){
    parent = parentNode;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = parentNode->board[i][j];
        }
    }
    //parentNode->childDown; change based on operator
    //need to tree->incrementNodes(); where node is instantiated
    gn++;
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

void Node::setGn(int i){
    gn = 1;
}
void Node::setHn(int i){
    hn = i;
}
void Node::setFn(int i){
    fn = i;
}

//getters
int Node::getTile(int row, int col){
    return board[row][col];
}

int Node::getGn(){
    return gn;
}
int Node::getHn(){
    return hn;
}
int Node::getFn(){
    return fn;
}