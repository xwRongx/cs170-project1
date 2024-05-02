#ifndef ALGGENERIC
#define ALGGENERIC

#include "Node.h"
#include <queue>

using namespace std;

class AlgGeneric {
private:
public:
    virtual Node* GeneralSearch(Problem* p);
    virtual queue<Node*>* queingFunction(queue<Node*>*, queue<Node*>*);
};

#endif