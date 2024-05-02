#ifndef ALGMISPLACED
#define ALGMISPLACED

#include "AlgGeneric.h"

using namespace std;

class AlgMisplaced : public AlgGeneric {
private:
public:
    queue<Node*>* queingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgMisplaced();
};

#endif