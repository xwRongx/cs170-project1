#ifndef ALGMISPLACED
#define ALGMISPLACED

#include "AlgGeneric.h"
#include <vector>
#include "Problem.h"


using namespace std;

class AlgMisplaced : public AlgGeneric {
private:
int goalState[SIZE][SIZE];
int numberMisplacedTiles(Node* node)
{
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(goalState[i][j] != node->getTile(i,j)) count++;
        }
    }    
    return count;    
}

public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgMisplaced();
};

#endif
