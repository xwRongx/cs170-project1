#ifndef ALGEUCLIDEAN
#define ALGEUCLIDEAN

#include "AlgGeneric.h"

using namespace std;

class AlgEuclidean : public AlgGeneric {
private:
public:
    queue<Node*>* queingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgEuclidean();
};

#endif