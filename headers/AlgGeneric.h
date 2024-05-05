#ifndef ALGGENERIC
#define ALGGENERIC

#include "Node.h"
#include <queue>

using namespace std;

class AlgGeneric {

public:
    virtual Node* GeneralSearch(Problem* p);
    virtual queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*);
};

#endif