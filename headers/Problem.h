#include <utility>
class Problem
{
private:
    int initial_state[3][3];
    int goal_state[3][3];
public:
    Problem(/* args */);
    int *getInitialState();
    int *getGoalState();
    void setInitialState(int initial[3][3]);
    void setGoalState(int goal[3][3]);
    void display();

    //Operators (move empty space up/down/left/right)
    bool moveUp();
    bool moveDown();
    bool moveLeft();
    bool moveRight();
    std::pair<int, int>findSpace(); //Find 0 (empty space) in the 3 by 3 array to begin operators(up, down left, right) 

    ~Problem();
};




