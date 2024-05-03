#ifndef ALGMISPLACED
#define ALGMISPLACED

#include "AlgGeneric.h"


using namespace std;

class AlgMisplaced : public AlgGeneric {
private:
public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgMisplaced();
};

#endif