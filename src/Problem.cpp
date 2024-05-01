#include "../headers/Problem.h"


//hardcoded problem
Problem::Problem(){
    initialState = new Node(Node()); //change hardcode to test or something
    goalState = new Node(Node());
}
//user input initialState problem
Problem::Problem(Node* init)
{
    //create initial node from user input (display class?), then initialize tree with inital node as root
    initialState = init;
    goalState = new Node(Node());

    tree = new Tree(Tree(initialState));
}

//setters
void Problem::setInitialState(Node* init){
    initialState = init;
}

void Problem::setGoalState(Node* goal){
    goalState = goal;
}

//getters
Node* Problem::getInitialState(){
    return initialState;
}

Node* Problem::getGoalState(){
    return goalState;
}

Tree* Problem::getTree(){
    return tree;
}

//Operators (move empty space up/down/left/right)
Node* Problem::moveUp(Node *state){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;

   if(row > 0){
    // Create new node
    Node* upNode = new Node(*state);
    int temp = upNode->getTile(row, col);
    upNode->setTile(row, col, upNode->getTile(row-1,col));
    upNode->setTile(row-1,col,temp);

    // Check if new node is a duplicate
    if(tree->isThereADuplicate(upNode)){
        return nullptr;
    }else{
        state->setChildUp(upNode);
        tree->incrementNodes();
        return upNode;
    }
   }
   else{
    std::cout << "Cannot move Up!\n";
    return nullptr;
   }


}
Node* Problem::moveDown(Node* state){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(row < 2){
    Node* downNode = new Node(*state);
    int temp = downNode->getTile(row, col);
    downNode->setTile(row, col, downNode->getTile(row+1,col));
    downNode->setTile(row+1,col,temp);

    // Check if new node is a duplicate
    if(tree->isThereADuplicate(downNode)){
        return nullptr;
    }else{
        state->setChildUp(downNode);
        tree->incrementNodes();
        return downNode;
    }
   }
   else{
    std::cout << "Cannot move Down!\n";
    return nullptr;
   }


}
Node* Problem::moveLeft(Node *state){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(col > 0){
     Node* leftNode = new Node(*state);
     int temp = leftNode->getTile(row,col);
     leftNode->setTile(row,col, leftNode->getTile(row,col-1));
     leftNode->setTile(row, col-1, temp);
     
    // Check if new node is a duplicate
    if(tree->isThereADuplicate(leftNode)){
        return nullptr;
    }else{
        state->setChildUp(leftNode);
        tree->incrementNodes();
        return leftNode;
    }
   }
   else{
    std::cout << "Cannot move left!\n";
    return nullptr;
   }


}
Node* Problem::moveRight(Node *state){
   pair<int, int> location = findSpace(); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(col < 2){
        Node* rightNode = new Node(*state);
        int temp = rightNode->getTile(row,col);
        rightNode->setTile(row,col, rightNode->getTile(row,col-1));
        rightNode->setTile(row, col-1, temp);
     
        // Check if new node is a duplicate
     if(tree->isThereADuplicate(rightNode)){
        return nullptr;
     }else{
         state->setChildUp(rightNode);
         tree->incrementNodes();
         return rightNode;
     }
   }
   else{
    std::cout << "Cannot move right!\n";
    return nullptr;
   }
}

pair<int, int>Problem::findSpace(){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            if(initialState->getTile(i,x) == 0){
                return make_pair(i, x); //return pair as row and column
            }
        }
    }
    return make_pair(-1, -1); //this will throw an error if we cannot find a space
 }


Problem::~Problem(){
}

