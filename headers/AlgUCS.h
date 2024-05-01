#ifndef ALGUCS
#define ALGUCS

#include "AlgGeneric.h"

using namespace std;

class AlgUCS : public AlgGeneric {
private:
public:
    queue<Node*> queingFunction(queue<Node*>, queue<Node*>) override;
    AlgUCS();
};

#endif