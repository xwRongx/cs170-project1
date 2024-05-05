#ifndef ALGGENERIC
#define ALGGENERIC

#include "Node.h"
#include <queue>
#include "Problem.h"

using namespace std;

class AlgGeneric {
private:
    int maxQueueNodes;

public:
    virtual Node* GeneralSearch(Problem* p);
    virtual queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*);
    int getMaxNodes()
    {
        return maxQueueNodes;
    };
};

#endif