#ifndef ALGEUCLIDEAN
#define ALGEUCLIDEAN

#include "AlgGeneric.h"
#include <cmath>

using namespace std;

class AlgEuclidean : public AlgGeneric {
private:
    int goalState[3][3] = {{1,2,3}, {4,5,6},{7,8,0}};
    double calculateEuclideanDistance(Node* node);
    
public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgEuclidean();
};

#endif