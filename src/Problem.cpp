#include "../headers/Problem.h"
#include "../headers/Node.h"
#include "../headers/Tree.h"
#include <array>    

//hardcoded problem
Problem::Problem(){
    array<array<int, SIZE>, SIZE> state{};
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            state[i][j] = i;
        }
    }
    initialState = new Node(state); //change hardcode to test or something
    goalState = new Node(Node());
    tree = new Tree(Tree(initialState));
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

int Problem::getnodeCount()
{
    return getTree()->getnodeCount();
}

void Problem::setnodeCount(int i)
{
    getTree()->setnodeCount(i);
}


//Operators (move empty space up/down/left/right)
Node* Problem::moveUp(Node *state){
   pair<int, int> location = findSpace(state); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(row > 0 && state->getTile(row - 1, col) != 0){
    //Create new node
    Node* upNode = new Node(state);
    int temp = upNode->getTile(row, col);
    upNode->setTile(row, col, upNode->getTile(row-1,col));
    upNode->setTile(row-1,col,temp);
    upNode->path = upNode->path + " Up ";
     /*
     cout <<"Up\n";
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << upNode->getTile(i,j) << " ";
        }
        cout << endl << endl;
    }*/
     //Check if new node is a duplicate
    if(tree->isThereADuplicate(upNode)/*memoize(rightNode)*/){
        return nullptr;
    }else{
        state->setChildUp(upNode);
        tree->incrementNodes();
        return upNode;
    }
   }
   else{
    return nullptr;
   }
   

}
Node* Problem::moveDown(Node* state){
   pair<int, int> location = findSpace(state); //Calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(row < SIZE - 1 && state->getTile(row + 1, col) != 0){
    Node* downNode = new Node(state);
    int temp = downNode->getTile(row, col);
    downNode->setTile(row, col, downNode->getTile(row+1,col));
    downNode->setTile(row+1,col,temp);
    downNode->path = downNode->path + " Down ";
    // Check if new node is a duplicate
    /*
    cout <<"Down after\n";
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << downNode->getTile(i,j) << " ";
        }
        cout << endl << endl;
    }*/
    
    if(tree->isThereADuplicate(downNode)/*memoize(rightNode)*/){
        return nullptr;
    }else{
        state->setChildDown(downNode);//fixed error
        tree->incrementNodes();
        return downNode;
    }
   }
   else{
    //std::cout << "Cannot move Down!\n";
    return nullptr;
   }


}
Node* Problem::moveLeft(Node *state){
   pair<int, int> location = findSpace(state); //Calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(col > 0 && state->getTile(row , col-1) != 0){
     Node* leftNode = new Node(state);
     int temp = leftNode->getTile(row,col);
     leftNode->setTile(row,col, leftNode->getTile(row,col-1));
     leftNode->setTile(row, col-1, temp);
     leftNode->path = leftNode->path + " Left ";
     /*
     cout <<"Left\n";
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << leftNode->getTile(i,j) << " ";
            }
        cout << endl << endl;
         }
    */
    // Check if new node is a duplicate
    if(tree->isThereADuplicate(leftNode)/*memoize(rightNode)*/){
        return nullptr;
    }else{
        state->setChildLeft(leftNode);//fixed error
        tree->incrementNodes();
        return leftNode;
    }
   }
   else{
    return nullptr;
   }


}
Node* Problem::moveRight(Node *state){
   pair<int, int> location = findSpace(state); //calls find space function to locate empty space (0 element)
   int row = location.first;
   int col= location.second;
   if(col < SIZE - 1 && state->getTile(row, col+1) != 0){
        Node* rightNode = new Node(state);
        int temp = rightNode->getTile(row,col);
        rightNode->setTile(row,col, rightNode->getTile(row,col+1)); 
        rightNode->setTile(row, col+1, temp);
        rightNode->path = rightNode->path + " Right ";
        /*
        cout <<"Right\n";
         for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << rightNode->getTile(i,j) << " ";
        }
        cout << endl << endl;
        } */
        // Check if new node is a duplicate
     if(tree->isThereADuplicate(rightNode)/*memoize(rightNode)*/){
        return nullptr;
     }else{
         state->setChildRight(rightNode);//fixed error
         tree->incrementNodes();
         return rightNode;
     }
   }

   else{
    //std::cout << "Cannot move right!\n";

    return nullptr;
   }
}

pair<int, int>Problem::findSpace(Node* state){
    for(int i = 0; i < SIZE; i++){
        for(int x = 0; x < SIZE; x++){
            if(state->getTile(i,x) == 0){
                return make_pair(i, x); //return pair as row and column
            }
        }
    }
    return make_pair(-1, -1); //this will throw an error if we cannot find a space
 }


Problem::~Problem(){
}

/*
 *
 * Returns FALSE if node's board does not exist in map (it is a new state)
 * Returns TRUE if node's board exists in map (it has been memozied already)

bool Problem::memoize(Node *node) {
    basic_string<char> hash_value = node->hash();
    try {
        // exists in map
        memoization.at(hash_value);
        return true;
    } catch (...) {
        // does not exist in map
        memoization[hash_value] = true;
        node->hash_value = hash_value;
        return false;
    }
}

void Problem::resetMemoization() {
    memoization.clear();
}
 */
