#include "../headers/Node.h"
#include "../headers/Tree.h"
#include "../headers/Problem.h"
#include <queue>
#include<array>

using namespace std;


//initializes goal state every time
Node::Node()
{
    int tile = 1;
    int board_size = SIZE*SIZE;
    //initialize board to goal state
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(tile < board_size){
                board[i][j] = tile;
                tile++; 
            }
            else{
                board[i][j] = 0;
            }
        }
    }
    gn = -1;
    hn = -1;
    fn = -1;
}

//initialize specific board
Node::Node(array<array<int, SIZE>, SIZE> b){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            board[i][j] = b[i][j];
        }
    }
    gn = 0;
    hn = 0;
    fn = 0;
}

Node::Node(Node* parentNode){
    parent = parentNode;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            board[i][j] = parentNode->board[i][j];
        }
    }
    //parentNode->childDown; change based on operator
    //tree->incrementNodes(); is ran inside problem.cpp in each operator
    gn = parentNode->getGn()+1;
    hn = 0;
    fn = 0;
}

Node::~Node()
{

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
    gn = i;
}
void Node::setHn(int i){
    hn = i;
}
void Node::setFn(int i){
    fn = i;
}
void Node::setHnEuclidean(float euclideanDistance){ // Euclidean Heuristic h(n)
    hn_euclidean = euclideanDistance;
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

int Node::getGn(){
    return gn;
}
int Node::getHn(){
    return hn;
}
int Node::getFn(){
    return fn;
}
float Node::getHnEuclidean(){
    return hn_euclidean;
}

bool Node::isEqual(Node* n) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != n->getTile(i, j)) {
                return false; // if there is a difference in any tile then return false
            }
        }
    } 
    return true; // all tiles match positions, return true
}

/*
vector Node::expand(){
  //setup
  parentNode;
  newNode = new Node(parentNode);
  newNode = operator(newNode); //move up/down/left/right so makes a new board state
  if (!isThereADuplicate(newNode)){
    //if there is no duplicate, then we can add to queue
    //if there is a duplicate we dont do anything bc its already expanded
  }
  return queue of all new expanded nodes;
}
*/
queue<Node*>* Node::expand(Problem* p){
    queue<Node*> *queue = new ::queue<Node*>; //fixed error
     /*
     cout <<"Initial\n";
         for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << this->getTile(i,j) << " ";
        }
        cout << endl << endl;
        } 
    */
    Node* upChild = p->moveUp(this);
    Node* downChild = p->moveDown(this);
    Node* leftChild = p->moveLeft(this);
    Node* rightChild = p->moveRight(this);

    if(upChild != nullptr){
        queue->push(upChild);
    } 
    if(downChild != nullptr){
        queue->push(downChild);
    }
    if(leftChild != nullptr){
        queue->push(leftChild);
    }
    if(rightChild != nullptr){
        queue->push(rightChild);
    }
    //if tree->duplicate, needs tree changes
    return queue;
}
