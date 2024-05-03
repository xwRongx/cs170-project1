#ifndef ALGMISPLACED
#define ALGMISPLACED

#include "AlgGeneric.h"


using namespace std;

class AlgMisplaced : public AlgGeneric {
private:
bool compareNodeByFn(Node* a, Node* b) {
    return a->getFn() > b->getFn();
}

int numberMisplacedTiles(Node* node)
{
    int count = 0;
    int goalState[3][3] = {{1,2,3}, {4,5,6},{7,8,0}};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(goalState[i][j] == node->getTile(i,j)) count++;
        }
    }    
    return count;    
}


public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgMisplaced();
};

#endif
