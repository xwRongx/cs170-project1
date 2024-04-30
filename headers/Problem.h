#include "Node.h"
#include "Tree.h"
#include <utility>
#include <functional>

class Problem
{
private:
    Node* initialState;
    Node* goalState;
    Tree* tree;
public:
    Problem();
    Problem(Node* init);

    //setters
    void setInitialState(Node* init);
    void setGoalState(Node* goal);

    //getters
    Node* getInitialState();
    Node* getGoalState();
    
    //Operators (move empty space up/down/left/right)
    bool moveUp();
    bool moveDown();
    bool moveLeft();
    bool moveRight();
    std::pair<int, int>findSpace(); //Find 0 (empty space) in the 3 by 3 array to begin operators(up, down left, right)

    bool checkIfStateIsGoal(Node n);
    ~Problem();
};